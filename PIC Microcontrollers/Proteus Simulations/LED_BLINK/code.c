/* Main.c file generated by New Project wizard
 *
 * Created:   Thu Dec 29 2022
 * Processor: PIC16F877A
 * Compiler:  HI-TECH C for PIC10/12/16
 */

#include <htc.h>


void main(void){

   TRISB = 0;

   while (1){ 
      //Blink the LED
      RB0 = 1;
      __delay_ms(1000);
      RB0 = 0;
      __delay_ms(1000);
   }
 }