/****************************************************************************
 *   FileName    : tcc353x_dpll_19200osc.c
 *   Description : dpll table for 19200 osc
 ****************************************************************************
 *
 *   TCC Version 1.0
 *   Copyright (c) Telechips Inc.
 *   All rights reserved 
 
This source code contains confidential information of Telechips.
Any unauthorized use without a written permission of Telechips including not limited to re-
distribution in source or binary form is strictly prohibited.
This source code is provided "AS IS" and nothing contained in this source code shall 
constitute any express or implied warranty of any kind, including without limitation, any warranty 
of merchantability, fitness for a particular purpose or non-infringement of any patent, copyright 
or other third party intellectual property right. No warranty is made, express or implied, 
regarding the information's accuracy, completeness, or performance. 
In no event shall Telechips be liable for any claim, damages or other liability arising from, out of 
or in connection with this source code or the use in the source code. 
This source code is provided subject to the terms of a Mutual Non-Disclosure Agreement 
between Telechips and Company.
*
****************************************************************************/

#include "tcpal_os.h"
#include "tcpal_i2c.h"
#include "tcpal_spi.h"
#include "tcc353x_dpll_19200osc.h"
#include "tcc353x_defines.h"
#include "tcc353x_common.h"

I32U OSC_19200_DpllTable_TMM_1SEG [_OSC_19200_MAX_TMM_1SEG_FREQ_NUM_ * 5] = {
	/* please align low frequency to high frequency */
	/* start frequency, Pll, RC STEP_H, RC_STEP_L, ADC Clk */
	/* Pattern-A */
	207857, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	208286, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	208714, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	209143, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	209571, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	210000, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	210429, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,

	/* Pattern-B */
	213429, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	213857, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	214286, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	214714, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	215143, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	215571, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	216000, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,

	/* Pattern-C */
	219000, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	219429, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	219857, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	220286, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	220714, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	221143, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	221571, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,

	0, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG, 0x00, 0x00000000, 0x00
};

I32U OSC_19200_DpllTable_TMM_13SEG [_OSC_19200_MAX_TMM_13SEG_FREQ_NUM_ * 5] = {
	/* please align low frequency to high frequency */
	/* start frequency, Pll, RC STEP_H, RC_STEP_L, ADC Clk */
	/* Pattern-A */
	213429, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,

	/* Pattern-B */
	210429, OSC_192_PLL_ISDB_TMM_FULLSEG_1D, 0x18, 0xD51B8A9C, 0x02,
	219000, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,

	/* Pattern-C */
	216000, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,

	0, OSC_192_PLL_ISDB_TMM_FULLSEG, 0x00, 0x00000000, 0x00
};

I32U OSC_19200_DpllTable_TMM_USER_1SEG 
    [_OSC_19200_MAX_TMM_USER_1SEG_FREQ_NUM_ * 5] = {
	/* please align low frequency to high frequency */
	/* start frequency, Pll, RC STEP_H, RC_STEP_L, ADC Clk */
	207857, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	208286, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	208714, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	209143, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	209571, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	210000, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	210429, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	210857, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	211286, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	211714, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	212143, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	212571, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	213000, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	213429, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	213857, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	214286, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	214714, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	215143, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	215571, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	216000, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	216429, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	216857, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	217286, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	217714, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	218143, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	218571, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	219000, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	219429, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	219857, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	220286, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	220714, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	221143, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	221571, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	0, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG, 0x00, 0x00000000, 0x00
};

I32U OSC_19200_DpllTable_TMM_USER_13SEG 
    [_OSC_19200_MAX_TMM_USER_13SEG_FREQ_NUM_ * 5] = {
	/* please align low frequency to high frequency */
	/* start frequency, Pll, RC STEP_H, RC_STEP_L, ADC Clk */
	207857, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	208286, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	208714, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	209143, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	209571, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	210000, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	210429, OSC_192_PLL_ISDB_TMM_FULLSEG_1D, 0x18, 0xD51B8A9C, 0x02,
	210857, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	211286, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	211714, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	212143, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	212571, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	213000, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	213429, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	213857, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	214286, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	214714, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	215143, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	215571, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	216000, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	216429, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	216857, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	217286, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	217714, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	218143, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	218571, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	219000, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	219429, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	219857, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	220286, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	220714, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	221143, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	221571, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	0, OSC_192_PLL_ISDB_TMM_FULLSEG, 0x00, 0x00000000, 0x00
};

