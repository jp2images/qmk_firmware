/* Copyright 2022 @ Keychron(https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 20

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* RGB Matrix Driver Configuration */
#define DRIVER_COUNT 2
#define DRIVER_ADDR_1 0b1110111
#define DRIVER_ADDR_2 0b1110100

#define CKLED2001_CURRENT_TUNE \
    { 0xA4, 0xA4, 0x52, 0xA4, 0xA4, 0x52, 0xA4, 0xA4, 0x52, 0xA4, 0xA4, 0x52 }

/* DIP switch */
#define DIP_SWITCH_MATRIX_GRID  { {5, 4} }

/* Disable DIP switch in matrix data */
#define MATRIX_MASKED

/* turn off effects when suspended */
#define RGB_DISABLE_WHEN_USB_SUSPENDED

/* EEPROM Driver Configuration */
#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)

// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
// #define ENABLE_RGB_MATRIX_ALPHAS_MODS
// #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT

// #define ENABLE_RGB_MATRIX_BAND_SAT
// #define ENABLE_RGB_MATRIX_BAND_VAL
// #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT

#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define RGB_MATRIX_KEYPRESSES

#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effect-typing-heatmap
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 2500
#define RGB_MATRIX_TYPING_HEATMAP_SPREAD 40
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE


// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS

//JP Additional customizations https://qmk.github.io/qmk_mkdocs/master/en/feature_auto_shift/
#define AUTO_SHIFT_REPEAT
#define AUTO_SHIFT_TIMEOUT 180 //Starting with 200. 150 was the value from the help docs.
// #define NO_AUTO_SHIFT_SPECIAL


