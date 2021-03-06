/*
 * Copyright (C) 2018 Intel Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <hypervisor.h>
#include <multiboot.h>
#include <boot_context.h>
#include <vm0_boot.h>

#ifdef CONFIG_EFI_STUB

static void efi_spurious_handler(int32_t vector)
{
	if (get_cpu_id() == BOOT_CPU_ID) {
		struct acrn_vcpu *vcpu = per_cpu(vcpu, BOOT_CPU_ID);

		if (vcpu != NULL) {
			vlapic_set_intr(vcpu, vector, LAPIC_TRIG_EDGE);
		} else {
			pr_err("%s vcpu or vlapic is not ready, interrupt lost\n", __func__);
		}
	}
}

static int32_t uefi_sw_loader(struct acrn_vm *vm)
{
	int32_t ret = 0;
	struct acrn_vcpu *vcpu = get_primary_vcpu(vm);
	struct acrn_vcpu_regs *vcpu_regs = &boot_context;
	const struct efi_context *efi_ctx = get_efi_ctx();
	const struct lapic_regs *uefi_lapic_regs = get_efi_lapic_regs();

	pr_dbg("Loading guest to run-time location");

	vlapic_restore(vcpu_vlapic(vcpu), uefi_lapic_regs);

	/* For UEFI platform, the bsp init regs come from two places:
	 * 1. saved in efi_boot: gpregs, rip
	 * 2. saved when HV started: other registers
	 * We copy the info saved in efi_boot to boot_context and
	 * init bsp with boot_context.
	 */
	memcpy_s(&(vcpu_regs->gprs), sizeof(struct acrn_gp_regs),
		&(efi_ctx->vcpu_regs.gprs), sizeof(struct acrn_gp_regs));

	vcpu_regs->rip = efi_ctx->vcpu_regs.rip;
	set_vcpu_regs(vcpu, vcpu_regs);

	/* defer irq enabling till vlapic is ready */
	CPU_IRQ_ENABLE();

	return ret;
}

int32_t efi_boot_init(void)
{
	vm_sw_loader = uefi_sw_loader;
	spurious_handler = (spurious_handler_t)efi_spurious_handler;

	return 0;
}
#endif
