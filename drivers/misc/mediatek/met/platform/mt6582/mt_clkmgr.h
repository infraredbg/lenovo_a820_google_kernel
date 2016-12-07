/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _MT_CLKMGR_H
#define _MT_CLKMGR_H

#include <linux/list.h>
#include "mach/mt_reg_base.h"
#include "mach/mt_typedefs.h"

//#define APMIXED_BASE   	0xF0209000
//#define AUDIO_BASE		0xF1221000
//#define AUDIO_REG_BASE 	(0xF1220000)
//#define G3D_CONFIG_BASE	0xF3000000
//#define DISPSYS_BASE		0xF4000000
//#define IMGSYS_CONFG_BASE 0xF5000000
//#define VDEC_GCON_BASE 	0xF6000000

#define AP_PLL_CON0         (APMIXEDSYS_BASE + 0x0000) //0xF0209000
#define AP_PLL_CON1         (APMIXEDSYS_BASE + 0x0004)
#define AP_PLL_CON2         (APMIXEDSYS_BASE + 0x0008)
//#define AP_PLL_CON3         (APMIXED_BASE + 0x000C)

#define PLL_HP_CON0         (APMIXEDSYS_BASE + 0x0014)

#define ARMPLL_CON0         (APMIXEDSYS_BASE + 0x0200)
#define ARMPLL_CON1         (APMIXEDSYS_BASE + 0x0204)
#define ARMPLL_CON2         0 //not existed
#define ARMPLL_PWR_CON0     (APMIXEDSYS_BASE + 0x020C)

#define MAINPLL_CON0        (APMIXEDSYS_BASE + 0x0210)
#define MAINPLL_CON1        (APMIXEDSYS_BASE + 0x0214)
#define MAINPLL_CON2        0	//not existed
#define MAINPLL_PWR_CON0    (APMIXEDSYS_BASE + 0x021C)

#define UNIVPLL_CON0        (APMIXEDSYS_BASE + 0x0220)
#define UNIVPLL_CON1        (APMIXEDSYS_BASE + 0x0224)
#define UNIVPLL_PWR_CON0    (APMIXEDSYS_BASE + 0x022C)

#define MMPLL_CON0          (APMIXEDSYS_BASE + 0x0230)
#define MMPLL_CON1          (APMIXEDSYS_BASE + 0x0234)
#define MMPLL_PWR_CON0	    (APMIXEDSYS_BASE + 0x023C)

#define ISPPLL_CON0         0	//not existed

#define MSDCPLL_CON0        (APMIXEDSYS_BASE + 0x0240)
#define MSDCPLL_CON1        (APMIXEDSYS_BASE + 0x0244)
#define MSDCPLL_CON2        0	//not existed
#define MSDCPLL_PWR_CON0    (APMIXEDSYS_BASE + 0x024C)

#define VENCPLL_CON0        (DDRPHY_BASE+0x800)	//0xF000F8000
#define VENCPLL_CON1        (DDRPHY_BASE+0x804)
#define VENCPLL_PWR_CON0    (DDRPHY_BASE+0x80C)

#define TVDPLL_CON0         0	//not existed (APMIXED_BASE + 0x026C)	
#define TVDPLL_CON1         0	//not existed (APMIXED_BASE + 0x0270)
#define TVDPLL_CON2         0	//not existed (APMIXED_BASE + 0x0274)
#define TVDPLL_CON3         0	//not existed (APMIXED_BASE + 0x0278)
#define TVDPLL_PWR_CON0     0	//not existed (APMIXED_BASE + 0x0284)

#define LVDSPLL_CON0        0	//not existed (APMIXED_BASE + 0x0288)
#define LVDSPLL_CON1        0	//not existed (APMIXED_BASE + 0x028C)
#define LVDSPLL_CON2        0	//not existed (APMIXED_BASE + 0x0290)
#define LVDSPLL_CON3        0	//not existed (APMIXED_BASE + 0x0294)
#define LVDSPLL_PWR_CON0    0	//not existed (APMIXED_BASE + 0x02A0)


