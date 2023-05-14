
#pragma once


#if NOT_TARGET(ARDUINO_ARCH_ESP32)
  #error "Oops! Select an ESP32 board in 'Tools > Board.'"
#endif

#ifndef DEFAULT_MACHINE_NAME
  #define DEFAULT_MACHINE_NAME  "Spark E1"
#endif

//
// Limit Switches
//
#define X_STOP_PIN                            34
#define Y_STOP_PIN                            35
#define Z_STOP_PIN                            15

//
// Steppers
//
#define X_STEP_PIN                            27
#define X_DIR_PIN                             26
#define X_ENABLE_PIN                          25

#define Y_STEP_PIN                            33
#define Y_DIR_PIN                             32
#define Y_ENABLE_PIN                X_ENABLE_PIN

#define Z_STEP_PIN                            14
#define Z_DIR_PIN                             12
#define Z_ENABLE_PIN                X_ENABLE_PIN

#define E0_STEP_PIN                           16
#define E0_DIR_PIN                            17
#define E0_ENABLE_PIN               X_ENABLE_PIN

//
// Temperature Sensors
//
#define TEMP_0_PIN                            36  // Analog Input
#define TEMP_BED_PIN                          39  // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN                           4
#define FAN_PIN                               13
#define HEATER_BED_PIN                         2

//
// MicroSD card
//
#define SD_MOSI_PIN                           23
#define SD_MISO_PIN                           19
#define SD_SCK_PIN                            18
#define SDSS                                   5
