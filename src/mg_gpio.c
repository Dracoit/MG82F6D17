
#include "mg_gpio.h"

void mg_pinMode(__sbit pin, unsigned char mode){
    pin = mode ? 1 : 0;
}
void mg_digitalWrite(__sbit pin, bit val){
    pin = val;
}
bit mg_digitalRead(__sbit pin){
    return pin;
}
