
#include "mg_uart.h"

static volatile bit rx_ready=0;
static volatile unsigned char rx_byte=0;

void mg_uart_init(unsigned long baud){
    SCON = 0x50;
    TMOD |= 0x20;
    TH1 = 256 - (12000000UL/(32*baud));
    TR1 = 1;
    ES = 1;
    EA = 1;
}

void mg_uart_write(unsigned char c){
    SBUF = c;
    while(!TI);
    TI = 0;
}

void mg_uart_write_str(char *s){
    while(*s) mg_uart_write(*s++);
}

bit mg_uart_available(void){
    return rx_ready;
}

unsigned char mg_uart_read(void){
    rx_ready=0;
    return rx_byte;
}

void uart_isr(void) __interrupt (4){
    if(RI){
        RI=0;
        rx_byte=SBUF;
        rx_ready=1;
    }
}