#define CLK_CFG_0           (INFRA_BASE + 0x0040)	//
#define CLK_CFG_1           (INFRA_BASE + 0x0050)	//
#define CLK_CFG_2           (INFRA_BASE + 0x0060)	//
#define CLK_CFG_3           (INFRA_BASE + 0x0070)	//
#define CLK_CFG_4           (INFRA_BASE + 0x0080)	//
//#define CLK_CFG_5           (TOPRGU_BASE + 0x0154)
//#define CLK_CFG_6           (TOPRGU_BASE + 0x0158)
//#define CLK_CFG_7           (TOPRGU_BASE + 0x015C)
//#define CLK_MISC_CFG_2      (TOPRGU_BASE + 0x0160)
#define CLK_CFG_8           (INFRA_BASE + 0x0100)	//
#define CLK_CFG_9           (INFRA_BASE + 0x0104)
#define CLK_CFG_10          (INFRA_BASE + 0x0108)
#define CLK_CFG_11          (INFRA_BASE + 0x010C)
#define	CLK_SCP_CFG_0       (INFRA_BASE + 0x0200)
#define	CLK_SCP_CFG_1       (INFRA_BASE + 0x0204)

//#define TOPCK_PDN_SET       (TOPRGU_BASE + 0x0170) //for PMICSPI CLK, use CLK_CFG_4 instead
//#define TOPCK_PDN_CLR       (TOPRGU_BASE + 0x0174)
//#define TOPCK_PDN_STA       (TOPRGU_BASE + 0x0178)

#define INFRA_PDN_SET       (INFRACFG_AO_BASE + 0x0040)	//0xF0001040
#define INFRA_PDN_CLR       (INFRACFG_AO_BASE + 0x0044)
#define INFRA_PDN_STA       (INFRACFG_AO_BASE + 0x0048)

#define TOPAXI_PROT_EN      (INFRACFG_AO_BASE + 0x0220)
#define TOPAXI_PROT_STA1    (INFRACFG_AO_BASE + 0x0228)
//#define TOPAXI_SI0_CTL      (INFRACFG_AO_BASE + 0x0200)

#define PERI_PDN0_SET       (PERICFG_BASE + 0x0008)		//0xF0003008
#define PERI_PDN0_CLR       (PERICFG_BASE + 0x0010)
#define PERI_PDN0_STA       (PERICFG_BASE + 0x0018)

#define PERI_PDN1_SET       0	//not existed
#define PERI_PDN1_CLR       0	//not existed
#define PERI_PDN1_STA       0	//not existed

#define PERI_PDN0_MD1_SET   (PERICFG_BASE + 0x0020)		//0xF0003020
#define PERI_PDN0_MD2_SET   (PERICFG_BASE + 0x0024)
#define PERI_PDN0_MD1_CLR   (PERICFG_BASE + 0x0028)
#define PERI_PDN0_MD2_CLR   (PERICFG_BASE + 0x002C)
#define PERI_PDN0_MD1_STA   (PERICFG_BASE + 0x0030)
#define PERI_PDN0_MD2_STA   (PERICFG_BASE + 0x0034)
#define PERI_PDN_MD_MASK    (PERICFG_BASE + 0x0038)

#define AUDIO_TOP_CON0      (AUDIO_REG_BASE + 0x0000)	//0xF1220000

#define MFG_CG_CON          (G3D_CONFIG_BASE + 0)	//0xF3000000
#define MFG_CG_SET          (G3D_CONFIG_BASE + 4)	//
#define MFG_CG_CLR          (G3D_CONFIG_BASE + 8)	//

#define DISP_CG_CON0        (DISPSYS_BASE + 0x100)	//0xF4000100
#define DISP_CG_SET0        (DISPSYS_BASE + 0x104)
#define DISP_CG_CLR0        (DISPSYS_BASE + 0x108)
#define DISP_CG_CON1        (DISPSYS_BASE + 0x110)
#define DISP_CG_SET1        (DISPSYS_BASE + 0x114)
#define DISP_CG_CLR1        (DISPSYS_BASE + 0x118)

