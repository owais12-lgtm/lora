#pragma once

// ===== LED =====
#define PIN_LED         25
#ifndef LED_BUILTIN
#define LED_BUILTIN     PIN_LED
#endif

// ===== UART =====
#define PIN_SERIAL_TX   0     // USB/UART TX
#define PIN_SERIAL_RX   1     // USB/UART RX

// ===== I2C =====
#define PIN_WIRE_SDA    8
#define PIN_WIRE_SCL    9

// ===== SPI (LoRa SX1262) =====
#define PIN_SPI_SCK     2
#define PIN_SPI_MOSI    3
#define PIN_SPI_MISO    4
#define PIN_LORA_NSS    5     // Chip select
#define PIN_LORA_DIO1   6
#define PIN_LORA_BUSY   7
#define PIN_LORA_RESET  22

// ===== RF switch =====
#define PIN_RF_SWITCH   10

// ===== ADC =====
#define PIN_A0          26
#define PIN_A1          27
#define PIN_A2          28

// ===== Debug pins =====
#define PIN_SWCLK       24
#define PIN_SWDIO       25

// ===== Default interfaces =====
#define SERIAL_PORT_MONITOR   Serial
#define SERIAL_PORT_HARDWARE  Serial1 
