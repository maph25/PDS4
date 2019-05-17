/**
 * @file    P4.c
 * @brief   Application entry point.
 */
#include <DAC2.h>
#include "DAC.h"
#include <stdint.h>
#include "GPIO.h"
#include "PIT.h"
#include "NVIC.h"
#include "math.h"
#include "Guitar.h"
#include "MK64F12.h"
#include "bits.h"


int main(void) {
		DAC_ControlReg0 config0 = DAC_DAC_EN|DAC_REFSEL|DAC_TRG_SW_SEL|DAC_LOWPOW_EN;
		DAC_ControlReg1 config1 = DAC_BUFF_NORMAL_MODE;

		DAC_ClockGating();/** Activates the clock gating for the DAC**/
		DAC_Init(&config0, &config1); /** Writes the configuration variables to the DAC**/


	    while(1) {

		}

	    return 0 ;
	}
