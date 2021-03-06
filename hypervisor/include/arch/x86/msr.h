/*
 * Copyright (C) 2018 Intel Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef MSR_H
#define MSR_H

/* architectural (common) MSRs */

/* Machine check address for MC exception handler */
#define MSR_IA32_P5_MC_ADDR			0x00000000U
/* Machine check error type for MC exception handler */
#define MSR_IA32_P5_MC_TYPE			0x00000001U
/* System coherence line size for MWAIT/MONITOR */
#define MSR_IA32_MONITOR_FILTER_SIZE		0x00000006U
#define MSR_IA32_TIME_STAMP_COUNTER		0x00000010U
#define MSR_IA32_PLATFORM_ID			0x00000017U
#define MSR_IA32_APIC_BASE			0x0000001BU
#define MSR_IA32_FEATURE_CONTROL		0x0000003AU
#define MSR_IA32_TSC_ADJUST			0x0000003BU
/* Speculation Control */
#define MSR_IA32_SPEC_CTRL			0x00000048U
/* Prediction Command */
#define MSR_IA32_PRED_CMD			0x00000049U
#define MSR_IA32_BIOS_UPDT_TRIG			0x00000079U
#define MSR_IA32_BIOS_SIGN_ID			0x0000008BU
#define MSR_IA32_SGXLEPUBKEYHASH0		0x0000008CU
#define MSR_IA32_SGXLEPUBKEYHASH1		0x0000008DU
#define MSR_IA32_SGXLEPUBKEYHASH2		0x0000008EU
#define MSR_IA32_SGXLEPUBKEYHASH3		0x0000008FU
#define MSR_IA32_SMM_MONITOR_CTL		0x0000009BU
#define MSR_IA32_SMBASE				0x0000009EU
#define MSR_IA32_PMC0				0x000000C1U
#define MSR_IA32_PMC1				0x000000C2U
#define MSR_IA32_PMC2				0x000000C3U
#define MSR_IA32_PMC3				0x000000C4U
#define MSR_IA32_PMC4				0x000000C5U
#define MSR_IA32_PMC5				0x000000C6U
#define MSR_IA32_PMC6				0x000000C7U
#define MSR_IA32_PMC7				0x000000C8U
/* Max. qualified performance clock counter */
#define MSR_IA32_MPERF				0x000000E7U
/* Actual performance clock counter */
#define MSR_IA32_APERF				0x000000E8U
#define MSR_IA32_MTRR_CAP			0x000000FEU
#define MSR_IA32_ARCH_CAPABILITIES		0x0000010AU
#define MSR_IA32_FLUSH_CMD			0x0000010BU
#define MISC_FEATURE_ENABLES			0x00000140U
#define MSR_IA32_SYSENTER_CS			0x00000174U
#define MSR_IA32_SYSENTER_ESP			0x00000175U
#define MSR_IA32_SYSENTER_EIP			0x00000176U
#define MSR_IA32_MCG_CAP			0x00000179U
#define MSR_IA32_MCG_STATUS			0x0000017AU
#define MSR_IA32_MCG_CTL			0x0000017BU
#define MSR_IA32_PERFEVTSEL0			0x00000186U
#define MSR_IA32_PERFEVTSEL1			0x00000187U
#define MSR_IA32_PERFEVTSEL2			0x00000188U
#define MSR_IA32_PERFEVTSEL3			0x00000189U
#define MSR_IA32_PERF_STATUS			0x00000198U
#define MSR_IA32_PERF_CTL			0x00000199U
#define MSR_IA32_CLOCK_MODULATION		0x0000019AU
#define MSR_IA32_THERM_INTERRUPT		0x0000019BU
#define MSR_IA32_THERM_STATUS			0x0000019CU
#define MSR_IA32_MISC_ENABLE			0x000001A0U
#define MSR_IA32_ENERGY_PERF_BIAS		0x000001B0U
#define MSR_IA32_DEBUGCTL			0x000001D9U
#define MSR_IA32_SMRR_PHYSBASE			0x000001F2U
#define MSR_IA32_SMRR_PHYSMASK			0x000001F3U
#define MSR_IA32_PLATFORM_DCA_CAP		0x000001F8U
#define MSR_IA32_CPU_DCA_CAP			0x000001F9U
#define MSR_IA32_DCA_0_CAP			0x000001FAU
#define MSR_IA32_MTRR_PHYSBASE_0		0x00000200U
#define MSR_IA32_MTRR_PHYSMASK_0		0x00000201U
#define MSR_IA32_MTRR_PHYSBASE_1		0x00000202U
#define MSR_IA32_MTRR_PHYSMASK_1		0x00000203U
#define MSR_IA32_MTRR_PHYSBASE_2		0x00000204U
#define MSR_IA32_MTRR_PHYSMASK_2		0x00000205U
#define MSR_IA32_MTRR_PHYSBASE_3		0x00000206U
#define MSR_IA32_MTRR_PHYSMASK_3		0x00000207U
#define MSR_IA32_MTRR_PHYSBASE_4		0x00000208U
#define MSR_IA32_MTRR_PHYSMASK_4		0x00000209U
#define MSR_IA32_MTRR_PHYSBASE_5		0x0000020AU
#define MSR_IA32_MTRR_PHYSMASK_5		0x0000020BU
#define MSR_IA32_MTRR_PHYSBASE_6		0x0000020CU
#define MSR_IA32_MTRR_PHYSMASK_6		0x0000020DU
#define MSR_IA32_MTRR_PHYSBASE_7		0x0000020EU
#define MSR_IA32_MTRR_PHYSMASK_7		0x0000020FU
#define MSR_IA32_MTRR_PHYSBASE_8		0x00000210U
#define MSR_IA32_MTRR_PHYSMASK_8		0x00000211U
#define MSR_IA32_MTRR_PHYSBASE_9		0x00000212U
#define MSR_IA32_MTRR_PHYSMASK_9		0x00000213U
#define MSR_IA32_MTRR_FIX64K_00000		0x00000250U
#define MSR_IA32_MTRR_FIX16K_80000		0x00000258U
#define MSR_IA32_MTRR_FIX16K_A0000		0x00000259U
#define MSR_IA32_MTRR_FIX4K_C0000		0x00000268U
#define MSR_IA32_MTRR_FIX4K_C8000		0x00000269U
#define MSR_IA32_MTRR_FIX4K_D0000		0x0000026AU
#define MSR_IA32_MTRR_FIX4K_D8000		0x0000026BU
#define MSR_IA32_MTRR_FIX4K_E0000		0x0000026CU
#define MSR_IA32_MTRR_FIX4K_E8000		0x0000026DU
#define MSR_IA32_MTRR_FIX4K_F0000		0x0000026EU
#define MSR_IA32_MTRR_FIX4K_F8000		0x0000026FU
#define MSR_IA32_PAT				0x00000277U
#define MSR_IA32_MC0_CTL2			0x00000280U
#define MSR_IA32_MC1_CTL2			0x00000281U
#define MSR_IA32_MC2_CTL2			0x00000282U
#define MSR_IA32_MC3_CTL2			0x00000283U
#define MSR_IA32_MC4_CTL2			0x00000284U
#define MSR_IA32_MC5_CTL2			0x00000285U
#define MSR_IA32_MC6_CTL2			0x00000286U
#define MSR_IA32_MC7_CTL2			0x00000287U
#define MSR_IA32_MC8_CTL2			0x00000288U
#define MSR_IA32_MC9_CTL2			0x00000289U
#define MSR_IA32_MC10_CTL2			0x0000028AU
#define MSR_IA32_MC11_CTL2			0x0000028BU
#define MSR_IA32_MC12_CTL2			0x0000028CU
#define MSR_IA32_MC13_CTL2			0x0000028DU
#define MSR_IA32_MC14_CTL2			0x0000028EU
#define MSR_IA32_MC15_CTL2			0x0000028FU
#define MSR_IA32_MC16_CTL2			0x00000290U
#define MSR_IA32_MC17_CTL2			0x00000291U
#define MSR_IA32_MC18_CTL2			0x00000292U
#define MSR_IA32_MC19_CTL2			0x00000293U
#define MSR_IA32_MC20_CTL2			0x00000294U
#define MSR_IA32_MC21_CTL2			0x00000295U
#define MSR_IA32_MTRR_DEF_TYPE			0x000002FFU
#define MSR_SGXOWNEREPOCH0			0x00000300U
#define MSR_SGXOWNEREPOCH1			0x00000301U
#define MSR_IA32_FIXED_CTR0			0x00000309U
#define MSR_IA32_FIXED_CTR1			0x0000030AU
#define MSR_IA32_FIXED_CTR2			0x0000030BU
#define MSR_IA32_PERF_CAPABILITIES		0x00000345U
#define MSR_IA32_FIXED_CTR_CTL			0x0000038DU
#define MSR_IA32_PERF_GLOBAL_STATUS		0x0000038EU
#define MSR_IA32_PERF_GLOBAL_CTRL		0x0000038FU
#define MSR_IA32_PERF_GLOBAL_OVF_CTRL		0x00000390U
#define MSR_IA32_PERF_GLOBAL_STATUS_SET		0x00000391U
#define MSR_IA32_PERF_GLOBAL_INUSE		0x00000392U
#define MSR_IA32_PEBS_ENABLE			0x000003F1U
#define MSR_IA32_MC0_CTL			0x00000400U
#define MSR_IA32_MC0_STATUS			0x00000401U
#define MSR_IA32_MC0_ADDR			0x00000402U
#define MSR_IA32_MC0_MISC			0x00000403U
#define MSR_IA32_MC1_CTL			0x00000404U
#define MSR_IA32_MC1_STATUS			0x00000405U
#define MSR_IA32_MC1_ADDR			0x00000406U
#define MSR_IA32_MC1_MISC			0x00000407U
#define MSR_IA32_MC2_CTL			0x00000408U
#define MSR_IA32_MC2_STATUS			0x00000409U
#define MSR_IA32_MC2_ADDR			0x0000040AU
#define MSR_IA32_MC2_MISC			0x0000040BU
#define MSR_IA32_MC3_CTL			0x0000040CU
#define MSR_IA32_MC3_STATUS			0x0000040DU
#define MSR_IA32_MC3_ADDR			0x0000040EU
#define MSR_IA32_MC3_MISC			0x0000040FU
#define MSR_IA32_MC4_CTL			0x00000410U
#define MSR_IA32_MC4_STATUS			0x00000411U
#define MSR_IA32_MC4_ADDR			0x00000412U
#define MSR_IA32_MC4_MISC			0x00000413U
#define MSR_IA32_MC5_CTL			0x00000414U
#define MSR_IA32_MC5_STATUS			0x00000415U
#define MSR_IA32_MC5_ADDR			0x00000416U
#define MSR_IA32_MC5_MISC			0x00000417U
#define MSR_IA32_MC6_CTL			0x00000418U
#define MSR_IA32_MC6_STATUS			0x00000419U
#define MSR_IA32_MC6_ADDR			0x0000041AU
#define MSR_IA32_MC6_MISC			0x0000041BU
#define MSR_IA32_MC7_CTL			0x0000041CU
#define MSR_IA32_MC7_STATUS			0x0000041DU
#define MSR_IA32_MC7_ADDR			0x0000041EU
#define MSR_IA32_MC7_MISC			0x0000041FU
#define MSR_IA32_MC8_CTL			0x00000420U
#define MSR_IA32_MC8_STATUS			0x00000421U
#define MSR_IA32_MC8_ADDR			0x00000422U
#define MSR_IA32_MC8_MISC			0x00000423U
#define MSR_IA32_MC9_CTL			0x00000424U
#define MSR_IA32_MC9_STATUS			0x00000425U
#define MSR_IA32_MC9_ADDR			0x00000426U
#define MSR_IA32_MC9_MISC			0x00000427U
#define MSR_IA32_MC10_CTL			0x00000428U
#define MSR_IA32_MC10_STATUS			0x00000429U
#define MSR_IA32_MC10_ADDR			0x0000042AU
#define MSR_IA32_MC10_MISC			0x0000042BU
#define MSR_IA32_MC11_CTL			0x0000042CU
#define MSR_IA32_MC11_STATUS			0x0000042DU
#define MSR_IA32_MC11_ADDR			0x0000042EU
#define MSR_IA32_MC11_MISC			0x0000042FU
#define MSR_IA32_MC12_CTL			0x00000430U
#define MSR_IA32_MC12_STATUS			0x00000431U
#define MSR_IA32_MC12_ADDR			0x00000432U
#define MSR_IA32_MC12_MISC			0x00000433U
#define MSR_IA32_MC13_CTL			0x00000434U
#define MSR_IA32_MC13_STATUS			0x00000435U
#define MSR_IA32_MC13_ADDR			0x00000436U
#define MSR_IA32_MC13_MISC			0x00000437U
#define MSR_IA32_MC14_CTL			0x00000438U
#define MSR_IA32_MC14_STATUS			0x00000439U
#define MSR_IA32_MC14_ADDR			0x0000043AU
#define MSR_IA32_MC14_MISC			0x0000043BU
#define MSR_IA32_MC15_CTL			0x0000043CU
#define MSR_IA32_MC15_STATUS			0x0000043DU
#define MSR_IA32_MC15_ADDR			0x0000043EU
#define MSR_IA32_MC15_MISC			0x0000043FU
#define MSR_IA32_MC16_CTL			0x00000440U
#define MSR_IA32_MC16_STATUS			0x00000441U
#define MSR_IA32_MC16_ADDR			0x00000442U
#define MSR_IA32_MC16_MISC			0x00000443U
#define MSR_IA32_MC17_CTL			0x00000444U
#define MSR_IA32_MC17_STATUS			0x00000445U
#define MSR_IA32_MC17_ADDR			0x00000446U
#define MSR_IA32_MC17_MISC			0x00000447U
#define MSR_IA32_MC18_CTL			0x00000448U
#define MSR_IA32_MC18_STATUS			0x00000449U
#define MSR_IA32_MC18_ADDR			0x0000044AU
#define MSR_IA32_MC18_MISC			0x0000044BU
#define MSR_IA32_MC19_CTL			0x0000044CU
#define MSR_IA32_MC19_STATUS			0x0000044DU
#define MSR_IA32_MC19_ADDR			0x0000044EU
#define MSR_IA32_MC19_MISC			0x0000044FU
#define MSR_IA32_MC20_CTL			0x00000450U
#define MSR_IA32_MC20_STATUS			0x00000451U
#define MSR_IA32_MC20_ADDR			0x00000452U
#define MSR_IA32_MC20_MISC			0x00000453U
#define MSR_IA32_MC21_CTL			0x00000454U
#define MSR_IA32_MC21_STATUS			0x00000455U
#define MSR_IA32_MC21_ADDR			0x00000456U
#define MSR_IA32_MC21_MISC			0x00000457U
#define MSR_IA32_VMX_BASIC			0x00000480U
#define MSR_IA32_VMX_PINBASED_CTLS		0x00000481U
#define MSR_IA32_VMX_PROCBASED_CTLS		0x00000482U
#define MSR_IA32_VMX_EXIT_CTLS			0x00000483U
#define MSR_IA32_VMX_ENTRY_CTLS			0x00000484U
#define MSR_IA32_VMX_MISC			0x00000485U
#define MSR_IA32_VMX_CR0_FIXED0			0x00000486U
#define MSR_IA32_VMX_CR0_FIXED1			0x00000487U
#define MSR_IA32_VMX_CR4_FIXED0			0x00000488U
#define MSR_IA32_VMX_CR4_FIXED1			0x00000489U
#define MSR_IA32_VMX_VMCS_ENUM			0x0000048AU
#define MSR_IA32_VMX_PROCBASED_CTLS2		0x0000048BU
#define MSR_IA32_VMX_EPT_VPID_CAP		0x0000048CU
#define MSR_IA32_VMX_TRUE_PINBASED_CTLS		0x0000048DU
#define MSR_IA32_VMX_TRUE_PROCBASED_CTLS	0x0000048EU
#define MSR_IA32_VMX_TRUE_EXIT_CTLS		0x0000048FU
#define MSR_IA32_VMX_TRUE_ENTRY_CTLS		0x00000490U
#define MSR_IA32_VMX_VMFUNC			0x00000491U
#define MSR_IA32_A_PMC0				0x000004C1U
#define MSR_IA32_A_PMC1				0x000004C2U
#define MSR_IA32_A_PMC2				0x000004C3U
#define MSR_IA32_A_PMC3				0x000004C4U
#define MSR_IA32_A_PMC4				0x000004C5U
#define MSR_IA32_A_PMC5				0x000004C6U
#define MSR_IA32_A_PMC6				0x000004C7U
#define MSR_IA32_A_PMC7				0x000004C8U
#define MSR_IA32_MCG_EXT_CTL			0x000004D0U
#define MSR_IA32_SGX_SVN_STATUS			0x00000500U
#define MSR_IA32_RTIT_OUTPUT_BASE		0x00000560U
#define MSR_IA32_RTIT_OUTPUT_MASK_PTRS		0x00000561U
#define MSR_IA32_RTIT_CTL			0x00000570U
#define MSR_IA32_RTIT_STATUS			0x00000571U
#define MSR_IA32_RTIT_CR3_MATCH			0x00000572U
#define MSR_IA32_RTIT_ADDR0_A			0x00000580U
#define MSR_IA32_RTIT_ADDR0_B			0x00000581U
#define MSR_IA32_RTIT_ADDR1_A			0x00000582U
#define MSR_IA32_RTIT_ADDR1_B			0x00000583U
#define MSR_IA32_RTIT_ADDR2_A			0x00000584U
#define MSR_IA32_RTIT_ADDR2_B			0x00000585U
#define MSR_IA32_RTIT_ADDR3_A			0x00000586U
#define MSR_IA32_RTIT_ADDR3_B			0x00000587U
#define MSR_IA32_DS_AREA			0x00000600U
#define MSR_IA32_TSC_DEADLINE			0x000006E0U
#define MSR_IA32_PM_ENABLE			0x00000770U
#define MSR_IA32_HWP_CAPABILITIES		0x00000771U
#define MSR_IA32_HWP_REQUEST_PKG		0x00000772U
#define MSR_IA32_HWP_INTERRUPT			0x00000773U
#define MSR_IA32_HWP_REQUEST			0x00000774U
#define MSR_IA32_HWP_PECI_REQUEST_INFO		0x00000775U
#define MSR_IA32_HWP_STATUS			0x00000777U

