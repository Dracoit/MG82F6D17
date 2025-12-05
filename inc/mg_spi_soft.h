
#ifndef MG_SPI_SOFT_H
#define MG_SPI_SOFT_H
#include "REG_MG82F6D17.h"

void mg_spi_init(__sbit sck, __sbit mosi, __sbit miso);
unsigned char mg_spi_transfer(unsigned char b);

#endif
