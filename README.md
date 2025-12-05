MG82F6D17 Repository
Minimal, Arduino‑style, general‑purpose libraries for the **Megawin MG82F6D17** microcontroller.
Designed for **Keil C51** and optimized for clarity, portability, and simplicity.


## ✨ Features
- GPIO: digital write/read
- UART1: interrupt‑driven circular buffer
- Timer0: 1ms system tick
- Delay: millis‑based delays
- ADC: simple 12‑bit internal ADC reads
- Soft‑I2C (bit‑banged)
- Soft‑SPI (mode 0)
- PWM using Timer2
- Optional HX711 24‑bit ADC driver


## 📚 Modules
- mg_gpio — digital I/O
- mg_uart — UART1 wrapper (interrupt‑driven)
- mg_timer — 1ms tick timer
- mg_delay — delay_ms
- mg_adc — internal ADC
- mg_i2c_soft — bit‑banged I2C
- mg_spi_soft — bit‑banged SPI
- mg_pwm — Timer2 PWM
- mg_system — convenience aggregator


## 🔧 Supported Toolchain
- **Keil µVision (C51)**


## 📁 Examples
See the *examples/* folder:
- Blink LED
- UART echo
- ADC read + print
- PWM LED fade
- I2C sensor example (MPU6050)
- SPI example (MAX6675)


## 🚀 Getting Started
1. Add the `inc/` folder to your Keil include path.
2. Add all `.c` files from `src/` to the project.
3. Include the system header:
```c
#include "mg_system.h"
4. Initialize peripherals:
    mg_timer_init();
    mg_uart_init(9600);
    mg_adc_init();
License

MIT License — free to use, modify, and distribute.

🤝 Contributing

Pull requests welcome! The goal is to create the best MG82F6D17 library ecosystem.


*CODE created using ChatGPT, please check your code*


---


# 📄 LICENSE (MIT)

MIT License

Copyright (c) 2025

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
