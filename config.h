/* Copyright 2015-2021 Jack Humbert
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

// #include "custom_config.h"

// Enable more layers
#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200



// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

// #define MK_KINETIC_SPEED
// #define MOUSEKEY_DELAY 5
// #define MOUSEKEY_INTERVAL 10
// #define MOUSEKEY_MOVE_DELTA 16
// #define MOUSEKEY_INITIAL_SPEED 100
// #define MOUSEKEY_BASE_SPEED 5000
// #define MOUSEKEY_DECELERATED_SPEED 400
// #define MOUSEKEY_ACCELERATED_SPEED 3000
// #define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 16
// #define MOUSEKEY_WHEEL_BASE_MOVEMENTS 32
// #define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 48
// #define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8