#define IMG_CG_CON          (IMGSYS_CONFG_BASE + 0x0000)	//0xF5000000
#define IMG_CG_SET          (IMGSYS_CONFG_BASE + 0x0004)	
#define IMG_CG_CLR          (IMGSYS_CONFG_BASE + 0x0008)

#define VDEC_CKEN_SET       (VDEC_GCON_BASE + 0x0000)	//0xF6000000
#define VDEC_CKEN_CLR       (VDEC_GCON_BASE + 0x0004)
#define LARB_CKEN_SET       (VDEC_GCON_BASE + 0x0008)
#define LARB_CKEN_CLR       (VDEC_GCON_BASE + 0x000C)

enum {
/*    CG_PERI0 = 0,
    CG_PERI1 = 1,
    CG_INFRA = 2,
    CG_TOPCK = 3,
    CG_DISP0 = 4,
    CG_DISP1 = 5,
    CG_IMAGE = 6,
    CG_MFG   = 7,
    CG_AUDIO = 8,
    CG_VDEC0 = 9,
    CG_VDEC1 = 10,
    CG_VENC  = 11,
    NR_GRPS  = 12, */
    CG_PERI  = 0,
    CG_INFRA = 1,
    CG_TOPCK = 2,
    CG_DISP0 = 3,
    CG_DISP1 = 4,
    CG_IMAGE = 5,
    CG_MFG   = 6,
    CG_AUDIO = 7,
    CG_VDEC0 = 8,
    CG_VDEC1 = 9,
    NR_GRPS  = 10,
};

