#ifndef __S5PV210_REG_VIC_H__
#define __S5PV210_REG_VIC_H__

#include <configs.h>
#include <default.h>

/*
 * vic0 register.
 */
#define S5PV210_VIC0_IRQSTATUS			(0xf2000000 + 0x000)
#define S5PV210_VIC0_FIQSTATUS			(0xf2000000 + 0x004)
#define S5PV210_VIC0_RAWINTR			(0xf2000000 + 0x008)
#define S5PV210_VIC0_INTSELECT			(0xf2000000 + 0x00c)
#define S5PV210_VIC0_INTENABLE			(0xf2000000 + 0x010)
#define S5PV210_VIC0_INTENCLEAR			(0xf2000000 + 0x014)
#define S5PV210_VIC0_SOFTINT			(0xf2000000 + 0x018)
#define S5PV210_VIC0_SOFTINTCLEAR		(0xf2000000 + 0x01c)
#define S5PV210_VIC0_PROTECTION			(0xf2000000 + 0x020)
#define S5PV210_VIC0_SWPRIORITYMASK		(0xf2000000 + 0x024)
#define S5PV210_VIC0_PRIORITYDAISY		(0xf2000000 + 0x028)
#define S5PV210_VIC0_VECTADDR0			(0xf2000000 + 0x100)
#define S5PV210_VIC0_VECPRIORITY0		(0xf2000000 + 0x200)
#define S5PV210_VIC0_ADDRESS			(0xf2000000 + 0xf00)
#define S5PV210_VIC0_PERID0				(0xf2000000 + 0xfe0)
#define S5PV210_VIC0_PERID1				(0xf2000000 + 0xfe4)
#define S5PV210_VIC0_PERID2				(0xf2000000 + 0xfe8)
#define S5PV210_VIC0_PERID3				(0xf2000000 + 0xfec)
#define S5PV210_VIC0_PCELLID0			(0xf2000000 + 0xff0)
#define S5PV210_VIC0_PCELLID1			(0xf2000000 + 0xff4)
#define S5PV210_VIC0_PCELLID2			(0xf2000000 + 0xff8)
#define S5PV210_VIC0_PCELLID3			(0xf2000000 + 0xffc)

#define S5PV210_TZIC0_FIQSTATUS			(0xf2800000 + 0x000)
#define S5PV210_TZIC0_RAWINTR			(0xf2800000 + 0x004)
#define S5PV210_TZIC0_INTSELECT			(0xf2800000 + 0x008)
#define S5PV210_TZIC0_FIQENABLE			(0xf2800000 + 0x00c)
#define S5PV210_TZIC0_FIQENCLEAR		(0xf2800000 + 0x010)
#define S5PV210_TZIC0_FIQBYPASS			(0xf2800000 + 0x014)
#define S5PV210_TZIC0_PROTECTION		(0xf2800000 + 0x018)
#define S5PV210_TZIC0_LOCK				(0xf2800000 + 0x01c)
#define S5PV210_TZIC0_LOCKSTATUS		(0xf2800000 + 0x020)
#define S5PV210_TZIC0_PERID0			(0xf2800000 + 0xfe0)
#define S5PV210_TZIC0_PERID1			(0xf2800000 + 0xfe4)
#define S5PV210_TZIC0_PERID2			(0xf2800000 + 0xfe8)
#define S5PV210_TZIC0_PERID3			(0xf2800000 + 0xfec)
#define S5PV210_TZIC0_PCELLID0			(0xf2800000 + 0xff0)
#define S5PV210_TZIC0_PCELLID1			(0xf2800000 + 0xff4)
#define S5PV210_TZIC0_PCELLID2			(0xf2800000 + 0xff8)
#define S5PV210_TZIC0_PCELLID3			(0xf2800000 + 0xffc)

/*
 * vic1 register.
 */
#define S5PV210_VIC1_IRQSTATUS			(0xf2100000 + 0x000)
#define S5PV210_VIC1_FIQSTATUS			(0xf2100000 + 0x004)
#define S5PV210_VIC1_RAWINTR			(0xf2100000 + 0x008)
#define S5PV210_VIC1_INTSELECT			(0xf2100000 + 0x00c)
#define S5PV210_VIC1_INTENABLE			(0xf2100000 + 0x010)
#define S5PV210_VIC1_INTENCLEAR			(0xf2100000 + 0x014)
#define S5PV210_VIC1_SOFTINT			(0xf2100000 + 0x018)
#define S5PV210_VIC1_SOFTINTCLEAR		(0xf2100000 + 0x01c)
#define S5PV210_VIC1_PROTECTION			(0xf2100000 + 0x020)
#define S5PV210_VIC1_SWPRIORITYMASK		(0xf2100000 + 0x024)
#define S5PV210_VIC1_PRIORITYDAISY		(0xf2100000 + 0x028)
#define S5PV210_VIC1_VECTADDR0			(0xf2100000 + 0x100)
#define S5PV210_VIC1_VECPRIORITY0		(0xf2100000 + 0x200)
#define S5PV210_VIC1_ADDRESS			(0xf2100000 + 0xf00)
#define S5PV210_VIC1_PERID0				(0xf2100000 + 0xfe0)
#define S5PV210_VIC1_PERID1				(0xf2100000 + 0xfe4)
#define S5PV210_VIC1_PERID2				(0xf2100000 + 0xfe8)
#define S5PV210_VIC1_PERID3				(0xf2100000 + 0xfec)
#define S5PV210_VIC1_PCELLID0			(0xf2100000 + 0xff0)
#define S5PV210_VIC1_PCELLID1			(0xf2100000 + 0xff4)
#define S5PV210_VIC1_PCELLID2			(0xf2100000 + 0xff8)
#define S5PV210_VIC1_PCELLID3			(0xf2100000 + 0xffc)

