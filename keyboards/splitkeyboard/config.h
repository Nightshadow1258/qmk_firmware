// Copyright 2022 Nightshadow1258 (@Nightshadow1258)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* USB Device descriptor parameter */

/* key matrix size */
// Rows are doubled-up: 5 x 2
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { B0, B5, B7, B9, B8 }
#define MATRIX_COL_PINS { B10, B11, B12, B13, B14, B3, B6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE   5
#define TAPPING_TERM 500

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* serial.c configuration for split keyboard */
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN A2     // USART TX pin
#define SERIAL_USART_RX_PIN A3     // USART RX pin
//#define USART1_REMAP             // Remap USART TX and RX pins on STM32F103 MCUs, see table below.
//#define SERIAL_USART_PIN_SWAP    // Swap TX and RX pins if keyboard is master halve.
                                   // Check if this feature is necessary with your keyboard design and available on the mcu.
#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
                                   //  0: 460800 baud
                                   //  1: 230400 baud (default)
                                   //  2: 115200 baud
                                   //  3: 57600 baud
                                   //  4: 38400 baud
                                   //  5: 19200 baud
#define SERIAL_USART_DRIVER SD2    // USART driver of TX and RX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_RX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_TIMEOUT 20    // USART driver timeout. default 20

#define SPLIT_LED_STATE_ENABLE
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT { 30, 30 } //This sets how many LEDs are directly connected to each controller. The first number is the left side, and the second number is the right side.

// define if left or right
// Methode 1
// #define SPLIT_HAND_PIN A5 // By default, if it's high, then the controller assumes it is the left hand, and if it's low, it's assumed to be the right side
//Methode 2
//#define MASTER_RIGHT
#define MASTER_LEFT

#define BACKLIGHT_PIN B5
#define BACKLIGHT_LEVELS 5

/* ws2812 RGB LED */
#define RGB_DI_PIN A6

#define RGBLED_NUM 31    // Number of LEDs

//Encoder Pins
#define ENCODERS_PAD_A { A4 }
#define ENCODERS_PAD_B { A5 }

#define ENCODER_RESOLUTION 4
// #define ENCODER_DEFAULT_POS 0x3
// flip direction
// #define ENCODER_DIRECTION_FLIP

/* key led setting */
//#define BACKLIGHT_PIN A8
//#define BACKLIGHT_PWM_DRIVER PWMD1
//#define BACKLIGHT_PWM_CHANNEL 1
//#define BACKLIGHT_LEVELS 6
//#define BACKLIGHT_BREATHING
//#define BREATHING_PERIOD 6

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