enum cg_clk_id{
/*	
    MT_CG_PERI0_NFI                 = 0,
    MT_CG_PERI0_THERM               = 1,
    MT_CG_PERI0_PWM1                = 2,
    MT_CG_PERI0_PWM2                = 3,
    MT_CG_PERI0_PWM3                = 4,
    MT_CG_PERI0_PWM4                = 5,
    MT_CG_PERI0_PWM5                = 6,
    MT_CG_PERI0_PWM6                = 7,
    MT_CG_PERI0_PWM7                = 8,
    MT_CG_PERI0_PWM                 = 9,
    MT_CG_PERI0_USB0                = 10,
    MT_CG_PERI0_USB1                = 11,
    MT_CG_PERI0_APDMA               = 12,
    MT_CG_PERI0_MSDC0               = 13,
    MT_CG_PERI0_MSDC1               = 14,
    MT_CG_PERI0_MSDC2               = 15,
    MT_CG_PERI0_MSDC3               = 16,
    MT_CG_PERI0_MSDC4               = 17,
    MT_CG_PERI0_APHIF               = 18,
    MT_CG_PERI0_MDHIF               = 19,
    MT_CG_PERI0_NLI                 = 20,
    MT_CG_PERI0_IRDA                = 21,
    MT_CG_PERI0_UART0               = 22,
    MT_CG_PERI0_UART1               = 23,
    MT_CG_PERI0_UART2               = 24,
    MT_CG_PERI0_UART3               = 25,
    MT_CG_PERI0_I2C0                = 26,
    MT_CG_PERI0_I2C1                = 27,
    MT_CG_PERI0_I2C2                = 28,
    MT_CG_PERI0_I2C3                = 29,
    MT_CG_PERI0_I2C4                = 30,
    MT_CG_PERI0_I2C5                = 31,
    
    MT_CG_PERI1_I2C6                = 32,
    MT_CG_PERI1_WRAP                = 33,
    MT_CG_PERI1_AUXADC              = 34,
    MT_CG_PERI1_SPI1                = 35,
    MT_CG_PERI1_FHCTL               = 36,

    MT_CG_INFRA_DBGCLK              = 64,
    MT_CG_INFRA_SMI                 = 65,
    MT_CG_INFRA_SPI0                = 66,
    MT_CG_INFRA_AUDIO               = 69,
    MT_CG_INFRA_CEC                 = 70,
    MT_CG_INFRA_MFGAXI              = 71,
    MT_CG_INFRA_M4U                 = 72,
    MT_CG_INFRA_MD1MCUAXI           = 73,
    MT_CG_INFRA_MD1HWMIXAXI         = 74,
    MT_CG_INFRA_MD1AHB              = 75,
    MT_CG_INFRA_MD2MCUAXI           = 76,
    MT_CG_INFRA_MD2HWMIXAXI         = 77,
    MT_CG_INFRA_MD2AHB              = 78,
    MT_CG_INFRA_CPUM                = 79,
    MT_CG_INFRA_KP                  = 80,
    MT_CG_INFRA_CCIF0               = 84,
    MT_CG_INFRA_CCIF1               = 85,
    MT_CG_INFRA_PMICSPI             = 86,
    MT_CG_INFRA_PMICWRAP            = 87,

    MT_CG_TOPCK_PMICSPI             = 96,

    MT_CG_DISP0_LARB2_SMI           = 128,
    MT_CG_DISP0_ROT_ENGINE          = 129,
    MT_CG_DISP0_ROT_SMI             = 130,
    MT_CG_DISP0_SCL                 = 131,
    MT_CG_DISP0_OVL_ENGINE          = 132,
    MT_CG_DISP0_OVL_SMI             = 133,
    MT_CG_DISP0_COLOR               = 134,
    MT_CG_DISP0_2DSHP               = 135,
    MT_CG_DISP0_BLS                 = 136,
    MT_CG_DISP0_WDMA0_ENGINE        = 137,
    MT_CG_DISP0_WDMA0_SMI           = 138,
    MT_CG_DISP0_WDMA1_ENGINE        = 139,
    MT_CG_DISP0_WDMA1_SMI           = 140,
    MT_CG_DISP0_RDMA0_ENGINE        = 141,
    MT_CG_DISP0_RDMA0_SMI           = 142,
    MT_CG_DISP0_RDMA0_OUTPUT        = 143,
    MT_CG_DISP0_RDMA1_ENGINE        = 144,
    MT_CG_DISP0_RDMA1_SMI           = 145,
    MT_CG_DISP0_RDMA1_OUTPUT        = 146,
    MT_CG_DISP0_GAMMA_ENGINE        = 147,
    MT_CG_DISP0_GAMMA_PIXEL         = 148,
    MT_CG_DISP0_CMDQ_ENGINE         = 149,
    MT_CG_DISP0_CMDQ_SMI            = 150,
    MT_CG_DISP0_G2D_ENGINE          = 151,
    MT_CG_DISP0_G2D_SMI             = 152,

    MT_CG_DISP1_DBI_ENGINE          = 160,
    MT_CG_DISP1_DBI_SMI             = 161,
    MT_CG_DISP1_DBI_OUTPUT          = 162,
    MT_CG_DISP1_DSI_ENGINE          = 163,
    MT_CG_DISP1_DSI_DIGITAL         = 164,
    MT_CG_DISP1_DSI_DIGITAL_LANE    = 165,
    MT_CG_DISP1_DPI0                = 166,
    MT_CG_DISP1_DPI1                = 167,
    MT_CG_DISP1_LCD                 = 168,
    MT_CG_DISP1_SLCD                = 169,

    MT_CG_IMAGE_LARB3_SMI           = 192,
    MT_CG_IMAGE_LARB4_SMI           = 194,
    MT_CG_IMAGE_COMMN_SMI           = 196,
    MT_CG_IMAGE_CAM_SMI             = 197,
    MT_CG_IMAGE_CAM_CAM             = 198,
    MT_CG_IMAGE_SEN_TG              = 199, 
    MT_CG_IMAGE_SEN_CAM             = 200,
    MT_CG_IMAGE_JPGD_SMI            = 201,
    MT_CG_IMAGE_JPGD_JPG            = 202,
    MT_CG_IMAGE_JPGE_SMI            = 203,
    MT_CG_IMAGE_JPGE_JPG            = 204,
    MT_CG_IMAGE_FPC                 = 205, 

    MT_CG_MFG_AXI                   = 224,
    MT_CG_MFG_MEM                   = 225,
    MT_CG_MFG_G3D                   = 226,
    MT_CG_MFG_HYD                   = 227,

    MT_CG_AUDIO_AFE                 = 258,
    MT_CG_AUDIO_I2S                 = 262,
    
    MT_CG_VDEC0_VDE                 = 288,
    
    MT_CG_VDEC1_SMI                 = 320,

    MT_CG_VENC_VEN                  = 352,

    CG_PERI0_FROM                   = MT_CG_PERI0_NFI,
    CG_PERI0_TO                     = MT_CG_PERI0_I2C5,
    NR_PERI0_CLKS                   = 32,

    CG_PERI1_FROM                   = MT_CG_PERI1_I2C6,
    CG_PERI1_TO                     = MT_CG_PERI1_FHCTL,
    NR_PERI1_CLKS                   = 5,

    CG_INFRA_FROM                   = MT_CG_INFRA_DBGCLK,
    CG_INFRA_TO                     = MT_CG_INFRA_PMICWRAP,
    NR_INFRA_CLKS                   = 19,

    CG_TOPCK_FROM                   = MT_CG_TOPCK_PMICSPI,
    CG_TOPCK_TO                     = MT_CG_TOPCK_PMICSPI,
    NR_TOPCK_CLKS                   = 1,

    CG_DISP0_FROM                   = MT_CG_DISP0_LARB2_SMI,
    CG_DISP0_TO                     = MT_CG_DISP0_G2D_SMI,
    NR_DISP0_CLKS                   = 25,

    CG_DISP1_FROM                   = MT_CG_DISP1_DBI_ENGINE,
    CG_DISP1_TO                     = MT_CG_DISP1_SLCD,
    NR_DISP1_CLKS                   = 10,

    CG_IMAGE_FROM                   = MT_CG_IMAGE_LARB3_SMI,
    CG_IMAGE_TO                     = MT_CG_IMAGE_FPC,
    NR_IMAGE_CLKS                   = 12,

    CG_MFG_FROM                     = MT_CG_MFG_AXI,
    CG_MFG_TO                       = MT_CG_MFG_HYD,
    NR_MFG_CLKS                     = 4,

    CG_AUDIO_FROM                   = MT_CG_AUDIO_AFE,
    CG_AUDIO_TO                     = MT_CG_AUDIO_I2S,
    NR_AUDIO_CLKS                   = 2,

    CG_VDEC0_FROM                   = MT_CG_VDEC0_VDE,
    CG_VDEC0_TO                     = MT_CG_VDEC0_VDE,
    NR_VDEC0_CLKS                   = 1,

    CG_VDEC1_FROM                   = MT_CG_VDEC1_SMI,
    CG_VDEC1_TO                     = MT_CG_VDEC1_SMI,
    NR_VDEC1_CLKS                   = 1,

    CG_VENC_FROM                    = MT_CG_VENC_VEN,
    CG_VENC_TO                      = MT_CG_VENC_VEN,
    NR_VENC_CLKS                    = 1,

    NR_CLKS                         = 353,
*/    
	MT_CG_PERI_NFI					= 0,
	MT_CG_PERI_THERM				= 1,
	MT_CG_PERI_PWM1					= 2,
	MT_CG_PERI_PWM2					= 3,
	MT_CG_PERI_PWM3					= 4,
	MT_CG_PERI_PWM4					= 5,
	MT_CG_PERI_PWM5					= 6, 
	MT_CG_PERI_PWM6					= 7,
	MT_CG_PERI_PWM7					= 8,
	MT_CG_PERI_PWM					= 9,
	MT_CG_PERI_USB0					= 10,
	MT_CG_PERI_AP_DMA				= 11,
	MT_CG_PERI_MSDC30_0				= 12,
	MT_CG_PERI_MSDC30_1				= 13,
	MT_CG_PERI_MSDC30_2				= 14,
	MT_CG_PERI_NLI					= 15,
	MT_CG_PERI_UART0				= 16,
	MT_CG_PERI_UART1				= 17,
	MT_CG_PERI_UART2				= 18,
	MT_CG_PERI_UART3				= 19,
	MT_CG_PERI_BTIF					= 20,
	MT_CG_PERI_I2C0					= 21,
	MT_CG_PERI_I2C1					= 22,
	MT_CG_PERI_I2C2					= 23,
	MT_CG_PERI_AUXADC				= 24,
	MT_CG_PERI_SPI0					= 25,
	
