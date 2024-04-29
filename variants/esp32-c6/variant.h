
#define I2C_SDA 23
#define I2C_SCL 22

#define BUTTON_PIN 9 // The middle button GPIO on the T-Beam

#define LED_PIN -1//39 // LED_BUILTIN - neopixel workaround?
// #define PIN_NEOPIXEL (8)     // already defined in pins_arduino.h

#define USE_RF95 // RFM95/SX127x

#define LORA_RESET 18
#define LORA_DIO0 19
#define LORA_DIO1 20
#define LORA_DIO2 RADIOLIB_NC
#define LORA_DIO3 RADIOLIB_NC

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

#define LORA_SCK 1
#define LORA_MISO 4
#define LORA_MOSI 5
#define LORA_CS 3

#define HAS_GPS 0

