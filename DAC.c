/*
 * DAC.c
 *
 *  Created on: Mar 5, 2019
 *      Author: Andrea Perez Huizar, ie69876@iteso.mx
 */

#include "DAC.h"


///*Initial configuration for DAC*/
//void DAC_init()
//{
//	/*Clock gating*/
//	SIM->SCGC2 = SIM_SCGC2_DAC0_MASK;
//	/*DAC enable and reference select*/
//	DAC0->C0 = 0xC0;
//			//DAC_C0_DACEN_MASK | DAC_C0_DACRFS_MASK;
//	DAC0->DAT[0].DATL = 0;
//	DAC0->DAT[0].DATH = 0;
//}
//
//void DAC_output(uint16_t signal)
//{
//	/*Output for DAC LOW*/
//	DAC0->DAT[NULL].DATL = ((DAC_DATL_MASK & signal));
//	/*Output for DAC HIGH and shift*/
//	DAC0->DAT[NULL].DATH = ((DAC_DATH_MASK & signal) >> HIGH_SHIFT);
//}
//
void DAC_ClockGating()
{
	/** Writes the clock gating bit for the DAC0**/
	SIM->SCGC2 |= DAC0_CLOCK_GATING;
}//end function

/*!
  \fn DAC_Init
  \brief Configures the DAC writing C0 and C1 with their respective configuration
  	  	 variables
  \param *C0 pointer to where the configuration values for C0 are stored
  \param *C1 pointer to where the configuration values for C1 are stored
 */
void DAC_Init(DAC_ControlReg0 *C0, DAC_ControlReg1 *C1)
{
	/** Writes the configurations specified**/
	DAC0->C0 = *C0;
	DAC0->C1 = *C1;
}//end function

/*!
  \fn DAC_Write
  \brief Writes the DAC buffer to see a value at the DAC output
  \param data Value to be written at the DAC buffer and then in the output
 */
void DAC_Write(uint16_t data)
{
	/** Declaration of a auxiliar variable to write the DAC*/
	uint16_t aux;

	/** Take the most significant bytes of the data, shift it to the lowest
	 * and assigns it to aux**/
	aux = ((0xFF00)&(data))>>(8);

	DAC0->DAT->DATL = (uint8_t)(0x00FF)&(data); /** Write the lower part of the DAC with the LSB of the data**/
	DAC0->DAT->DATH = (uint8_t)aux; /** Writes the 4 bits of the higher part of the DAC**/
}//end function