	MT_CG_INFRA_DBGCLK				= 32,
    MT_CG_INFRA_SMI					= 33,
    MT_CG_INFRA_AUDIO				= 37,
    MT_CG_INFRA_EFUSE				= 38,
    MT_CG_INFRA_L2C_SRAM			= 39,
    MT_CG_INFRA_M4U					= 40,
    MT_CG_INFRA_MD1MCUAXI			= 41,
    MT_CG_INFRA_MD1HWMIXAXI			= 42,
    MT_CG_INFRA_MD1AHB				= 43,
    MT_CG_INFRA_CONNMCU				= 44,
    MT_CG_INFRA_TRNG				= 45,
    MT_CG_INFRA_CPUM				= 47,
    MT_CG_INFRA_KP					= 48,
    MT_CG_INFRA_CCIF0				= 52,
    MT_CG_INFRA_PMICWRAP			= 55,
    
    //MT_CG_TOPCK_PMICSPI             = 64,
    MT_CG_TOPCK_PMICSPI             = 69,
    
    MT_CG_DISP0_SMI_COMMON			= 96,
    MT_CG_DISP0_SMI_LARB0			= 97,
    MT_CG_DISP0_MM_CMDQ				= 98,
    MT_CG_DISP0_MUTEX				= 99,
    MT_CG_DISP0_DISP_COLOR			= 100,
    MT_CG_DISP0_DISP_BLS			= 101,
    MT_CG_DISP0_DISP_WDMA			= 102,
    MT_CG_DISP0_DISP_RDMA			= 103,
    MT_CG_DISP0_DISP_OVL			= 104,
    MT_CG_DISP0_MDP_TDSHP			= 105,
    MT_CG_DISP0_MDP_WROT			= 106,
    MT_CG_DISP0_MDP_WDMA			= 107,
    MT_CG_DISP0_MDP_RSZ1			= 108,
	MT_CG_DISP0_MDP_RSZ0			= 109,
	MT_CG_DISP0_MDP_RDMA			= 110,
	MT_CG_DISP0_MDP_BLS_26M			= 111,
	MT_CG_DISP0_CAM_MDP				= 112,
	MT_CG_DISP0_FAKE_ENG			= 113,
	MT_CG_DISP0_MUTEX_32K			= 114,

