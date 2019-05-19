/*
 * Guitar.h
 *
 *  Created on: May 17, 2019
 *      Author: Andy
 */

#ifndef GUITAR_H_
#define GUITAR_H_

#include "stdint.h"
#include "math.h"
#include "MK64F12.h"

#define PI 3.14F
#define T_SAMPLE 0.00005F

/*Notes definitions*/
#define A_BASE 220
#define B_BASE 246.9F
#define C_BASE 130.8F
#define D_BASE 146.8F
#define E_BASE 164.8F
#define F_BASE 174.6F
#define G_BASE 196
/*Harmonies*/
#define FIRST 2
#define SECOND 3
#define THIRD 4
#define FOURTH 5
#define FIFTH 6
#define SIXTH 7
#define SEVENTH 8
#define EIGHTH 9

#define T1 1.4F
#define T2 1.6F
#define T3 0.4F
#define T4 0.04F
#define T5 0.2F
#define T6 0.18F
#define T7 0.15F
#define T8 0.11F

/*Digital note creation*/
float note_A(uint16_t n);
float note_B(uint16_t n);
float note_C(uint16_t n);
float note_D(uint16_t n);
float note_E(uint16_t n);
float note_F(uint16_t n);
float note_G(uint16_t n);


#endif /* GUITAR_H_ */
