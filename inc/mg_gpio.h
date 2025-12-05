
#ifndef MG_GPIO_H
#define MG_GPIO_H
#include "REG_MG82F6D17.h"

void mg_pinMode(__sbit pin, unsigned char mode);
void mg_digitalWrite(__sbit pin, bit val);
bit  mg_digitalRead(__sbit pin);

#endif
