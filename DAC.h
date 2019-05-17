/*
 * DAC.h
 *
 *  Created on: Mar 5, 2019
 *      Author: Andrea Perez Huizar, ie69876@iteso.mx
 */

#ifndef DAC_H_
#define DAC_H_

#include "MK64F12.h"
#include "bits.h"


///*Value equal to zero*/
//#define NULL 0x00
///*Shift for high part*/
//#define HIGH_SHIFT 0x08
///*Data low mask*/
//#define DAC_DATL_MASK 0x00FF
///*Data high mask*/
//#define DAC_DATH_MASK 0xFF00
//
///*DAC main configuration*/
//void DAC_init(void);
//
///*DAC writes in output wanted signal*/
//void DAC_output(uint16_t signal);
#define DAC0_CLOCK_GATING 0x1000
#define DAC_DAC_EN 0x80
#define DAC_REFSEL 0x40
#define DAC_TRG_SW_SEL 0x20
#define DAC_SW_TRG_TRUE 0x10
#define DAC_LOWPOW_EN 0x8
#define DAC_BUFF_WATERMARK_INTERRUPT_EN 0x4
#define DAC_BUFF_POINTER_TOP_INTERRUPT_EN 0x2
#define DAC_BUFF_POINTER_BOTTOM_INTERRUPT_EN 0x1
#define DAC_DMA_EN 0x80
#define DAC_BUFF_WM_1WORD 0x00
#define DAC_BUFF_WM_2WORD 0x08
#define DAC_BUFF_WM_3WORD 0x10
#define DAC_BUFF_WM_4WORD 0x18
#define DAC_BUFF_NORMAL_MODE 0x00
#define DAC_BUFF_SWING_MODE 0x02
#define DAC_BUFF_ONETIMESCAN_MODE 0x04
#define DAC_BUFF_EN 0x01

/*! This definitions helps us set the DAC Configuration**/
typedef const uint8_t DAC_ControlReg0;
typedef const uint8_t DAC_ControlReg1;

/*!
 * 	\brief This funciton initialize the Clock Gating DAC
 *
 * 	\param[in] void
 * 	\return void
 */
void DAC_ClockGating();

/*!
 * 	\brief Configures the DAC writing the C0 and C1 registers
 *
 * 	\param[in] *C0 pointer to where the configuration values are stored
 * 	\param[in] *C0 pointer to where the configuration values are stored
 *
 * 	\return void
 *
 */
void DAC_Init(DAC_ControlReg0 *C0, DAC_ControlReg1 *C1);

/*!
 * 	\brief Writes the DAC buffer with the value we want to see at the DAC output
 *
 * 	\param[in] data Value to be written in the DAC buffer
 *
 * 	\return void
 *
 */
void DAC_Write(uint16_t data);



#endif /* DAC_H_ */
