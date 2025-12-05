
#include "mg_spi_soft.h"
#include "mg_delay.h"

static __sbit SCK, MOSI, MISO;

void mg_spi_init(__sbit sck, __sbit mosi, __sbit miso){
    SCK=sck; MOSI=mosi; MISO=miso;
    SCK=0;
}

unsigned char mg_spi_transfer(unsigned char b){
    unsigned char r=0;
    for(char i=0;i<8;i++){
        MOSI = (b & 0x80);
        b <<= 1;
        SCK=1; mg_delay_ms(1);
        r = (r<<1) | MISO;
        SCK=0;
    }
    return r;
}