#define MSR_IA32_EXT_XAPICID			0x00000802U
#define MSR_IA32_EXT_APIC_VERSION		0x00000803U
#define MSR_IA32_EXT_APIC_TPR			0x00000808U
#define MSR_IA32_EXT_APIC_PPR			0x0000080AU
#define MSR_IA32_EXT_APIC_EOI			0x0000080BU
#define MSR_IA32_EXT_APIC_LDR			0x0000080DU
#define MSR_IA32_EXT_APIC_SIVR			0x0000080FU
#define MSR_IA32_EXT_APIC_ISR0			0x00000810U
#define MSR_IA32_EXT_APIC_ISR1			0x00000811U
#define MSR_IA32_EXT_APIC_ISR2			0x00000812U
#define MSR_IA32_EXT_APIC_ISR3			0x00000813U
#define MSR_IA32_EXT_APIC_ISR4			0x00000814U
#define MSR_IA32_EXT_APIC_ISR5			0x00000815U
#define MSR_IA32_EXT_APIC_ISR6			0x00000816U
#define MSR_IA32_EXT_APIC_ISR7			0x00000817U
#define MSR_IA32_EXT_APIC_TMR0			0x00000818U
#define MSR_IA32_EXT_APIC_TMR1			0x00000819U
#define MSR_IA32_EXT_APIC_TMR2			0x0000081AU
#define MSR_IA32_EXT_APIC_TMR3			0x0000081BU
#define MSR_IA32_EXT_APIC_TMR4			0x0000081CU
#define MSR_IA32_EXT_APIC_TMR5			0x0000081DU
#define MSR_IA32_EXT_APIC_TMR6			0x0000081EU
#define MSR_IA32_EXT_APIC_TMR7			0x0000081FU
#define MSR_IA32_EXT_APIC_IRR0			0x00000820U
#define MSR_IA32_EXT_APIC_IRR1			0x00000821U
#define MSR_IA32_EXT_APIC_IRR2			0x00000822U
#define MSR_IA32_EXT_APIC_IRR3			0x00000823U
#define MSR_IA32_EXT_APIC_IRR4			0x00000824U
#define MSR_IA32_EXT_APIC_IRR5			0x00000825U
#define MSR_IA32_EXT_APIC_IRR6			0x00000826U
#define MSR_IA32_EXT_APIC_IRR7			0x00000827U
#define MSR_IA32_EXT_APIC_ESR			0x00000828U
#define MSR_IA32_EXT_APIC_LVT_CMCI		0x0000082FU
#define MSR_IA32_EXT_APIC_ICR			0x00000830U
#define MSR_IA32_EXT_APIC_LVT_TIMER		0x00000832U
#define MSR_IA32_EXT_APIC_LVT_THERMAL		0x00000833U
#define MSR_IA32_EXT_APIC_LVT_PMI		0x00000834U
#define MSR_IA32_EXT_APIC_LVT_LINT0		0x00000835U
#define MSR_IA32_EXT_APIC_LVT_LINT1		0x00000836U
#define MSR_IA32_EXT_APIC_LVT_ERROR		0x00000837U
#define MSR_IA32_EXT_APIC_INIT_COUNT		0x00000838U
#define MSR_IA32_EXT_APIC_CUR_COUNT		0x00000839U
#define MSR_IA32_EXT_APIC_DIV_CONF		0x0000083EU
#define MSR_IA32_EXT_APIC_SELF_IPI		0x0000083FU
#define MSR_IA32_DEBUG_INTERFACE		0x00000C80U
#define MSR_IA32_L3_QOS_CFG			0x00000C81U
#define MSR_IA32_L2_QOS_CFG			0x00000C82U
#define MSR_IA32_QM_EVTSEL			0x00000C8DU
#define MSR_IA32_QM_CTR				0x00000C8EU
#define MSR_IA32_PQR_ASSOC			0x00000C8FU
#define MSR_IA32_L3_MASK_0			0x00000C90U
#define MSR_IA32_L2_MASK_0			0x00000D10U
#define MSR_IA32_BNDCFGS			0x00000D90U
#define MSR_IA32_EFER				0xC0000080U
#define MSR_IA32_STAR				0xC0000081U
#define MSR_IA32_LSTAR				0xC0000082U
#define MSR_IA32_FMASK				0xC0000084U
#define MSR_IA32_FS_BASE			0xC0000100U
#define MSR_IA32_GS_BASE			0xC0000101U
#define MSR_IA32_KERNEL_GS_BASE			0xC0000102U
#define MSR_IA32_TSC_AUX			0xC0000103U