#define S5PV210_TZIC1_FIQSTATUS			(0xf2900000 + 0x000)
#define S5PV210_TZIC1_RAWINTR			(0xf2900000 + 0x004)
#define S5PV210_TZIC1_INTSELECT			(0xf2900000 + 0x008)
#define S5PV210_TZIC1_FIQENABLE			(0xf2900000 + 0x00c)
#define S5PV210_TZIC1_FIQENCLEAR		(0xf2900000 + 0x010)
#define S5PV210_TZIC1_FIQBYPASS			(0xf2900000 + 0x014)
#define S5PV210_TZIC1_PROTECTION		(0xf2900000 + 0x018)
#define S5PV210_TZIC1_LOCK				(0xf2900000 + 0x01c)
#define S5PV210_TZIC1_LOCKSTATUS		(0xf2900000 + 0x020)
#define S5PV210_TZIC1_PERID0			(0xf2900000 + 0xfe0)
#define S5PV210_TZIC1_PERID1			(0xf2900000 + 0xfe4)
#define S5PV210_TZIC1_PERID2			(0xf2900000 + 0xfe8)
#define S5PV210_TZIC1_PERID3			(0xf2900000 + 0xfec)
#define S5PV210_TZIC1_PCELLID0			(0xf2900000 + 0xff0)
#define S5PV210_TZIC1_PCELLID1			(0xf2900000 + 0xff4)
#define S5PV210_TZIC1_PCELLID2			(0xf2900000 + 0xff8)
#define S5PV210_TZIC1_PCELLID3			(0xf2900000 + 0xffc)

/*
 * vic2 register.
 */
#define S5PV210_VIC2_IRQSTATUS			(0xf2200000 + 0x000)
#define S5PV210_VIC2_FIQSTATUS			(0xf2200000 + 0x004)
#define S5PV210_VIC2_RAWINTR			(0xf2200000 + 0x008)
#define S5PV210_VIC2_INTSELECT			(0xf2200000 + 0x00c)
#define S5PV210_VIC2_INTENABLE			(0xf2200000 + 0x010)
#define S5PV210_VIC2_INTENCLEAR			(0xf2200000 + 0x014)
#define S5PV210_VIC2_SOFTINT			(0xf2200000 + 0x018)
#define S5PV210_VIC2_SOFTINTCLEAR		(0xf2200000 + 0x01c)
#define S5PV210_VIC2_PROTECTION			(0xf2200000 + 0x020)
#define S5PV210_VIC2_SWPRIORITYMASK		(0xf2200000 + 0x024)
#define S5PV210_VIC2_PRIORITYDAISY		(0xf2200000 + 0x028)
#define S5PV210_VIC2_VECTADDR0			(0xf2200000 + 0x100)
#define S5PV210_VIC2_VECPRIORITY0		(0xf2200000 + 0x200)
#define S5PV210_VIC2_ADDRESS			(0xf2200000 + 0xf00)
#define S5PV210_VIC2_PERID0				(0xf2200000 + 0xfe0)
#define S5PV210_VIC2_PERID1				(0xf2200000 + 0xfe4)
#define S5PV210_VIC2_PERID2				(0xf2200000 + 0xfe8)
#define S5PV210_VIC2_PERID3				(0xf2200000 + 0xfec)
#define S5PV210_VIC2_PCELLID0			(0xf2200000 + 0xff0)
#define S5PV210_VIC2_PCELLID1			(0xf2200000 + 0xff4)
#define S5PV210_VIC2_PCELLID2			(0xf2200000 + 0xff8)
#define S5PV210_VIC2_PCELLID3			(0xf2200000 + 0xffc)

