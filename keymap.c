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

#include QMK_KEYBOARD_H
#include "keymap.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[U_BASE] = LAYOUT_preonic_grid(
  MIRYOKU_BASE_COLEMAKDH
),

[U_NAV] = LAYOUT_preonic_grid(
  MIRYOKU_NAV
),

[U_MOUSE] = LAYOUT_preonic_grid(
  MIRYOKU_MOUSE
),

[U_MEDIA] = LAYOUT_preonic_grid(
  MIRYOKU_MEDIA
),

[U_NUM] = LAYOUT_preonic_grid(
  MIRYOKU_NUM
),

[U_SYM] = LAYOUT_preonic_grid(
  MIRYOKU_SYM
),

[U_FUN] = LAYOUT_preonic_grid(
  MIRYOKU_FUN
)

};