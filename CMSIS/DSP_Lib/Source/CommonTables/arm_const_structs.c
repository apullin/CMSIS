/* ---------------------------------------------------------------------- 
* Copyright (C) 2010-2014 ARM Limited. All rights reserved. 
* 
* $Date:        19. March 2015 
* $Revision: 	V.1.4.5
* 
* Project: 	    CMSIS DSP Library 
* Title:	    arm_const_structs.c 
* 
* Description:	This file has constant structs that are initialized for
*              user convenience.  For example, some can be given as
*              arguments to the arm_cfft_f32() or arm_rfft_f32()
*              functions.
* 
* Target Processor: Cortex-M4/Cortex-M3
*  
* Redistribution and use in source and binary forms, with or without 
* modification, are permitted provided that the following conditions
* are met:
*   - Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*   - Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in
*     the documentation and/or other materials provided with the 
*     distribution.
*   - Neither the name of ARM LIMITED nor the names of its contributors
*     may be used to endorse or promote products derived from this
*     software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
* FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
* COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
* ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.  
* -------------------------------------------------------------------- */

#include "arm_const_structs.h"

//Floating-point structs

const arm_cfft_instance_f32 arm_cfft_sR_f32_len16 = {
	16, twiddleCoef_16, armBitRevIndexTable16, ARMBITREVINDEXTABLE__16_TABLE_LENGTH
};

const arm_cfft_instance_f32 arm_cfft_sR_f32_len32 = {
	32, twiddleCoef_32, armBitRevIndexTable32, ARMBITREVINDEXTABLE__32_TABLE_LENGTH
};

const arm_cfft_instance_f32 arm_cfft_sR_f32_len64 = {
	64, twiddleCoef_64, armBitRevIndexTable64, ARMBITREVINDEXTABLE__64_TABLE_LENGTH
};

const arm_cfft_instance_f32 arm_cfft_sR_f32_len128 = {
	128, twiddleCoef_128, armBitRevIndexTable128, ARMBITREVINDEXTABLE_128_TABLE_LENGTH
};

const arm_cfft_instance_f32 arm_cfft_sR_f32_len256 = {
	256, twiddleCoef_256, armBitRevIndexTable256, ARMBITREVINDEXTABLE_256_TABLE_LENGTH
};

const arm_cfft_instance_f32 arm_cfft_sR_f32_len512 = {
	512, twiddleCoef_512, armBitRevIndexTable512, ARMBITREVINDEXTABLE_512_TABLE_LENGTH
};

const arm_cfft_instance_f32 arm_cfft_sR_f32_len1024 = {
	1024, twiddleCoef_1024, armBitRevIndexTable1024, ARMBITREVINDEXTABLE1024_TABLE_LENGTH
};

const arm_cfft_instance_f32 arm_cfft_sR_f32_len2048 = {
	2048, twiddleCoef_2048, armBitRevIndexTable2048, ARMBITREVINDEXTABLE2048_TABLE_LENGTH
};

const arm_cfft_instance_f32 arm_cfft_sR_f32_len4096 = {
	4096, twiddleCoef_4096, armBitRevIndexTable4096, ARMBITREVINDEXTABLE4096_TABLE_LENGTH
};


//Fixed-point structs

const arm_cfft_instance_q31 arm_cfft_sR_q31_len16 = {
	16, twiddleCoef_16_q31, armBitRevIndexTable_fixed_16, ARMBITREVINDEXTABLE_FIXED___16_TABLE_LENGTH
};

const arm_cfft_instance_q31 arm_cfft_sR_q31_len32 = {
	32, twiddleCoef_32_q31, armBitRevIndexTable_fixed_32, ARMBITREVINDEXTABLE_FIXED___32_TABLE_LENGTH
};

const arm_cfft_instance_q31 arm_cfft_sR_q31_len64 = {
	64, twiddleCoef_64_q31, armBitRevIndexTable_fixed_64, ARMBITREVINDEXTABLE_FIXED___64_TABLE_LENGTH
};

const arm_cfft_instance_q31 arm_cfft_sR_q31_len128 = {
	128, twiddleCoef_128_q31, armBitRevIndexTable_fixed_128, ARMBITREVINDEXTABLE_FIXED__128_TABLE_LENGTH
};

const arm_cfft_instance_q31 arm_cfft_sR_q31_len256 = {
	256, twiddleCoef_256_q31, armBitRevIndexTable_fixed_256, ARMBITREVINDEXTABLE_FIXED__256_TABLE_LENGTH
};

