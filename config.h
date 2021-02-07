/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0x3060
#define DEVICE_VER      0x0001
#define MANUFACTURER    nacly
#define DESCRIPTION     pcb enabled dactyl manuform mini

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


#define DIODE_DIRECTION COL2ROW

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

//Define EE_HANDS for qmk configurator use.

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6
#define SPLIT_HAND_PIN D1
// wiring of each half
#define MATRIX_ROW_PINS { C6, B3, D4, B1, D0, F7 }
#define MATRIX_COL_PINS { B4, B5, E6, B6, D7, B2 }

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN F4
#define RGBLED_NUM 12
