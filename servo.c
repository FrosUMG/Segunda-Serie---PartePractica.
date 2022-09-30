#include<16f887.h>
#device adc = 10
#fuses intrc, nomclr, nobrownout
#use delay(internal=8m)

int16 adc, t, t1;

void main(){
setup_adc(adc_clock_internal);
setup_adc_ports(0x01);
//set_adc_channel (1);
//set_adc_channel (0);


for(;;){
 delay_us(20);
   adc=read_adc();
   
   t=adc+975;

   
   Output_bit(pin_c4,1);
   delay_us(t);
  
   Output_bit(pin_c4,0);
   
   t=2000-adc;
   delay_us(t);

}
}


