/**
 * @file    P4.c
 * @brief   Application entry point.
 */

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
	ControlReg0 config0 = DAC_C0_DACEN_MASK | DAC_C0_DACRFS_MASK |DAC_C0_DACTRGSEL_MASK|DAC_C0_LPEN_MASK;
	ControlReg1 config1 = 0x00;

	DAC_ClockGating();/** Activates the clock gating for the DAC**/
	DAC_init(&config0, &config1); /** Writes the configuration variables to the DAC**/

	float song[28]={note_C(75),note_C(75),note_G(100),note_G(100),note_A(50),note_A(50),note_G(100),
				note_F(66),note_F(66),note_E(33),note_E(33),note_D(100),note_D(100),note_C(75),
				note_G(100),note_G(100),note_F(66),note_F(66),note_E(33),note_E(33),note_D(100),
				note_G(100),note_G(100),note_F(66),note_F(66),note_E(33),note_E(33),note_D(100)};

	static uint8_t i=0;


	    while(1) {
	    	DAC_output(song[i]);
	    	PIT_delay(PIT_0,21500000,0.00005F);
	    	if(TRUE == PIT_get_interrupt_flag_status(PIT_0))
	    	{
	    		i++;
	    		PIT_clear_interrupt_flag(PIT_0);
	    	}
	    	if(i>=28)
	    	{
	    		i=0;
	    	}
		}

	    return 0 ;
	}


