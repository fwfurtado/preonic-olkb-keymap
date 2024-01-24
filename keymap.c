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

enum preonic_layers {
  U_BASE,
  U_NAV,
  U_MOUSE,
  U_MEDIA,
  U_NUM,
  U_SYM,
  U_FUN,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [U_BASE] = LAYOUT_preonic_grid(
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                      KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,
    KC_NO,          KC_Q,                   KC_W,                   KC_F,                   KC_P,                   KC_B,                       KC_J,                   KC_L,                   KC_U,                   KC_Y,                   KC_QUOT,                KC_NO,
    KC_NO,          LGUI_T(KC_A),           LALT_T(KC_R),           LCTL_T(KC_S),           LSFT_T(KC_T),           KC_G,                       KC_M,                   LSFT_T(KC_N),           LCTL_T(KC_E),           LALT_T(KC_I),           LGUI_T(KC_O),           KC_NO,
    KC_NO,          KC_Z,                   ALGR_T(KC_X),           KC_C,                   KC_D,                   KC_V,                       KC_K,                   KC_H,                   KC_COMM,                ALGR_T(KC_DOT),         KC_SLSH,                KC_NO,
    KC_NO,          U_NP,                   U_NP,                   LT(U_MEDIA,KC_ESC),     LT(U_NAV,KC_SPC),       LT(U_MOUSE,KC_TAB),         LT(U_SYM,KC_ENT),       LT(U_NUM,KC_BSPC),      LT(U_FUN,KC_DEL),       U_NP,                   U_NP,                   KC_NO
  ),

  [U_NAV] = LAYOUT_preonic_grid(
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                      KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,
    KC_NO,          QK_BOOT,                KC_NO,                  KC_NO,                  KC_NO,                  U_NA,                       U_RDO,                  U_PST,                  U_CPY,                  U_CUT,                  U_UND,                  KC_NO,
    KC_NO,          KC_LGUI,                KC_LALT,                KC_LCTL,                KC_LSFT,                U_NA,                       CW_TOGG,                KC_LEFT,                KC_DOWN,                KC_UP,                  KC_RGHT,                KC_NO,
    KC_NO,          U_NA,                   KC_ALGR,                KC_NO,                  KC_NO,                  U_NA,                       KC_INS,                 KC_HOME,                KC_PGDN,                KC_PGUP,                KC_END,                 KC_NO,
    KC_NO,          U_NP,                   U_NP,                   U_NA,                   U_NA,                   U_NA,                       KC_ENT,                 KC_BSPC,                KC_DEL,                 U_NP,                   U_NP,                   KC_NO
  ),

  [U_MOUSE] = LAYOUT_preonic_grid(
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                      KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,
    KC_NO,          QK_BOOT,                KC_NO,                  KC_NO,                  KC_NO,                  U_NA,                       U_RDO,                  U_PST,                  U_CPY,                  U_CUT,                  U_UND,                  KC_NO,
    KC_NO,          KC_LGUI,                KC_LALT,                KC_LCTL,                KC_LSFT,                U_NA,                       U_NU,                   KC_MS_L,                KC_MS_D,                KC_MS_U,                KC_MS_R,                KC_NO,
    KC_NO,          U_NA,                   KC_ALGR,                KC_NO,                  KC_NO,                  U_NA,                       U_NU,                   KC_WH_L,                KC_WH_D,                KC_WH_U,                KC_WH_R,                KC_NO,
    KC_NO,          U_NP,                   U_NP,                   U_NA,                   U_NA,                   U_NA,                       KC_BTN2,                KC_BTN1,                KC_BTN3,                U_NP,                   U_NP,                   KC_NO
  ),

