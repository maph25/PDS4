/*
 * Guitar.c
 *
 *  Created on: May 17, 2019
 *      Author: Andy
 */

#include "Guitar.h"
#include "math.h"


float note_A(uint16_t sample)
{
	float note;
	note = sin(A_BASE * 2 * PI * sample * T_SAMPLE) + T1 * sin(A_BASE * FIRST * 2 * PI * sample * T_SAMPLE)
													  + T2 * sin(A_BASE * SECOND * 2 * PI * sample * T_SAMPLE)
											          + T3 * sin(A_BASE * THIRD * 2 * PI * sample * T_SAMPLE)
											          + T4 * sin(A_BASE * FOURTH * 2 * PI * sample * T_SAMPLE)
											          + T5 * sin(A_BASE * FIFTH * 2 * PI * sample * T_SAMPLE)
											          + T6 * sin(A_BASE * SIXTH * 2 * PI * sample * T_SAMPLE)
													  + T7 * sin(A_BASE * SEVENTH * 2 * PI * sample * T_SAMPLE)
													  + T8 * sin(A_BASE * EIGHTH * 2 * PI * sample * T_SAMPLE);
	return note;
}

float note_B(uint16_t sample)
{
	float note;
	note = sin(B_BASE * 2 * PI * sample * T_SAMPLE) + T1 * sin(B_BASE * FIRST * 2 * PI * sample *T_SAMPLE)
													  + T2 * sin(B_BASE * SECOND * 2 * PI * sample *T_SAMPLE)
											          + T3 * sin(B_BASE * THIRD * 2 * PI * sample *T_SAMPLE)
											          + T4 * sin(B_BASE * FOURTH * 2 * PI * sample *T_SAMPLE)
											          + T5 * sin(B_BASE * FIFTH * 2 * PI * sample *T_SAMPLE)
											          + T6 * sin(B_BASE * SIXTH * 2 * PI * sample *T_SAMPLE)
													  + T7 * sin(B_BASE * SEVENTH * 2 * PI * sample *T_SAMPLE)
													  + T8 * sin(B_BASE * EIGHTH * 2 * PI * sample *T_SAMPLE);
	return note;
}

float note_C(uint16_t sample)
{
	float note;
	note = sin(C_BASE * 2 * PI * sample * T_SAMPLE)+ T1 * sin(C_BASE * FIRST * 2 * PI * sample *T_SAMPLE)
													  + T2 * sin(C_BASE * SECOND * 2 * PI * sample *T_SAMPLE)
											          + T3 * sin(C_BASE * THIRD * 2 * PI * sample *T_SAMPLE)
											          + T4 * sin(C_BASE * FOURTH * 2 * PI * sample *T_SAMPLE)
											          + T5 * sin(C_BASE * FIFTH * 2 * PI * sample *T_SAMPLE)
											          + T6 * sin(C_BASE * SIXTH * 2 * PI * sample *T_SAMPLE)
													  + T7 * sin(C_BASE * SEVENTH * 2 * PI * sample *T_SAMPLE)
													  + T8 * sin(C_BASE * EIGHTH * 2 * PI * sample *T_SAMPLE);
	return note;
}


