
#include "mg_delay.h"
#include "mg_timer.h"

void mg_delay_ms(unsigned int ms){
    unsigned long t=mg_millis();
    while(mg_millis() - t < ms);
}