#define S5PV210_TZIC2_FIQSTATUS			(0xf2a00000 + 0x000)
#define S5PV210_TZIC2_RAWINTR			(0xf2a00000 + 0x004)
#define S5PV210_TZIC2_INTSELECT			(0xf2a00000 + 0x008)
#define S5PV210_TZIC2_FIQENABLE			(0xf2a00000 + 0x00c)
#define S5PV210_TZIC2_FIQENCLEAR		(0xf2a00000 + 0x010)
#define S5PV210_TZIC2_FIQBYPASS			(0xf2a00000 + 0x014)
#define S5PV210_TZIC2_PROTECTION		(0xf2a00000 + 0x018)
#define S5PV210_TZIC2_LOCK				(0xf2a00000 + 0x01c)
#define S5PV210_TZIC2_LOCKSTATUS		(0xf2a00000 + 0x020)
#define S5PV210_TZIC2_PERID0			(0xf2a00000 + 0xfe0)
#define S5PV210_TZIC2_PERID1			(0xf2a00000 + 0xfe4)
#define S5PV210_TZIC2_PERID2			(0xf2a00000 + 0xfe8)
#define S5PV210_TZIC2_PERID3			(0xf2a00000 + 0xfec)
#define S5PV210_TZIC2_PCELLID0			(0xf2a00000 + 0xff0)
#define S5PV210_TZIC2_PCELLID1			(0xf2a00000 + 0xff4)
#define S5PV210_TZIC2_PCELLID2			(0xf2a00000 + 0xff8)
#define S5PV210_TZIC2_PCELLID3			(0xf2a00000 + 0xffc)

/*
 * vic3 register.
 */
#define S5PV210_VIC3_IRQSTATUS			(0xf2300000 + 0x000)
#define S5PV210_VIC3_FIQSTATUS			(0xf2300000 + 0x004)
#define S5PV210_VIC3_RAWINTR			(0xf2300000 + 0x008)
#define S5PV210_VIC3_INTSELECT			(0xf2300000 + 0x00c)
#define S5PV210_VIC3_INTENABLE			(0xf2300000 + 0x010)
#define S5PV210_VIC3_INTENCLEAR			(0xf2300000 + 0x014)
#define S5PV210_VIC3_SOFTINT			(0xf2300000 + 0x018)
#define S5PV210_VIC3_SOFTINTCLEAR		(0xf2300000 + 0x01c)
#define S5PV210_VIC3_PROTECTION			(0xf2300000 + 0x020)
#define S5PV210_VIC3_SWPRIORITYMASK		(0xf2300000 + 0x024)
#define S5PV210_VIC3_PRIORITYDAISY		(0xf2300000 + 0x028)
#define S5PV210_VIC3_VECTADDR0			(0xf2300000 + 0x100)
#define S5PV210_VIC3_VECPRIORITY0		(0xf2300000 + 0x200)
#define S5PV210_VIC3_ADDRESS			(0xf2300000 + 0xf00)
#define S5PV210_VIC3_PERID0				(0xf2300000 + 0xfe0)
#define S5PV210_VIC3_PERID1				(0xf2300000 + 0xfe4)
#define S5PV210_VIC3_PERID2				(0xf2300000 + 0xfe8)
#define S5PV210_VIC3_PERID3				(0xf2300000 + 0xfec)
#define S5PV210_VIC3_PCELLID0			(0xf2300000 + 0xff0)
#define S5PV210_VIC3_PCELLID1			(0xf2300000 + 0xff4)
#define S5PV210_VIC3_PCELLID2			(0xf2300000 + 0xff8)
#define S5PV210_VIC3_PCELLID3			(0xf2300000 + 0xffc)

#define S5PV210_TZIC3_FIQSTATUS			(0xf2b00000 + 0x000)
#define S5PV210_TZIC3_RAWINTR			(0xf2b00000 + 0x004)
#define S5PV210_TZIC3_INTSELECT			(0xf2b00000 + 0x008)
#define S5PV210_TZIC3_FIQENABLE			(0xf2b00000 + 0x00c)
#define S5PV210_TZIC3_FIQENCLEAR		(0xf2b00000 + 0x010)
#define S5PV210_TZIC3_FIQBYPASS			(0xf2b00000 + 0x014)
#define S5PV210_TZIC3_PROTECTION		(0xf2b00000 + 0x018)
#define S5PV210_TZIC3_LOCK				(0xf2b00000 + 0x01c)
#define S5PV210_TZIC3_LOCKSTATUS		(0xf2b00000 + 0x020)
#define S5PV210_TZIC3_PERID0			(0xf2b00000 + 0xfe0)
#define S5PV210_TZIC3_PERID1			(0xf2b00000 + 0xfe4)
#define S5PV210_TZIC3_PERID2			(0xf2b00000 + 0xfe8)
#define S5PV210_TZIC3_PERID3			(0xf2b00000 + 0xfec)
#define S5PV210_TZIC3_PCELLID0			(0xf2b00000 + 0xff0)
#define S5PV210_TZIC3_PCELLID1			(0xf2b00000 + 0xff4)
#define S5PV210_TZIC3_PCELLID2			(0xf2b00000 + 0xff8)
#define S5PV210_TZIC3_PCELLID3			(0xf2b00000 + 0xffc)

#endif /* __S5PV210_REG_VIC_H__ */
