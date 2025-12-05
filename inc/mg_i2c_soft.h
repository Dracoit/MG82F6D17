
#ifndef MG_I2C_SOFT_H
#define MG_I2C_SOFT_H
#include "REG_MG82F6D17.h"

void mg_i2c_init(__sbit scl, __sbit sda);
void mg_i2c_start(void);
void mg_i2c_stop(void);
bit  mg_i2c_write(unsigned char b);
unsigned char mg_i2c_read(bit ack);

#endif
