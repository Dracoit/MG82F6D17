
#include "mg_pwm.h"
#include "REG_MG82F6D17.h"

void mg_pwm_init(unsigned int f){
    TM2C=0x00;
    T2MOD=0x00;
    unsigned int reload = (12000000UL/f)/2;
    RCMP2H = reload>>8;
    RCMP2L = reload&0xFF;
    TH2=TL2=0;
    T2MOD|=0x02;
    TM2C |=0x04;
}

void mg_pwm_set(unsigned char d){
    unsigned int r=(RCMP2H<<8)|RCMP2L;
    unsigned int c=(r*d)/255;
    CCAP0H=c>>8;
    CCAP0L=c&0xFF;
}