    MT_CG_DISP1_DSI_ENGINE			= 128,
    MT_CG_DISP1_DSI_DIGITAL			= 129,
	MT_CG_DISP1_DPI_DIGITAL_LANE	= 130,
	MT_CG_DISP1_DPI_ENGINE			= 131,

	MT_CG_IMAGE_LARB2_SMI			= 160,
	MT_CG_IMAGE_CAM_SMI				= 165,
	MT_CG_IMAGE_CAM_CAM				= 166,
	MT_CG_IMAGE_SEN_TG				= 167,
	MT_CG_IMAGE_SEN_CAM				= 168,
	MT_CG_IMAGE_VENC_JPENC			= 169,

	MT_CG_MFG_G3D					= 192,

	MT_CG_AUDIO_AFE                 = 226,
    MT_CG_AUDIO_I2S                 = 230,

    MT_CG_VDEC0_VDEC				= 256,

    MT_CG_VDEC1_LARB				= 288,

	CG_PERI_FROM					= MT_CG_PERI_NFI,
    CG_PERI_TO						= MT_CG_PERI_SPI0,
    NR_PERI_CLKS					= 26,

    CG_INFRA_FROM                   = MT_CG_INFRA_DBGCLK,
    CG_INFRA_TO                     = MT_CG_INFRA_PMICWRAP,
    NR_INFRA_CLKS                   = 15,

    CG_TOPCK_FROM                   = MT_CG_TOPCK_PMICSPI,
    CG_TOPCK_TO                     = MT_CG_TOPCK_PMICSPI,
    NR_TOPCK_CLKS                   = 1,

    CG_DISP0_FROM                   = MT_CG_DISP0_SMI_COMMON,
    CG_DISP0_TO                     = MT_CG_DISP0_MUTEX_32K,
    NR_DISP0_CLKS                   = 19,

