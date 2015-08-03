#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Classic
     http://www.keyboard-layout-editor.com/#/layouts/46aa7b0762cb7a535eaaf1e49644398fsdfsdfZZffsdfZffhjd
  */
  /* 0: main layer */
  KEYMAP( ESC, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   BSPC,\
          LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,\
          LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,ENT, \
          TAB, BSLS,LBRC,RBRC,FN0,   SPC,    FN1, LEFT,DOWN,UP,  RGHT),
  /*1: fn lower layer */
  KEYMAP( PWR, NO,  NO,  NO,  NO,  NO,  NLCK,P7,  P8,  P9,  PMNS,MINS,\
          CAPS,NO,  NO,  NO,  NO,  NO,  NO,  P4,  P5,  P6,  PPLS,EQL, \
          TRNS,NO,  NO,  NO,  NO,  NO,  P0,  P1,  P2,  P3,  PAST,RGUI,\
          TRNS,MUTE,VOLD,VOLU,TRNS,  DEL,    TRNS,HOME,PGDN,PGUP,END ),

  /* 2: fn raise layer */
  KEYMAP( F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, \
          TAB ,1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   NO,  \
          TRNS,6,   7,   8,   9,   0,   NO,  NO,  NO,  NO,  NO,  RSFT,\
          LALT,FN12,FN10,FN11,TRNS,  BSPC,   TRNS,HOME,PGDN,PGUP,END ),

};
const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_MOMENTARY(2),

  [10] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
  [11] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
  [12] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
};