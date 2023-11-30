/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include "quantum.h"

// Define your macros here
enum custom_keycodes {
  MACRO1 = SAFE_RANGE,
  MACRO2,
  MACRO3,
  MACRO4,
  MACRO5,
  MACRO6,
  MACRO7,
  MACRO8,
  MACRO9,
  MACRO10,
  MACRO11,
  MACRO12,
  MACRO13,
  MACRO14,
  MACRO15,
  MACRO16
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MACRO1:
      // Macro 1: (Empty)
      break;
    case MACRO2:
      // Macro 2: {KC_LSFT, KC_TAB}
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_TAB) SS_UP(X_LSFT));
      }
      break;
    case MACRO3:
      // Macro 3: {+KC_LGUI}[{-KC_LGUI}
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LGUI) "[" SS_UP(X_LGUI));
      }
      break;
    case MACRO4:
      // Macro 4: {+KC_LGUI}]{-KC_LGUI}
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LGUI) "]" SS_UP(X_LGUI));
      }
      break;
    case MACRO5:
      // Macro 5: (Empty)
      break;
    case MACRO6:
      // Macro 6: (Empty)
      break;
    case MACRO7:
      // Macro 7: {+KC_LCTL}1{-KC_LCTL}
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) "1" SS_UP(X_LCTL));
      }
      break;
    case MACRO8:
      // Macro 8: {+KC_LCTL}2{-KC_LCTL}
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) "2" SS_UP(X_LCTL));
      }
      break;
    case MACRO9:
      // Macro 9: {+KC_LCTL}3{-KC_LCTL}
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) "3" SS_UP(X_LCTL));
      }
      break;
    case MACRO10:
      // Macro 10: {+KC_LCTL}4{-KC_LCTL}
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) "4" SS_UP(X_LCTL));
      }
      break;
    case MACRO11:
      // Macro 11: {+KC_LCTL}5{-KC_LCTL}
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LCTL) "5" SS_UP(X_LCTL));
      }
      break;
    case MACRO12:
      // Macro 12: {+KC_LALT}3{-KC_LALT}
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LALT) "3" SS_UP(X_LALT));
      }
      break;
    case MACRO13:
      // Macro 13: (Empty)
      break;
    case MACRO14:
      // Macro 14: (Empty)
      break;
    case MACRO15:
      // Macro 15: (Empty)
      break;
    case MACRO16:
      // Macro 16: (Empty)
      break;
  }
  return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_GESC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RALT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_ENT,     KC_BSPC,   LT(2,KC_SPC), LSA(KC_NO)
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    MACRO1,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, MACRO3,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LALT, MACRO6, MACRO7, MACRO8, MACRO9, MACRO10,                  KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, TO(3), MACRO2,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, MO(3), KC_NO, KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_BTN1,             KC_MPLY, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, MO(1),  KC_ENT,     KC_BSPC,   KC_SPC, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       MACRO5, S(KC_1),   S(KC_2), S(KC_3),  S(KC_4), S(KC_5),                      S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,                      S(KC_MINS), S(KC_EQL), S(KC_LBRC), S(KC_RBRC), S(KC_BSLS), S(KC_GRV),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   KC_TRNS,  KC_ENT,     KC_BSPC, KC_SPC, MACRO(6)
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET, QK_BOOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