I32U OSC_19200_DpllTable_Partial1Seg 
    [_OSC_19200_MAX_PARTIAL_1SEG_FREQ_NUM_ * 5] = {
	/* please align low frequency to high frequency */
	/* start frequency, Pll, RC STEP_H, RC_STEP_L, ADC Clk */

	/* isdb-tmm 1seg */
	207857, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	208286, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	208714, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	209143, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	209571, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	210000, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	210429, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	213429, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	213857, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	214286, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	214714, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	215143, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	215571, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	216000, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	219000, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	219429, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	219857, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	220286, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	220714, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	221143, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	221571, OSC_192_PLL_ISDB_TMM_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	/* ISDB-T 1-seg, VHF japan only */
	93143,  OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	99143,  OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	105143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_528, 0x3A, 0xFB71A796, 0x0A,
	/* ISDB-T 1-seg, VHF brazil only */
	177143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	183143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	189143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	/* ISDB-T 1-seg, VHF */
	195143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	201143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_528, 0x3A, 0xFB71A796, 0x0A,
	207143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_408, 0x01, 0x0929ABB3, 0x0A,
	213143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	/* ISDB-T 1-seg, UHF */
	473143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	479143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	485143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_528, 0x3A, 0xFB71A796, 0x0A,
	491143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	497143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_528, 0x3A, 0xFB71A796, 0x0A,
	503143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	509143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_528, 0x3A, 0xFB71A796, 0x0A,
	515143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	521143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	527143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_528, 0x3A, 0xFB71A796, 0x0A,
	533143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_432, 0x0F, 0x335205B8, 0x0A,
	539143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	545143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_408, 0x01, 0x0929ABB3, 0x0A,
	551143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	557143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_408, 0x01, 0x0929ABB3, 0x0A,
	563143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	569143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	575143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	581143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	587143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	593143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_504, 0x31, 0x99B404E6, 0x0A,
	599143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	605143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_408, 0x01, 0x0929ABB3, 0x0A,
	611143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	617143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	623143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_408, 0x01, 0x0929ABB3, 0x0A,
	629143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_408, 0x01, 0x0929ABB3, 0x0A,
	635143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	641143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_528, 0x3A, 0xFB71A796, 0x0A,
	647143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_408, 0x01, 0x0929ABB3, 0x0A,
	653143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	659143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	665143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	671143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	677143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	683143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	689143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	695143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	701143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_504, 0x31, 0x99B404E6, 0x0A,
	707143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_408, 0x01, 0x0929ABB3, 0x0A,
	713143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	719143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_432, 0x0F, 0x335205B8, 0x0A,
	725143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_528, 0x3A, 0xFB71A796, 0x0A,
	731143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	737143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	743143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	749143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_456, 0x1B, 0xDFC6F7F1, 0x0A,
	755143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	761143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	767143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_504, 0x31, 0x99B404E6, 0x0A,

	/* ISDB-T 1-seg, UHF Brazil Only */
	773143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_528, 0x3A, 0xFB71A796, 0x0A,
	779143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	785143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_408, 0x01, 0x0929ABB3, 0x0A,
	791143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	797143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_432, 0x0F, 0x335205B8, 0x0A,
	803143, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG_384, 0x27, 0x47C9D1F2, 0x24,
	0, OSC_192_PLL_ISDB_T_PARTIAL_1_SEG, 0x00, 0x00000000, 0x00
};

