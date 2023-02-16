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

/* Setting up the leader key */
#define LEADER_TIMEOUT 300 // Time in milliseconds to complete the leader key, key combination
#define LEADER_PER_KEY_TIMING // Allow for per key combination timing of the leader key.

/* Disable DIP switch in matrix data */
#define MATRIX_MASKED

/* turn off effects when suspended */
#define RGB_DISABLE_WHEN_USB_SUSPENDED

/* EEPROM Driver Configuration */
#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)

#define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects

/* Full keyboard solid hue cycling through full gradient */
#define ENABLE_RGB_MATRIX_CYCLE_ALL //Need this for the RGB LEDs to light up.

// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE // Pulses keys hit to hue & value then fades value out
// Note that this feature DOES NOT work with Heat Map.

//JP Additional customizations https://qmk.github.io/qmk_mkdocs/master/en/feature_auto_shift/
#define AUTO_SHIFT_REPEAT
#define AUTO_SHIFT_TIMEOUT 250 //Starting with 200. 150 was the value from the help docs.
// #define NO_AUTO_SHIFT_SPECIAL