    CG_DISP1_FROM                   = MT_CG_DISP1_DSI_ENGINE,
    CG_DISP1_TO                     = MT_CG_DISP1_DPI_ENGINE,
    NR_DISP1_CLKS                   = 4,

    CG_IMAGE_FROM                   = MT_CG_IMAGE_LARB2_SMI,
    CG_IMAGE_TO                     = MT_CG_IMAGE_VENC_JPENC,
    NR_IMAGE_CLKS                   = 6,
    
    CG_MFG_FROM                     = MT_CG_MFG_G3D,
    CG_MFG_TO                       = MT_CG_MFG_G3D,
    NR_MFG_CLKS                     = 1,

    CG_AUDIO_FROM                   = MT_CG_AUDIO_AFE,
    CG_AUDIO_TO                     = MT_CG_AUDIO_I2S,
    NR_AUDIO_CLKS                   = 2,

    CG_VDEC0_FROM                   = MT_CG_VDEC0_VDEC,
    CG_VDEC0_TO                     = MT_CG_VDEC0_VDEC,
    NR_VDEC0_CLKS                   = 1,

    CG_VDEC1_FROM                   = MT_CG_VDEC1_LARB,
    CG_VDEC1_TO                     = MT_CG_VDEC1_LARB,
    NR_VDEC1_CLKS                   = 1,
   
   	NR_CLKS                         = 289,
   	
   	MT_CG_PERI1_FHCTL				= 0, 	//not existed
   	MT_CG_PERI0_UART0               = 0,	//not existed
    MT_CG_PERI0_UART1               = 0,	//not existed
    MT_CG_PERI0_UART2               = 0,	//not existed
    MT_CG_PERI0_UART3               = 0,	//not existed
    MT_CG_PERI0_PWM1                = 0,	//not existed
    MT_CG_PERI0_PWM2                = 0,	//not existed
    MT_CG_PERI0_PWM3                = 0,	//not existed
    MT_CG_PERI0_PWM4                = 0,	//not existed
    MT_CG_PERI0_PWM5                = 0,	//not existed
    MT_CG_PERI0_PWM6                = 0,	//not existed
    MT_CG_PERI0_PWM7                = 0,	//not existed
    MT_CG_PERI0_PWM                 = 0,	//not existed
    MT_CG_PERI0_USB0				= 0,
    MT_CG_DISP1_DSI_DIGITAL_LANE	= 0,
    MT_CG_PERI1_SPI1				= 0,
    MT_CG_PERI0_APDMA				= 0,
};

#define UNIVPLL2_D4     4

enum {
/*    //CLK_CFG_0
    MT_MUX_MFG          = 0,
    MT_MUX_IRDA         = 1,

    //CLK_CFG_1
    MT_MUX_CAM          = 2,
    MT_MUX_AUDINTBUS    = 3,
    MT_MUX_JPG          = 4,
    MT_MUX_DISP         = 5,

    //CLK_CFG_2
    MT_MUX_MSDC1        = 6,
    MT_MUX_MSDC2        = 7,
    MT_MUX_MSDC3        = 8,
    MT_MUX_MSDC4        = 9,

    //CLK_CFG_3
    MT_MUX_USB20        = 10,

    //CLK_CFG_4
    MT_MUX_HYD          = 11,
    MT_MUX_VENC         = 12,
    MT_MUX_SPI          = 13,
    MT_MUX_UART         = 14,

    //CLK_CFG_6
    MT_MUX_CAMTG        = 15,
    MT_MUX_AUDIO        = 16,

    //CLK_CFG_7
    MT_MUX_VDEC         = 17,
    MT_MUX_DPILVDS      = 18,

    //CLK_CFG_8
    MT_MUX_PMICSPI      = 19,
    MT_MUX_MSDC0        = 20,
    MT_MUX_SMI_MFG_AS   = 21,
    NR_MUXS             = 22,
*/
	//CLK_CFG_0
    MT_MUX_MM           = 0,
//    MT_MUX_DDRPHY     = 1,
//    MT_MUX_MEM		= 2,
//    MT_MUX_AXI		= 3,

