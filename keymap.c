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
#include "muse.h"

enum preonic_layers {
  _COLEMAK,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  COLEMAK  = SAFE_RANGE,
  LOWER,
  RAISE,
  BACKLIT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* Colemak
 * ,-------------------------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |     5     |     6     |   7  |   8  |   9  |   0  |PrtScr    |
 * |------+------+------+------+------+-----------+-----------+------+------+------+------+----------|
 * | Tab  |   Q  |   W  |   F  |   P  |     B     |     J     |   L  |   U  |   Y  |   ;  |  \       |
 * |------+------+------+------+------+-----------+-----------+------+------+------+------+----------|
 * | Bksp |   A  |   R  |   S  |   T  |     G     |     M     |   N  |   E  |   I  |   O  |  '       |
 * |------+------+------+------+------+-----------|-----------+------+------+------+------+----------|
 * | Shift|   Z  |   X  |   C  |   D  |     V     |     K     |   H  |   ,  |   .  |   /  |Esc | Shf |
 * |------+------+------+------+------+-----------+-----------+------+------+------+------+----------|
 * |      |      |      | LAlt | LCtl | Spc/Raise | Ent/Lower | LGui | RAlt |      |      |          | 
 * `-------------------------------------------------------------------------------------------------'
 */
[_COLEMAK] = LAYOUT_preonic_grid(
  KC_GRV,         KC_1,    KC_2,    KC_3,       KC_4,    KC_5,                KC_6,               KC_7,     KC_8,       KC_9,    KC_0,    KC_PSCR,
  KC_TAB,         KC_Q,    KC_W,    KC_F,       KC_P,    KC_B,                KC_J,               KC_L,     KC_U,       KC_Y,    KC_SCLN, KC_BSLS,
  KC_BSPC,        KC_A,    KC_R,    KC_S,       KC_T,    KC_G,                KC_M,               KC_N,     KC_E,       KC_I,    KC_O,    KC_QUOT,
  OSM(MOD_LSFT),  KC_Z,    KC_X,    KC_C,       KC_D,    KC_V,                KC_K,               KC_H,     KC_COMM,    KC_DOT,  KC_SLSH, RSFT_T(KC_ESC),
  KC_NO,          KC_NO,   KC_NO,   KC_LALT,    KC_LCTL, LT(RAISE,KC_BSPC),   LT(LOWER,KC_ENT),   KC_LGUI,  KC_RALT,    KC_NO,   KC_NO,   KC_NO
),


/* Lower
 * ,-------------------------------------------------------------------------------------------------.
 * |      |      |      |      |      |           |           |      |      |      |      |          |
 * |------+------+------+------+------+-----------+-----------+------+------+------+------+----------|
 * |   `  |   1  |   2  |   3  |   4  |     5     |     6     |   7  |   8  |   9  |   0  |  PgUp    |
 * |------+------+------+------+------+-----------+-----------+------+------+------+------+----------|
 * |      |      |      |      |   -  |     +     |           | Left |  Dwn |  Up  | Rgh  |  PgDn    |
 * |------+------+------+------+------+-----------|-----------+------+------+------+------+----------|
 * |      |      |      |      |      |     =     |           |      |      |      |      |          |
 * |------+------+------+------+------+-----------+-----------+------+------+------+------+----------|
 * |      |      |      |      |      |           |           |      |      |      |      |          | 
 * `-------------------------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PGUP,
  _______, _______, _______, _______, KC_MINS, S(KC_EQL), _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGDN,
  _______, _______, _______, _______, _______, KC_EQL,    _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______
),

/* Raise
 * ,-------------------------------------------------------------------------------------------------.
 * |      |      |      |      |      |           |           |      |      |      |      |          |
 * |------+------+------+------+------+-----------+-----------+------+------+------+------+----------|
 * |      |  F1  |  F2  |  F3  |  F4  |   F5      |    F6     |  F7  |  F8  |  F9  | F10  |  F11     |
 * |------+------+------+------+------+-----------+-----------+------+------+------+------+----------|
 * |      |      |      |      |      |           |           |      |      |  (   |  )   |  F12     | 
 * |------+------+------+------+------+-----------|-----------+------+------+------+------+----------|
 * |      |      |      |      |      |           |           |      |      |  [   |  ]   |          | 
 * |------+------+------+------+------+-----------+-----------+------+------+------+------+----------|
 * |      |      |      |      |      |           |           |      |      |      |      |          | 
 * `-------------------------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid(
  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
  _______,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F10,
  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_LPRN,  KC_RPRN,  KC_F11,
  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_LBRC,  KC_RBRC,  _______,
  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset| Debug|      |      |      |      |TermOf|TermOn|      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |Aud cy|Aud on|AudOff|AGnorm|AGswap|      |Colemk|      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|MusOff|MidiOn|MidOff|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Brite |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, RESET,   DEBUG,   _______, _______, _______, _______, TERM_ON, TERM_OFF,_______, _______, _______,
  _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, _______, COLEMAK, _______, _______, _______,
  _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______, _______, _______, _______,
  BACKLIT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case COLEMAK:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_COLEMAK);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case BACKLIT:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
            #ifdef RGBLIGHT_ENABLE
              rgblight_step();
            #endif
            #ifdef __AVR__
            writePinLow(E6);
            #endif
          } else {
            unregister_code(KC_RSFT);
            #ifdef __AVR__
            writePinHigh(E6);
            #endif
          }
          return false;
          break;
      }
    return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      register_code(KC_PGDN);
      unregister_code(KC_PGDN);
    } else {
      register_code(KC_PGUP);
      unregister_code(KC_PGUP);
    }
  }
    return true;
}

bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
    return true;
}


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
