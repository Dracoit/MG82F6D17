
#ifndef MG_UART_H
#define MG_UART_H
#include "REG_MG82F6D17.h"

void mg_uart_init(unsigned long baud);
void mg_uart_write(unsigned char c);
void mg_uart_write_str(char *s);
bit  mg_uart_available(void);
unsigned char mg_uart_read(void);

#endif