    //CLK_CFG_1
    MT_MUX_CAMTG        = 1,
    MT_MUX_MFG          = 2,
    MT_MUX_VDEC         = 3,
    MT_MUX_PWM          = 4,

    //CLK_CFG_2
    MT_MUX_MSDC30_0     = 5,
    MT_MUX_USB20        = 6,
    MT_MUX_SPI          = 7,
    MT_MUX_UART         = 8,

    //CLK_CFG_3
    MT_MUX_AUDINTBUS    = 9,
    MT_MUX_AUDIO        = 10,
    MT_MUX_MSDC30_2     = 11,
    MT_MUX_MSDC30_1     = 12,

    //CLK_CFG_4
//    MT_MUX_SCP			= 13,
//    MT_MUX_PMICSPI		= 14,

    NR_MUXS             = 13,
};

enum {
    ARMPLL  = 0,
    MAINPLL = 1,
    MSDCPLL = 2,
    UNIVPLL = 3,
    MMPLL   = 4,
    VENCPLL = 5,
    NR_PLLS = 6,
	
	TVDPLL  = 0,	//not existed
	LVDSPLL = 0,	//not existed
	ISPPLL 	= 0,	//not existed
};

enum {
    SYS_MD1 = 0,
    SYS_CONN = 1,
    SYS_DPY = 2,
    SYS_DIS = 3,
    SYS_MFG = 4,
    SYS_ISP = 5,
    SYS_IFR = 6,
    SYS_VDE = 7,
    NR_SYSS = 8,
    
    SYS_VEN = 9,	//not existed
    SYS_MD2 = 10,	//not existed
};

enum {
    MT_LARB_VDEC = 0,
    MT_LARB_DISP = 1,
    MT_LARB_IMG = 2,
    
//    MT_LARB3 = 3,
//    MT_LARB4 = 4,
//    NR_LARBS = 5,
};

/* larb monitor mechanism definition*/
enum {
    LARB_MONITOR_LEVEL_HIGH     = 10,
    LARB_MONITOR_LEVEL_MEDIUM   = 20,
    LARB_MONITOR_LEVEL_LOW      = 30,
};

struct larb_monitor {
    struct list_head link;
    int level;
    void (*backup)(struct larb_monitor *h, int larb_idx);       /* called before disable larb clock */
    void (*restore)(struct larb_monitor *h, int larb_idx);      /* called after enable larb clock */
};


extern void register_larb_monitor(struct larb_monitor *handler);
extern void unregister_larb_monitor(struct larb_monitor *handler);

/* clock API */
extern int enable_clock(enum cg_clk_id id, char *mod_name);
extern int disable_clock(enum cg_clk_id id, char *mod_name);

extern int enable_clock_ext_locked(int id, char *mod_name);
extern int disable_clock_ext_locked(int id, char *mod_name);

extern int clock_is_on(int id);

extern int clkmux_sel(int id, unsigned int clksrc, char *name);

extern void clk_set_force_on(int id);
extern void clk_clr_force_on(int id);
extern int clk_is_force_on(int id);

/* pll API */
extern int enable_pll(int id, char *mod_name);
extern int disable_pll(int id, char *mod_name);

extern int pll_hp_switch_on(int id, int hp_on);
extern int pll_hp_switch_off(int id, int hp_off);

extern int pll_fsel(int id, unsigned int value);
extern int pll_is_on(int id);

/* subsys API */
extern int enable_subsys(int id, char *mod_name);
extern int disable_subsys(int id, char *mod_name);

extern int subsys_is_on(int id);
extern int md_power_on(int id);
extern int md_power_off(int id, unsigned int timeout);
extern int conn_power_on(void);
extern int conn_power_off(void);

/* other API */

extern void enable_clksq1(void);
extern void disable_clksq1(void);

extern void clksq1_sw2hw(void);
extern void clksq1_hw2sw(void);
/*
extern void pmicspi_mempll2clksq(void);
extern void pmicspi_clksq2mempll(void);

extern int get_gpu_power_src(void);
*/
const char* grp_get_name(int id);

extern int clkmgr_is_locked(void);

/* init */
extern void mt_clkmgr_init(void);


#endif