  [U_MEDIA] = LAYOUT_preonic_grid(
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                      KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,
    KC_NO,          QK_BOOT,                KC_NO,                  KC_NO,                  KC_NO,                  U_NA,                       RGB_TOG,                RGB_MOD,                RGB_HUI,                RGB_SAI,                RGB_VAI,                KC_NO,
    KC_NO,          KC_LGUI,                KC_LALT,                KC_LCTL,                KC_LSFT,                U_NA,                       U_NU,                   KC_MPRV,                KC_VOLD,                KC_VOLU,                KC_MNXT,                KC_NO,
    KC_NO,          U_NA,                   KC_ALGR,                KC_NO,                  KC_NO,                  U_NA,                       OU_AUTO,                U_NU,                   U_NU,                   U_NU,                   U_NU,                   KC_NO,
    KC_NO,          U_NP,                   U_NP,                   U_NA,                   U_NA,                   U_NA,                       KC_MSTP,                KC_MPLY,                KC_MUTE,                U_NP,                   U_NP,                   KC_NO
  ),

  [U_NUM] = LAYOUT_preonic_grid(
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                      KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,
    KC_NO,          KC_LBRC,                KC_7,                   KC_8,                   KC_9,                   KC_RBRC,                    U_NA,                   KC_NO,                  KC_NO,                  KC_NO,                  QK_BOOT,                KC_NO,
    KC_NO,          KC_SCLN,                KC_4,                   KC_5,                   KC_6,                   KC_EQL,                     U_NA,                   KC_LSFT,                KC_LCTL,                KC_LALT,                KC_LGUI,                KC_NO,
    KC_NO,          KC_GRV,                 KC_1,                   KC_2,                   KC_3,                   KC_BSLS,                    U_NA,                   KC_NO,                  KC_NO,                  KC_ALGR,                U_NA,                   KC_NO,
    KC_NO,          U_NP,                   U_NP,                   KC_DOT,                 KC_0,                   KC_MINS,                    U_NA,                   U_NA,                   U_NA,                   U_NP,                   U_NP,                   KC_NO
  ),

  [U_SYM] = LAYOUT_preonic_grid(
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                      KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,
    KC_NO,          KC_LCBR,                KC_AMPR,                KC_ASTR,                KC_LPRN,                KC_RCBR,                    U_NA,                   KC_NO,                  KC_NO,                  KC_NO,                  QK_BOOT,                KC_NO,
    KC_NO,          KC_COLN,                KC_DLR,                 KC_PERC,                KC_CIRC,                KC_PLUS,                    U_NA,                   KC_LSFT,                KC_LCTL,                KC_LALT,                KC_LGUI,                KC_NO,
    KC_NO,          KC_TILD,                KC_EXLM,                KC_AT,                  KC_HASH,                KC_PIPE,                    U_NA,                   KC_NO,                  KC_NO,                  KC_ALGR,                U_NA,                   KC_NO,
    KC_NO,          U_NP,                   U_NP,                   KC_LPRN,                KC_RPRN,                KC_UNDS,                    U_NA,                   U_NA,                   U_NA,                   U_NP,                   U_NP,                   KC_NO
  ),

  [U_FUN] = LAYOUT_preonic_grid(
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                      KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,
    KC_NO,          KC_F12,                 KC_F7,                  KC_F8,                  KC_F9,                  KC_PSCR,                    U_NA,                   KC_NO,                  KC_NO,                  KC_NO,                  QK_BOOT,                KC_NO,
    KC_NO,          KC_F11,                 KC_F4,                  KC_F5,                  KC_F6,                  KC_SCRL,                    U_NA,                   KC_LSFT,                KC_LCTL,                KC_LALT,                KC_LGUI,                KC_NO,
    KC_NO,          KC_F10,                 KC_F1,                  KC_F2,                  KC_F3,                  KC_PAUS,                    U_NA,                   KC_NO,                  KC_NO,                  KC_ALGR,                U_NA,                   KC_NO,
    KC_NO,          U_NP,                   U_NP,                   KC_APP,                 KC_SPC,                 KC_TAB,                     U_NA,                   U_NA,                   U_NA,                   U_NP,                   U_NP,                   KC_NO
  )

};