I32U OSC_19200_DpllTable_FullSeg [_OSC_19200_MAX_FULLSEG_FREQ_NUM_ * 5] = {
	/* please align low frequency to high frequency */
	/* start frequency, Pll, RC STEP_H, RC_STEP_L, ADC Clk */

	/* isdb-tmm */
	210429, OSC_192_PLL_ISDB_TMM_FULLSEG_1D, 0x18, 0xD51B8A9C, 0x02,
	213429, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	216000, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,
	219000, OSC_192_PLL_ISDB_TMM_FULLSEG_1C, 0x10, 0xDC74C45A, 0x02,

	/* isdbt full seg - VHF - Japan only */
	93143,  OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	99143,  OSC_192_PLL_ISDB_T_FULLSEG_2A, 0x0E, 0x1499D87F, 0x03,
	105143, OSC_192_PLL_ISDB_T_FULLSEG_31, 0x2F, 0xF2FF2FF2, 0x03,
	/* isdbt full seg - VHF - Brazil only */
	177143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	183143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	189143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	/* isdbt full seg - VHF */
	195143, OSC_192_PLL_ISDB_T_FULLSEG_2A, 0x0E, 0x1499D87F, 0x03,
	201143, OSC_192_PLL_ISDB_T_FULLSEG_31, 0x2F, 0xF2FF2FF2, 0x03,
	207143, OSC_192_PLL_ISDB_T_FULLSEG_31, 0x2F, 0xF2FF2FF2, 0x03,
	213143, OSC_192_PLL_ISDB_T_FULLSEG_31, 0x2F, 0xF2FF2FF2, 0x03,
	/* isdbt full seg - UHF */
	473143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	479143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	485143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	491143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	497143, OSC_192_PLL_ISDB_T_FULLSEG_2E, 0x22, 0xAB5BBB2E, 0x03,
	503143, OSC_192_PLL_ISDB_T_FULLSEG_2A, 0x0E, 0x1499D87F, 0x03,
	509143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	515143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	521143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	527143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	533143, OSC_192_PLL_ISDB_T_FULLSEG_2F, 0x27, 0x47C9D1F2, 0x03,
	539143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	545143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	551143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	557143, OSC_192_PLL_ISDB_T_FULLSEG_2A, 0x0E, 0x1499D87F, 0x03,
	563143, OSC_192_PLL_ISDB_T_FULLSEG_2A, 0x0E, 0x1499D87F, 0x03,
	569143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	575143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	581143, OSC_192_PLL_ISDB_T_FULLSEG_31, 0x2F, 0xF2FF2FF2, 0x03,
	587143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	593143, OSC_192_PLL_ISDB_T_FULLSEG_2B, 0x13, 0x9421FC4E, 0x03,
	599143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	605143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	611143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	617143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	623143, OSC_192_PLL_ISDB_T_FULLSEG_2F, 0x27, 0x47C9D1F2, 0x03,
	629143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	635143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	641143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	647143, OSC_192_PLL_ISDB_T_FULLSEG_2B, 0x13, 0x9421FC4E, 0x03,
	653143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	659143, OSC_192_PLL_ISDB_T_FULLSEG_2E, 0x22, 0xAB5BBB2E, 0x03,
	665143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	671143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	677143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	683143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	689143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	695143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	701143, OSC_192_PLL_ISDB_T_FULLSEG_2E, 0x22, 0xAB5BBB2E, 0x03,
	707143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	713143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	719143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	725143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	731143, OSC_192_PLL_ISDB_T_FULLSEG_30, 0x2B, 0xB4099EA4, 0x03,
	737143, OSC_192_PLL_ISDB_T_FULLSEG_2E, 0x22, 0xAB5BBB2E, 0x03,
	743143, OSC_192_PLL_ISDB_T_FULLSEG_2E, 0x22, 0xAB5BBB2E, 0x03,
	749143, OSC_192_PLL_ISDB_T_FULLSEG_2B, 0x13, 0x9421FC4E, 0x03,
	755143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	761143, OSC_192_PLL_ISDB_T_FULLSEG_2A, 0x0E, 0x1499D87F, 0x03,
	767143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,

	/* ISDB-T full-seg, UHF Brazil Only */
	773143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	779143, OSC_192_PLL_ISDB_T_FULLSEG_2C, 0x18, 0xD51B8A9C, 0x03,
	785143, OSC_192_PLL_ISDB_T_FULLSEG_2B, 0x13, 0x9421FC4E, 0x03,
	791143, OSC_192_PLL_ISDB_T_FULLSEG_2D, 0x1D, 0xDB9AF156, 0x03,
	797143, OSC_192_PLL_ISDB_T_FULLSEG_2B, 0x13, 0x9421FC4E, 0x03,
	803143, OSC_192_PLL_ISDB_T_FULLSEG_2B, 0x13, 0x9421FC4E, 0x03,
	0, OSC_192_PLL_ISDB_T_FULLSEG, 0x00, 0x00000000, 0x00
};
