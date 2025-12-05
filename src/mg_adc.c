
#include "mg_adc.h"
#include "REG_MG82F6D17.h"

void mg_adc_init(void){
    ADCCON0 = 0x81; 
}

unsigned int mg_adc_read(unsigned char ch){
    ADCCON0 = (0x80 | ch);
    ADCCON0 |= 0x40;
    while(ADCCON0 & 0x40);
    return ((unsigned int)ADCDH<<8)|ADCDL;
}
