/*
 * Guitar.c
 *
 *  Created on: May 17, 2019
 *      Author: Andy
 */

#include "Guitar.h"
#include "math.h"


float note_A(uint16_t n)
{
	float note;
	note = sin(A_BASE * 2 * PI * n * T_SAMPLE) 	+ T1 * sin(A_BASE * FIRST * 2 * PI * n * T_SAMPLE)
							+ T2 * sin(A_BASE * SECOND * 2 * PI * n * T_SAMPLE)
							+ T3 * sin(A_BASE * THIRD * 2 * PI * n * T_SAMPLE)
							+ T4 * sin(A_BASE * FOURTH * 2 * PI * n * T_SAMPLE)
							+ T5 * sin(A_BASE * FIFTH * 2 * PI * n * T_SAMPLE)
							+ T6 * sin(A_BASE * SIXTH * 2 * PI * n * T_SAMPLE)
							+ T7 * sin(A_BASE * SEVENTH * 2 * PI * n * T_SAMPLE)
						 	+ T8 * sin(A_BASE * EIGHTH * 2 * PI * n * T_SAMPLE);
	return note;
}

float note_B(uint16_t n)
{
	float note;
	note = sin(B_BASE * 2 * PI * n * T_SAMPLE) + T1 * sin(B_BASE * FIRST * 2 * PI * n *T_SAMPLE)
													  + T2 * sin(B_BASE * SECOND * 2 * PI * n *T_SAMPLE)
											          + T3 * sin(B_BASE * THIRD * 2 * PI * n *T_SAMPLE)
											          + T4 * sin(B_BASE * FOURTH * 2 * PI * n *T_SAMPLE)
											          + T5 * sin(B_BASE * FIFTH * 2 * PI * n *T_SAMPLE)
											          + T6 * sin(B_BASE * SIXTH * 2 * PI * n *T_SAMPLE)
													  + T7 * sin(B_BASE * SEVENTH * 2 * PI * n *T_SAMPLE)
													  + T8 * sin(B_BASE * EIGHTH * 2 * PI * n *T_SAMPLE);
	return note;
}

float note_C(uint16_t n)
{
	float note;
	note = sin(C_BASE * 2 * PI * n * T_SAMPLE)+ T1 * sin(C_BASE * FIRST * 2 * PI * n *T_SAMPLE)
													  + T2 * sin(C_BASE * SECOND * 2 * PI * n *T_SAMPLE)
											          + T3 * sin(C_BASE * THIRD * 2 * PI * n *T_SAMPLE)
											          + T4 * sin(C_BASE * FOURTH * 2 * PI * n *T_SAMPLE)
											          + T5 * sin(C_BASE * FIFTH * 2 * PI * n *T_SAMPLE)
											          + T6 * sin(C_BASE * SIXTH * 2 * PI * n *T_SAMPLE)
													  + T7 * sin(C_BASE * SEVENTH * 2 * PI * n *T_SAMPLE)
													  + T8 * sin(C_BASE * EIGHTH * 2 * PI * n *T_SAMPLE);
	return note;
}

float note_D(uint16_t n)
{
	float note;
	note = sin(D_BASE * 2 * PI * n * T_SAMPLE)+ T1 * sin(D_BASE * FIRST * 2 * PI * n *T_SAMPLE)
													  + T2 * sin(D_BASE * SECOND * 2 * PI * n *T_SAMPLE)
											          + T3 * sin(D_BASE * THIRD * 2 * PI * n *T_SAMPLE)
											          + T4 * sin(D_BASE * FOURTH * 2 * PI * n *T_SAMPLE)
											          + T5 * sin(D_BASE * FIFTH * 2 * PI * n *T_SAMPLE)
											          + T6 * sin(D_BASE * SIXTH * 2 * PI * n *T_SAMPLE)
													  + T7 * sin(D_BASE * SEVENTH * 2 * PI * n *T_SAMPLE)
													  + T8 * sin(D_BASE * EIGHTH * 2 * PI * n *T_SAMPLE);
	return note;
}

float note_E(uint16_t n)
{
	float note;
	note = sin(E_BASE * 2 * PI * n * T_SAMPLE)+ T1 * sin(E_BASE * FIRST * 2 * PI * n *T_SAMPLE)
													  + T2 * sin(E_BASE * SECOND * 2 * PI * n *T_SAMPLE)
											          + T3 * sin(E_BASE * THIRD * 2 * PI * n *T_SAMPLE)
											          + T4 * sin(E_BASE * FOURTH * 2 * PI * n *T_SAMPLE)
											          + T5 * sin(E_BASE * FIFTH * 2 * PI * n *T_SAMPLE)
											          + T6 * sin(E_BASE * SIXTH * 2 * PI * n *T_SAMPLE)
													  + T7 * sin(E_BASE * SEVENTH * 2 * PI * n *T_SAMPLE)
													  + T8 * sin(E_BASE * EIGHTH * 2 * PI * n *T_SAMPLE);
	return note;
}

float note_F(uint16_t n)
{
	float note;
	note = sin(F_BASE * 2 * PI * n * T_SAMPLE)+ T1 * sin(F_BASE * FIRST * 2 * PI * n *T_SAMPLE)
													  + T2 * sin(F_BASE * SECOND * 2 * PI * n *T_SAMPLE)
											          + T3 * sin(F_BASE * THIRD * 2 * PI * n *T_SAMPLE)
											          + T4 * sin(F_BASE * FOURTH * 2 * PI * n *T_SAMPLE)
											          + T5 * sin(F_BASE * FIFTH * 2 * PI * n *T_SAMPLE)
											          + T6 * sin(F_BASE * SIXTH * 2 * PI * n *T_SAMPLE)
													  + T7 * sin(F_BASE * SEVENTH * 2 * PI * n *T_SAMPLE)
													  + T8 * sin(F_BASE * EIGHTH * 2 * PI * n *T_SAMPLE);
	return note;
}

float note_G(uint16_t n)
{
	float note;
	note = sin(G_BASE * 2 * PI * n * T_SAMPLE)+ T1 * sin(G_BASE * FIRST * 2 * PI * n *T_SAMPLE)
													  + T2 * sin(G_BASE * SECOND * 2 * PI * n *T_SAMPLE)
											          + T3 * sin(G_BASE * THIRD * 2 * PI * n *T_SAMPLE)
											          + T4 * sin(G_BASE * FOURTH * 2 * PI * n *T_SAMPLE)
											          + T5 * sin(G_BASE * FIFTH * 2 * PI * n *T_SAMPLE)
											          + T6 * sin(G_BASE * SIXTH * 2 * PI * n *T_SAMPLE)
													  + T7 * sin(G_BASE * SEVENTH * 2 * PI * n *T_SAMPLE)
													  + T8 * sin(G_BASE * EIGHTH * 2 * PI * n *T_SAMPLE);
	return note;
}

