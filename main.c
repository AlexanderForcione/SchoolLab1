/**
 * File Name: main.c
 * 
 * Name: Lab1,PIC24 Oscillator configuration and GitHub with MPLABX IDE
 *
 * Description: This is the main file used for lab 1 of Advanced programming in Microprocessors.
 * 
 * Lab Number: 1
 * 
 * REVISION HISTORY:
 * ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
 * Author                       Date                  Comments on revision
 * ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
 * Alexander Forcione        August 24th 2017           v.1.0.0 PIC24 Oscillation
 * 
 * ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
 */


#include "mcc_generated_files/mcc.h"
#include <xc.h>

/*
                         Main application
 */
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    PIN_MANAGER_Initialize(); // Calls pin manager file so set the pins for the Explorer 16

    while (1)  // continuously loops
    {
      _LATA7=_LATA7^1; // Toggles LED RA7 on or off
    }

}
/**
 End of File
*/