/* ATOM specific MSRs */
#define MSR_ATOM_EBL_CR_POWERON			0x0000002AU
#define MSR_ATOM_LASTBRANCH_0_FROM_IP		0x00000040U
#define MSR_ATOM_LASTBRANCH_1_FROM_IP		0x00000041U
#define MSR_ATOM_LASTBRANCH_2_FROM_IP		0x00000042U
#define MSR_ATOM_LASTBRANCH_3_FROM_IP		0x00000043U
#define MSR_ATOM_LASTBRANCH_4_FROM_IP		0x00000044U
#define MSR_ATOM_LASTBRANCH_5_FROM_IP		0x00000045U
#define MSR_ATOM_LASTBRANCH_6_FROM_IP		0x00000046U
#define MSR_ATOM_LASTBRANCH_7_FROM_IP		0x00000047U
#define MSR_ATOM_LASTBRANCH_0_TO_LIP		0x00000060U
#define MSR_ATOM_LASTBRANCH_1_TO_LIP		0x00000061U
#define MSR_ATOM_LASTBRANCH_2_TO_LIP		0x00000062U
#define MSR_ATOM_LASTBRANCH_3_TO_LIP		0x00000063U
#define MSR_ATOM_LASTBRANCH_4_TO_LIP		0x00000064U
#define MSR_ATOM_LASTBRANCH_5_TO_LIP		0x00000065U
#define MSR_ATOM_LASTBRANCH_6_TO_LIP		0x00000066U
#define MSR_ATOM_LASTBRANCH_7_TO_LIP		0x00000067U
/* Scalable bus speed */
#define MSR_ATOM_FSB_FREQ			0x000000CDU
#define MSR_PLATFORM_INFO			0x000000CEU
/* L2 hardware enabled */
#define MSR_ATOM_BBL_CR_CTL3			0x0000011EU
#define MSR_ATOM_THERM2_CTL			0x0000019DU
#define MSR_ATOM_LASTBRANCH_TOS			0x000001C9U
#define MSR_ATOM_LER_FROM_LIP			0x000001DDU
#define MSR_ATOM_LER_TO_LIP			0x000001DEU

