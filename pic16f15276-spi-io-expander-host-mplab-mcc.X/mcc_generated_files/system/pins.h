/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA5 aliases
#define Slave1_TRIS                 TRISAbits.TRISA5
#define Slave1_LAT                  LATAbits.LATA5
#define Slave1_PORT                 PORTAbits.RA5
#define Slave1_WPU                  WPUAbits.WPUA5
#define Slave1_OD                   ODCONAbits.ODCA5
#define Slave1_ANS                  ANSELAbits.ANSA5
#define Slave1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define Slave1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define Slave1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define Slave1_GetValue()           PORTAbits.RA5
#define Slave1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define Slave1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define Slave1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define Slave1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define Slave1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define Slave1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define Slave1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define Slave1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set IO_RB5 aliases
#define Switch_TRIS                 TRISBbits.TRISB5
#define Switch_LAT                  LATBbits.LATB5
#define Switch_PORT                 PORTBbits.RB5
#define Switch_WPU                  WPUBbits.WPUB5
#define Switch_OD                   ODCONBbits.ODCB5
#define Switch_ANS                  ANSELBbits.ANSB5
#define Switch_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define Switch_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define Switch_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define Switch_GetValue()           PORTBbits.RB5
#define Switch_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define Switch_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define Switch_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define Switch_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define Switch_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define Switch_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define Switch_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define Switch_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.WPUC3
#define IO_RC3_OD                   ODCONCbits.ODCC3
#define IO_RC3_ANS                  ANSELCbits.ANSC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IO_RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set IO_RE2 aliases
#define LED_TRIS                 TRISEbits.TRISE2
#define LED_LAT                  LATEbits.LATE2
#define LED_PORT                 PORTEbits.RE2
#define LED_WPU                  WPUEbits.WPUE2
#define LED_OD                   ODCONEbits.ODCE2
#define LED_ANS                  ANSELEbits.ANSE2
#define LED_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define LED_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define LED_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define LED_GetValue()           PORTEbits.RE2
#define LED_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define LED_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define LED_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/