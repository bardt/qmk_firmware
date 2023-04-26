/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

// clang-format off
enum layers{
  BASE,ß
  LOWER,
  RAISE,
  ALTER,
  NAV
};

#define ___X___ XXXXXXX

const uint16_t MT_A = LSFT_T(KC_A);
const uint16_t MT_S = LCTL_T(KC_S);
const uint16_t MT_D = LALT_T(KC_D);
const uint16_t MT_F = LGUI_T(KC_F);

const uint16_t MT_SCLN = RSFT_T(KC_SCLN);
const uint16_t MT_L = RCTL_T(KC_L);
const uint16_t MT_K = RALT_T(KC_K);
const uint16_t MT_J = RGUI_T(KC_J);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_ansi_84(
     ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,
     QK_GESC,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,            ___X___,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_PMNS,  ___X___,  ___X___,           ___X___,
     TT(NAV),  MT_A,     MT_S,     MT_D,     MT_F,     KC_G,     KC_H,     MT_J,     MT_K,     MT_L,     MT_SCLN,  KC_QUOT,            KC_ENT,             ___X___,
     ___X___,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            ___X___,  ___X___,  ___X___,
     ___X___,  ___X___,  MO(LOWER),                              KC_SPC,                                 MO(RAISE),___X___,  ___X___,  ___X___,  ___X___,  ___X___),

[LOWER] = LAYOUT_ansi_84(
     ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,
     ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,            ___X___,
     ___X___,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  ___X___,  ___X___,  ___X___,            ___X___,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  ___X___,  ___X___,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_GRAVE,           ___X___,            ___X___,
     ___X___,            ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  KC_BSLS,            ___X___,  ___X___,  ___X___,
     ___X___,  ___X___,  ___X___,                                ___X___,                                MO(ALTER),___X___,  ___X___,  ___X___,  ___X___,  ___X___),

[RAISE] = LAYOUT_ansi_84(
     ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,
     ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,            ___X___,
     ___X___,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     ___X___,  ___X___,  ___X___,            ___X___,
     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    ___X___,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  ___X___,            ___X___,            ___X___,
     KC_F7,              KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   ___X___,  ___X___,  KC_TRNS,  KC_TRNS,  ___X___,            ___X___,  ___X___,  ___X___,
     ___X___,  ___X___,  MO(ALTER),                              ___X___,                                ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___),

[ALTER] = LAYOUT_ansi_84(
     ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,
     QK_BOOT,  KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LNPD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  ___X___,            ___X___,
     RGB_TOG,  BT_HST1,  BT_HST2,  BT_HST3,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,            ___X___,
     KC_TRNS,  ___X___,  ___X___,  ___X___,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  ___X___,  ___X___,  ___X___,            KC_TRNS,            ___X___,
     KC_TRNS,            ___X___,  ___X___,  ___X___,  ___X___,  BAT_LVL,  NK_TOGG,  ___X___,  ___X___,  ___X___,  ___X___,            KC_TRNS,  ___X___,  ___X___,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                ___X___,                                ___X___,  KC_TRNS,  KC_TRNS,  KC_TRNS,  ___X___,  ___X___),

[NAV] = LAYOUT_ansi_84(
     ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,
     ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,            ___X___,
     ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  KC_UP,    ___X___,  ___X___,  ___X___,  ___X___,  ___X___,            ___X___,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  ___X___,  KC_BSPC,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_TRNS,  ___X___,            KC_TRNS,            ___X___,
     KC_TRNS,            ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,  ___X___,            KC_TRNS,  ___X___,  ___X___,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                ___X___,                                ___X___,  KC_TRNS,  KC_TRNS,  KC_TRNS,  ___X___,  ___X___)

};

