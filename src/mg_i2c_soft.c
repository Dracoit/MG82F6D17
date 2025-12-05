
#include "mg_i2c_soft.h"
#include "mg_delay.h"

static __sbit SCL;
static __sbit SDA;

void mg_i2c_init(__sbit scl, __sbit sda){
    SCL = scl;
    SDA = sda;
    SCL = 1; SDA = 1;
}

void mg_i2c_start(void){
    SDA = 1; SCL = 1;
    mg_delay_ms(1);
    SDA = 0; mg_delay_ms(1);
    SCL = 0;
}

void mg_i2c_stop(void){
    SDA = 0; SCL = 1;
    mg_delay_ms(1);
    SDA = 1;
}

bit mg_i2c_write(unsigned char b){
    for(unsigned char i=0;i<8;i++){
        SDA = (b & 0x80);
        b <<= 1;
        SCL=1; mg_delay_ms(1);
        SCL=0;
    }
    SDA=1; SCL=1; mg_delay_ms(1);
    bit ack = !SDA;
    SCL=0;
    return ack;
}

unsigned char mg_i2c_read(bit ack){
    unsigned char v=0;
    SDA=1;
    for(char i=0;i<8;i++){
        SCL=1; mg_delay_ms(1);
        v = (v<<1) | SDA;
        SCL=0;
    }
    SDA = ack?0:1;
    SCL=1; mg_delay_ms(1);
    SCL=0;
    SDA=1;
    return v;
}