#ifdef PROFILING_ON
/* Core (and Goldmont) specific MSRs */
#define MSR_CORE_LASTBRANCH_TOS			0x000001C9U
/* Last branch record stack TOS */
#define MSR_CORE_LASTBRANCH_0_FROM_IP		0x00000680U
/* Last branch record 0 from IP */
#define MSR_CORE_LASTBRANCH_0_TO_IP		0x000006C0U
/* Last branch record 0 to IP */
#endif

/* LINCROFT specific MSRs */
#define MSR_LNC_BIOS_CACHE_AS_RAM		0x000002E0U	/* Configure CAR */

/* EFER bits */
#define MSR_IA32_EFER_SCE_BIT			(1UL << 0U)
#define MSR_IA32_EFER_LME_BIT			(1UL << 8U)	/* IA32e mode enable */
#define MSR_IA32_EFER_LMA_BIT			(1UL << 10U)	/* IA32e mode active */
#define MSR_IA32_EFER_NXE_BIT			(1UL << 11U)

/* FEATURE CONTROL bits */
#define MSR_IA32_FEATURE_CONTROL_LOCK		(1U << 0U)
#define MSR_IA32_FEATURE_CONTROL_VMX_SMX	(1U << 1U)
#define MSR_IA32_FEATURE_CONTROL_VMX_NO_SMX	(1U << 2U)
#define MSR_IA32_FEATURE_CONTROL_SENTERS_MSK	(0x7F00U)
#define MSR_IA32_FEATURE_CONTROL_SENTER		(1U << 15U)
#define MSR_IA32_FEATURE_CONTROL_SGX_LC		(1U << 17U)
#define MSR_IA32_FEATURE_CONTROL_SGX_GE		(1U << 18U)

