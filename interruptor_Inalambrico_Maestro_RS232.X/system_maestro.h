/******************************************************************************/
/* System Level #define Macros                                                */
/******************************************************************************/

/*  Define system operating frequency */

/* Microcontroller MIPs (FCY) */
//#define SYS_FREQ        20000000UL
#define _XTAL_FREQ        20000000UL
#define FCY             _XTAL_FREQ/4

/******************************************************************************/
/* System Function Prototypes                                                 */
/******************************************************************************/

/* Custom oscillator configuration funtions, reset source evaluation
functions, and other non-peripheral microcontroller initialization functions
go here. */

void ConfigureOscillator(void); /* Handles clock switching/osc initialization */
