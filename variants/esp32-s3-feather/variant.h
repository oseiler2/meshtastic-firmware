// #define BUTTON_NEED_PULLUP // if set we need to turn on the internal CPU pullup during sleep

#define I2C_SDA 42
#define I2C_SCL 41

#define BUTTON_PIN 0 // The middle button GPIO on the T-Beam
// #define BUTTON_PIN_ALT 13 // Alternate GPIO for an external button if needed. Does anyone use this? It is not documented
//  anywhere.
#define LED_PIN 13 // Newer tbeams (1.1) have an extra led on GPIO4

// TTGO uses a common pinout for their SX1262 vs RF95 modules - both can be enabled and we will probe at runtime for RF95 and if
// not found then probe for SX1262
#define USE_RF95 // RFM95/SX127x

#define LORA_RESET 9
#define LORA_DIO0 10
#define LORA_DIO1 11
#define LORA_DIO2 RADIOLIB_NC
#define LORA_DIO3 RADIOLIB_NC

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

#define LORA_SCK 36
#define LORA_MISO 37
#define LORA_MOSI 35
#define LORA_CS 2

#define HAS_GPS 0

// #define USE_SSD1306

#define SERIAL_TX 1
#define SERIAL_RX 3