const arm_cfft_instance_q31 arm_cfft_sR_q31_len512 = {
	512, twiddleCoef_512_q31, armBitRevIndexTable_fixed_512, ARMBITREVINDEXTABLE_FIXED__512_TABLE_LENGTH
};

const arm_cfft_instance_q31 arm_cfft_sR_q31_len1024 = {
	1024, twiddleCoef_1024_q31, armBitRevIndexTable_fixed_1024, ARMBITREVINDEXTABLE_FIXED_1024_TABLE_LENGTH
};

const arm_cfft_instance_q31 arm_cfft_sR_q31_len2048 = {
	2048, twiddleCoef_2048_q31, armBitRevIndexTable_fixed_2048, ARMBITREVINDEXTABLE_FIXED_2048_TABLE_LENGTH
};

const arm_cfft_instance_q31 arm_cfft_sR_q31_len4096 = {
	4096, twiddleCoef_4096_q31, armBitRevIndexTable_fixed_4096, ARMBITREVINDEXTABLE_FIXED_4096_TABLE_LENGTH
};


const arm_cfft_instance_q15 arm_cfft_sR_q15_len16 = {
	16, twiddleCoef_16_q15, armBitRevIndexTable_fixed_16, ARMBITREVINDEXTABLE_FIXED___16_TABLE_LENGTH
};

const arm_cfft_instance_q15 arm_cfft_sR_q15_len32 = {
	32, twiddleCoef_32_q15, armBitRevIndexTable_fixed_32, ARMBITREVINDEXTABLE_FIXED___32_TABLE_LENGTH
};

const arm_cfft_instance_q15 arm_cfft_sR_q15_len64 = {
	64, twiddleCoef_64_q15, armBitRevIndexTable_fixed_64, ARMBITREVINDEXTABLE_FIXED___64_TABLE_LENGTH
};

const arm_cfft_instance_q15 arm_cfft_sR_q15_len128 = {
	128, twiddleCoef_128_q15, armBitRevIndexTable_fixed_128, ARMBITREVINDEXTABLE_FIXED__128_TABLE_LENGTH
};

const arm_cfft_instance_q15 arm_cfft_sR_q15_len256 = {
	256, twiddleCoef_256_q15, armBitRevIndexTable_fixed_256, ARMBITREVINDEXTABLE_FIXED__256_TABLE_LENGTH
};

const arm_cfft_instance_q15 arm_cfft_sR_q15_len512 = {
	512, twiddleCoef_512_q15, armBitRevIndexTable_fixed_512, ARMBITREVINDEXTABLE_FIXED__512_TABLE_LENGTH
};

const arm_cfft_instance_q15 arm_cfft_sR_q15_len1024 = {
	1024, twiddleCoef_1024_q15, armBitRevIndexTable_fixed_1024, ARMBITREVINDEXTABLE_FIXED_1024_TABLE_LENGTH
};

const arm_cfft_instance_q15 arm_cfft_sR_q15_len2048 = {
	2048, twiddleCoef_2048_q15, armBitRevIndexTable_fixed_2048, ARMBITREVINDEXTABLE_FIXED_2048_TABLE_LENGTH
};

const arm_cfft_instance_q15 arm_cfft_sR_q15_len4096 = {
	4096, twiddleCoef_4096_q15, armBitRevIndexTable_fixed_4096, ARMBITREVINDEXTABLE_FIXED_4096_TABLE_LENGTH
};

//////////////Structure for real-value inputs

//Floating-point structs

const arm_rfft_fast_instance_f32 arm_rfft_fast_sR_f32_len32 = {
	.Sint = {16, twiddleCoef_32, armBitRevIndexTable32, ARMBITREVINDEXTABLE__32_TABLE_LENGTH},
    .fftLenRFFT = 32u,
    .pTwiddleRFFT = (float32_t *) twiddleCoef_rfft_32
};

const arm_rfft_fast_instance_f32 arm_rfft_fast_sR_f32_len64 = {
	.Sint = {32, twiddleCoef_32, armBitRevIndexTable32, ARMBITREVINDEXTABLE__32_TABLE_LENGTH},
    .fftLenRFFT = 64u,
    .pTwiddleRFFT = (float32_t *) twiddleCoef_rfft_64
};