/* PAT memory type definitions */
#define PAT_MEM_TYPE_UC				0x00UL	/* uncached */
#define PAT_MEM_TYPE_WC				0x01UL	/* write combining */
#define PAT_MEM_TYPE_WT				0x04UL	/* write through */
#define PAT_MEM_TYPE_WP				0x05UL	/* write protected */
#define PAT_MEM_TYPE_WB				0x06UL	/* writeback */
#define PAT_MEM_TYPE_UCM			0x07UL	/* uncached minus */

/* MISC_ENABLE bits: architectural */
#define MSR_IA32_MISC_ENABLE_FAST_STRING	(1U << 0U)

#ifndef ASSEMBLER
static inline bool pat_mem_type_invalid(uint64_t x)
{
	return ((x & ~0x7UL) != 0UL || (x & 0x6UL) == 0x2UL);
}

static inline bool is_x2apic_msr(uint32_t msr)
{
	bool ret = false;
	/*
	 * if msr is in the range of x2APIC MSRs
	 */
	if ((msr >= MSR_IA32_EXT_XAPICID) && (msr <= MSR_IA32_EXT_APIC_SELF_IPI)) {
		ret = true;
	}
	return ret;
}

static inline bool is_x2apic_read_only_msr(uint32_t msr)
{
	bool ret = false;

	if ((msr == MSR_IA32_EXT_XAPICID) ||
		(msr == MSR_IA32_EXT_APIC_VERSION) ||
		(msr == MSR_IA32_EXT_APIC_PPR) ||
		(msr == MSR_IA32_EXT_APIC_LDR) ||
		((msr >= MSR_IA32_EXT_APIC_ISR0) &&
		(msr <= MSR_IA32_EXT_APIC_IRR7)) ||
		(msr == MSR_IA32_EXT_APIC_CUR_COUNT)) {
		ret = true;
	}
	return ret;
}

