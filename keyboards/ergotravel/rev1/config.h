/*
Copyright 2018 Pierre Constantineau <jpconstantineau@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#define KEYBOARD_ergotravel_rev1 true
/* USB Device descriptor parameter */
#define VENDOR_ID       0x4A50 //JP
#define PRODUCT_ID      0x4554 //ET
#define DEVICE_VER      0x0100
#define MANUFACTURER    JPConstantineau.com
#define PRODUCT         ErgoTravel Keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

#define BACKLIGHT_PIN B5
#define BACKLIGHT_LEVELS 5

/* ws2812 RGB LED */
#define RGB_DI_PIN D3

#define RGBLED_NUM 12    // Number of LEDs

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