const arm_rfft_fast_instance_f32 arm_rfft_fast_sR_f32_len128 = {
	.Sint = {64, twiddleCoef_64, armBitRevIndexTable64, ARMBITREVINDEXTABLE__64_TABLE_LENGTH},
    .fftLenRFFT = 128u,
    .pTwiddleRFFT = (float32_t *) twiddleCoef_rfft_128
};

const arm_rfft_fast_instance_f32 arm_rfft_fast_sR_f32_len256 = {
	.Sint = {128, twiddleCoef_128, armBitRevIndexTable128, ARMBITREVINDEXTABLE_128_TABLE_LENGTH},
    .fftLenRFFT = 256u,
    .pTwiddleRFFT = (float32_t *) twiddleCoef_rfft_256
};

const arm_rfft_fast_instance_f32 arm_rfft_fast_sR_f32_len512 = {
	.Sint = {256, twiddleCoef_256, armBitRevIndexTable256, ARMBITREVINDEXTABLE_256_TABLE_LENGTH},
    .fftLenRFFT = 512u,
    .pTwiddleRFFT = (float32_t *) twiddleCoef_rfft_512
};

const arm_rfft_fast_instance_f32 arm_rfft_fast_sR_f32_len1024 = {
	.Sint = {512, twiddleCoef_512, armBitRevIndexTable512, ARMBITREVINDEXTABLE_512_TABLE_LENGTH},
    .fftLenRFFT = 1024u,
    .pTwiddleRFFT = (float32_t *) twiddleCoef_rfft_1024
};

const arm_rfft_fast_instance_f32 arm_rfft_fast_sR_f32_len2048 = {
	.Sint = {1024, twiddleCoef_1024, armBitRevIndexTable1024, ARMBITREVINDEXTABLE1024_TABLE_LENGTH},
    .fftLenRFFT = 2048u,
    .pTwiddleRFFT = (float32_t *) twiddleCoef_rfft_2048
};

const arm_rfft_fast_instance_f32 arm_rfft_fast_sR_f32_len4096 = {
	.Sint = {2048, twiddleCoef_2048, armBitRevIndexTable2048, ARMBITREVINDEXTABLE2048_TABLE_LENGTH},
    .fftLenRFFT = 4096u,
    .pTwiddleRFFT = (float32_t *) twiddleCoef_rfft_4096
};

//Fixed-point structs

//q31_t

extern q31_t realCoefAQ31[8192];
extern q31_t realCoefBQ31[8192];

const arm_rfft_instance_q31 arm_rfft_sR_q31_len32 = {
	.fftLenReal = 32u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 256u,
	.pTwiddleAReal = (q31_t*)realCoefAQ31,
	.pTwiddleBReal = (q31_t*)realCoefBQ31,
	.pCfft = &arm_cfft_sR_q31_len16
};

const arm_rfft_instance_q31 arm_rfft_sR_q31_len64 = {
	.fftLenReal = 128u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 64u*2u,
	.pTwiddleAReal = (q31_t*)realCoefAQ31,
	.pTwiddleBReal = (q31_t*)realCoefBQ31,
	.pCfft = &arm_cfft_sR_q31_len32
};

const arm_rfft_instance_q31 arm_rfft_sR_q31_len128 = {
	.fftLenReal = 128u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 64u,
	.pTwiddleAReal = (q31_t*)realCoefAQ31,
	.pTwiddleBReal = (q31_t*)realCoefBQ31,
	.pCfft = &arm_cfft_sR_q31_len64
};

const arm_rfft_instance_q31 arm_rfft_sR_q31_len256 = {
	.fftLenReal = 256u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 32u,
	.pTwiddleAReal = (q31_t*)realCoefAQ31,
	.pTwiddleBReal = (q31_t*)realCoefBQ31,
	.pCfft = &arm_cfft_sR_q31_len128
};

const arm_rfft_instance_q31 arm_rfft_sR_q31_len512 = {
	.fftLenReal = 512u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 16u,
	.pTwiddleAReal = (q31_t*)realCoefAQ31,
	.pTwiddleBReal = (q31_t*)realCoefBQ31,
	.pCfft = &arm_cfft_sR_q31_len256
};

const arm_rfft_instance_q31 arm_rfft_sR_q31_len1024 = {
	.fftLenReal = 1024u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 8u,
	.pTwiddleAReal = (q31_t*)realCoefAQ31,
	.pTwiddleBReal = (q31_t*)realCoefBQ31,
	.pCfft = &arm_cfft_sR_q31_len512
};