static inline bool is_x2apic_write_only_msr(uint32_t msr)
{
	bool ret = false;
	if ((msr == MSR_IA32_EXT_APIC_EOI) || (msr == MSR_IA32_EXT_APIC_SELF_IPI)) {
		ret = true;
	}
	return ret;
}
#endif /* ASSEMBLER */

/* 5 high-order bits in every field are reserved */
#define PAT_FIELD_RSV_BITS			(0xF8U)

#define PAT_POWER_ON_VALUE	(PAT_MEM_TYPE_WB + \
	(PAT_MEM_TYPE_WT << 8U) + \
	(PAT_MEM_TYPE_UCM << 16U) + \
	(PAT_MEM_TYPE_UC << 24U) + \
	(PAT_MEM_TYPE_WB << 32U) + \
	(PAT_MEM_TYPE_WT << 40U) + \
	(PAT_MEM_TYPE_UCM << 48U) + \
	(PAT_MEM_TYPE_UC << 56U))

#define PAT_ALL_UC_VALUE (PAT_MEM_TYPE_UC + \
	(PAT_MEM_TYPE_UC << 8U) + \
	(PAT_MEM_TYPE_UC << 16U) + \
	(PAT_MEM_TYPE_UC << 24U) + \
	(PAT_MEM_TYPE_UC << 32U) + \
	(PAT_MEM_TYPE_UC << 40U) + \
	(PAT_MEM_TYPE_UC << 48U) + \
	(PAT_MEM_TYPE_UC << 56U))

