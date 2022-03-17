#include <xc.h>
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/spi/mssp1.h"
#include "application.h"

/*
 ***********************************************************
 *                                                         *
 *          User Defined Function Definitions              *
 *                                                         *
 ***********************************************************
*/

void Application(void)
{
    if(button == PRESSED)                            // Check if button is pressed
    {
        button  = STATE_READ;                        // Reset button state 
        SPI1_Open( MSSP1_DEFAULT);
        SPI_Client1_Select();
        SPI1_ByteExchange(start_loop_7_seg_display); // Send command to CLIENT
        LED_SetLow();                                // Toggle LED for visual indication
        __delay_ms(LED_HOLD_PERIOD);
        LED_SetHigh();
        SPI_Client1_Deselect();
        SPI1_Close();
    }
}

void TMR2_UserInterruptHandler(void)
{
    button = PRESSED;
}