const arm_rfft_instance_q31 arm_rfft_sR_q31_len2048 = {
	.fftLenReal = 2048u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 4u,
	.pTwiddleAReal = (q31_t*)realCoefAQ31,
	.pTwiddleBReal = (q31_t*)realCoefBQ31,
	.pCfft = &arm_cfft_sR_q31_len1024
};

const arm_rfft_instance_q31 arm_rfft_sR_q31_len4096 = {
	.fftLenReal = 4096u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 2u,
	.pTwiddleAReal = (q31_t*)realCoefAQ31,
	.pTwiddleBReal = (q31_t*)realCoefBQ31,
	.pCfft = &arm_cfft_sR_q31_len2048
};

const arm_rfft_instance_q31 arm_rfft_sR_q31_len8192 = {
		.fftLenReal = 8192u,
		.ifftFlagR = 0,
		.bitReverseFlagR = 1,
		.twidCoefRModifier = 1u,
		.pTwiddleAReal = (q31_t*)realCoefAQ31,
		.pTwiddleBReal = (q31_t*)realCoefBQ31,
		.pCfft = &arm_cfft_sR_q31_len4096
};

//q15_t

extern q15_t realCoefAQ15[8192];
extern q15_t realCoefBQ15[8192];

const arm_rfft_instance_q15 arm_rfft_sR_q15_len32 = {
	.fftLenReal = 32u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 256u,
	.pTwiddleAReal = (q15_t*)realCoefAQ15,
	.pTwiddleBReal = (q15_t*)realCoefBQ15,
	.pCfft = &arm_cfft_sR_q15_len16
};

const arm_rfft_instance_q15 arm_rfft_sR_q15_len64 = {
	.fftLenReal = 32u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 128u,
	.pTwiddleAReal = (q15_t*)realCoefAQ15,
	.pTwiddleBReal = (q15_t*)realCoefBQ15,
	.pCfft = &arm_cfft_sR_q15_len32
};

const arm_rfft_instance_q15 arm_rfft_sR_q15_len128 = {
	.fftLenReal = 32u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 64u,
	.pTwiddleAReal = (q15_t*)realCoefAQ15,
	.pTwiddleBReal = (q15_t*)realCoefBQ15,
	.pCfft = &arm_cfft_sR_q15_len64
};

const arm_rfft_instance_q15 arm_rfft_sR_q15_len256 = {
	.fftLenReal = 32u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 32u,
	.pTwiddleAReal = (q15_t*)realCoefAQ15,
	.pTwiddleBReal = (q15_t*)realCoefBQ15,
	.pCfft = &arm_cfft_sR_q15_len128
};

const arm_rfft_instance_q15 arm_rfft_sR_q15_len512 = {
	.fftLenReal = 32u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 16u,
	.pTwiddleAReal = (q15_t*)realCoefAQ15,
	.pTwiddleBReal = (q15_t*)realCoefBQ15,
	.pCfft = &arm_cfft_sR_q15_len256
};

const arm_rfft_instance_q15 arm_rfft_sR_q15_len1024 = {
	.fftLenReal = 32u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 8u,
	.pTwiddleAReal = (q15_t*)realCoefAQ15,
	.pTwiddleBReal = (q15_t*)realCoefBQ15,
	.pCfft = &arm_cfft_sR_q15_len512
};

const arm_rfft_instance_q15 arm_rfft_sR_q15_len2048 = {
	.fftLenReal = 32u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 4u,
	.pTwiddleAReal = (q15_t*)realCoefAQ15,
	.pTwiddleBReal = (q15_t*)realCoefBQ15,
	.pCfft = &arm_cfft_sR_q15_len1024
};

const arm_rfft_instance_q15 arm_rfft_sR_q15_len4096 = {
	.fftLenReal = 32u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 2u,
	.pTwiddleAReal = (q15_t*)realCoefAQ15,
	.pTwiddleBReal = (q15_t*)realCoefBQ15,
	.pCfft = &arm_cfft_sR_q15_len2048
};

const arm_rfft_instance_q15 arm_rfft_sR_q15_len8192 = {
	.fftLenReal = 8192u,
	.ifftFlagR = 0,
	.bitReverseFlagR = 1,
	.twidCoefRModifier = 1u,
	.pTwiddleAReal = (q15_t*)realCoefAQ15,
	.pTwiddleBReal = (q15_t*)realCoefBQ15,
	.pCfft = &arm_cfft_sR_q15_len4096
};



