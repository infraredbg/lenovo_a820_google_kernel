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

#ifndef __MT6620_FM_REG_H__
#define __MT6620_FM_REG_H__

enum MT6620_REG{ 
	FM_MAIN_CG1_CTRL = 0x60,
	FM_MAIN_CG2_CTRL = 0x61,
    FM_MAIN_HWVER = 0x62,
    FM_MAIN_CTRL = 0x63,
    FM_CHANNEL_SET = 0x65,
    FM_MAIN_CFG1 = 0x66,
    FM_MAIN_CFG2 = 0x67,
    FM_MAIN_MCLKDESENSE = 0x38,
    FM_MAIN_INTR = 0x69,
    FM_MAIN_INTRMASK = 0x6A,
    FM_MAIN_EXTINTRMASK = 0x6B,
    FM_RSSI_IND = 0xE8,
    FM_RSSI_TH = 0x6D,
    FM_MAIN_RESET = 0x6E,
    FM_MAIN_CHANDETSTAT = 0x6F,  
    FM_RDS_CFG0 = 0x80,
    FM_RDS_INFO = 0x81,
    FM_RDS_DATA_REG = 0x82,
    FM_RDS_GOODBK_CNT = 0xC6, //page3 0xC6
    FM_RDS_BADBK_CNT = 0xC7,  //page3 0xC7
    FM_RDS_PWDI = 0x85,
    FM_RDS_PWDQ = 0x86,
    FM_RDS_FIFO_STATUS0 = 0x87,
    FM_FT_CON9 = 0x8F,
	FM_DSP_PATCH_CTRL = 0x90,
	FM_DSP_PATCH_OFFSET = 0x91,
	FM_DSP_PATCH_DATA = 0x92,
	FM_DSP_MEM_CTRL4 = 0x93,
	FM_MAIN_PGSEL = 0x9F,
	FM_ADDR_PAMD = 0xE9,
	FM_RDS_BDGRP_ABD_CTRL_REG = 0xB6,
	FM_RDS_POINTER = 0xF0,	 
	FM_MR_IND = 0xF2,	 
};
#define FM_TXSCAN_RSSI_TH	(-250)
#define FM_TXSCAN_PAMD_TH	(-20)
#define FM_TXSCAN_MR_TH		(-38)

//RDS_BDGRP_ABD_CTRL_REG
enum{
	BDGRP_ABD_EN = 0x0001,
	BER_RUN = 0x2000
};
#define FM_DAC_CON1 0x83
#define FM_DAC_CON2 0x84
#define FM_FT_CON0 0x86
#define FM_I2S_CON0 0x90
#define FM_STEROMONO_CTR (0xE0)
enum{
	FT_EN = 0x0001
};
	   
enum{
	I2S_EN = 0x0001,
	FORMAT = 0x0002,
	WLEN = 0x0004,
	I2S_SRC = 0x0008
};

//FM_MAIN_CTRL
enum{
	TUNE = 0x0001,
	SEEK = 0x0002,
	SCAN = 0x0004,
	RDS_MASK = 0x0010,
	MUTE = 0x0020,
	RDS_BRST = 0x0040,
	RAMP_DOWN = 0x0100,
};

//FM_MAIN_INTR
enum{
	FM_INTR_STC_DONE = 0x0001,
	FM_INTR_IQCAL_DONE = 0x0002,				
	FM_INTR_DESENSE_HIT	= 0x0004,				
	FM_INTR_CHNL_CHG = 0x0008,				
	FM_INTR_SW_INTR = 0x0010,	
	FM_INTR_RDS = 0x0020
};

enum{
	ANTENNA_TYPE = 0x0010,
};
//FM reg page
enum FM_PAGE{
    FM_PG0 = 0,
    FM_PG1,
    FM_PG2,
    FM_PG3,
    FM_PGMAX
};

#endif //__MT6620_FM_REG_H__

