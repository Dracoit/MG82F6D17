
#include "mg_timer.h"
#include "REG_MG82F6D17.h"

static volatile unsigned long ms=0;

void mg_timer_init(void){
    TMOD &= ~0x03;
    TMOD |= 0x01;
    TH0 = (65536-12000)>>8;
    TL0 = (65536-12000)&0xFF;
    ET0 = 1;
    TR0 = 1;
    EA  = 1;
}

unsigned long mg_millis(void){
    return ms;
}

void timer0_isr(void) __interrupt (1){
    TH0 = (65536-12000)>>8;
    TL0 = (65536-12000)&0xFF;
    ms++;
}
