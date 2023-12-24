#include QMK_KEYBOARD_H

// Left-hand home row mods
#define ALT_A LALT_T(KC_A)
#define CTL_S LCTL_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define CTL_L LCTL_T(KC_L)
#define ALT_C RALT_T(KC_SCLN)

#define XXX KC_NO
#define ___ KC_TRNS

enum layer_names {
    _QW,
    _RS,
    _LW,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT(
    KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,    KC_P  ,
    ALT_A,   CTL_S,   GUI_D,    SFT_F,   KC_G,                      KC_H,    SFT_J,  GUI_K,   CTL_L,   ALT_C ,
    KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    KC_MINS, KC_QUOT, KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH ,
    KC_GRV,  KC_EQL,  KC_ESC,   KC_TAB,  MO(_LW), KC_SPC,  KC_BSPC, MO(_RS), KC_ENT, KC_DEL,  KC_LBRC, KC_RBRC ),

  [_RS] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      XXX,     XXX,     XXX,     XXX,     XXX,
    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                      XXX,     KC_LSFT, KC_LGUI, KC_LCTL, KC_LALT,
    KC_GRV,  KC_BSLS, KC_EQL,  KC_LBRC, KC_RBRC,  XXX,    XXX,     XXX,     XXX,     XXX,     XXX,     XXX,
    XXX,     XXX,     XXX,     XXX,     XXX,      XXX,    XXX,     ___,     XXX,     XXX,     XXX,     XXX ),

  [_LW] = LAYOUT(
    XXX,     XXX,     XXX,     XXX,     XXX,                       XXX, KC_HOME, KC_UP,   KC_END,  KC_PGUP,
    KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, XXX,                       XXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,
    XXX,     XXX,     XXX,     XXX,     XXX,      XXX,    XXX,     XXX, XXX,     XXX,     XXX,     XXX,
    XXX,     XXX,     XXX,     XXX,     ___,      XXX,    XXX,     XXX, XXX,     XXX,     XXX,     XXX)
};