/* MTRR memory type definitions */
#define MTRR_MEM_TYPE_UC			0x00UL	/* uncached */
#define MTRR_MEM_TYPE_WC			0x01UL	/* write combining */
#define MTRR_MEM_TYPE_WT			0x04UL	/* write through */
#define MTRR_MEM_TYPE_WP			0x05UL	/* write protected */
#define MTRR_MEM_TYPE_WB			0x06UL	/* writeback */

/* misc. MTRR flag definitions */
#define MTRR_ENABLE				0x800U	/* MTRR enable */
#define MTRR_FIX_ENABLE				0x400U	/* fixed range MTRR enable */
#define MTRR_VALID				0x800U	/* MTRR setting is valid */

/* SPEC & PRED bit */
#define SPEC_ENABLE_IBRS			(1U << 0U)
#define SPEC_ENABLE_STIBP			(1U << 1U)
#define PRED_SET_IBPB				(1U << 0U)

/* IA32 ARCH Capabilities bit */
#define IA32_ARCH_CAP_RDCL_NO			(1U << 0U)
#define IA32_ARCH_CAP_IBRS_ALL			(1U << 1U)
#define IA32_ARCH_CAP_RSBA			(1U << 2U)
#define IA32_ARCH_CAP_SKIP_L1DFL_VMENTRY	(1U << 3U)
#define IA32_ARCH_CAP_SSB_NO			(1U << 4U)

/* Flush L1 D-cache */
#define IA32_L1D_FLUSH				(1UL << 0U)

/* MSR_IA32_MISC_ENABLE */
#define MISC_ENABLE_FAST_STRING			(1U << 0U)
#define MISC_ENABLE_TCC				(1U << 3U)
#define MISC_ENABLE_PMA				(1U << 7U)
#define MISC_ENABLE_BTS_UNAVAIL			(1U << 11U)
#define MISC_ENABLE_PEBS_UNAVAIL		(1U << 12U)
#define MISC_ENABLE_TM2_ENABLE			(1U << 13U)
#define MISC_ENABLE_EITS			(1U << 16U)
#define MISC_ENABLE_MONITOR_ENA			(1U << 18U)
#define MISC_ENABLE_LIMIT_CPUID			(1U << 22U)
#define MISC_ENABLE_xTPR			(1U << 23U)
#define MISC_ENABLE_XD				(1U << 34U)

#endif /* MSR_H */
