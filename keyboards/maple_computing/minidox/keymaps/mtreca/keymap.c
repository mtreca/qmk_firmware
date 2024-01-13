#include QMK_KEYBOARD_H

enum layer_names {
    _ALPHA,
    _LOWER,
    _RAISE,
    _MOUSE
};


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

#define LOWTAB LT(_LOWER, KC_TAB) 
#define RAIENT LT(_RAISE, KC_ENT)
#define MSEESC LT(_MOUSE, KC_ESC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_ALPHA] = LAYOUT_split_3x5_3(
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  ALT_A,   CTL_S,   GUI_D,   SFT_F,   KC_G,         KC_H,    SFT_J,   GUI_K,   CTL_L,   ALT_C,
  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                    MSEESC,  LOWTAB,  KC_SPC,       KC_BSPC, RAIENT,  KC_DEL
),

[_RAISE] = LAYOUT_split_3x5_3(
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         XXX,     XXX,     XXX,     XXX,     XXX,
  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,         XXX,     KC_LSFT, KC_LGUI, KC_LCTL, KC_LALT,
  KC_GRV,  KC_BSLS, KC_EQL,  KC_LBRC, KC_RBRC,      XXX,     XXX,     XXX,     XXX,     XXX,
                    XXX,     KC_QUOT, KC_MINS,      XXX,     ___,     XXX
),

[_LOWER] = LAYOUT_split_3x5_3(
  XXX,     XXX,     XXX,     XXX,     XXX,          XXX,     KC_HOME, KC_UP,   KC_END,  KC_PGUP,
  KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, XXX,          XXX,     KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,
  XXX,     XXX,     XXX,     XXX,     XXX,          XXX,     XXX,     XXX,     XXX,     XXX,
                    XXX,     ___,     XXX,          XXX,     XXX,     XXX
),

[_MOUSE] = LAYOUT_split_3x5_3(
  XXX,     XXX,     XXX,     XXX,     XXX,          XXX,     KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U,
  KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, XXX,          XXX,     KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,
  XXX,     XXX,     XXX,     XXX,     XXX,          XXX,     XXX,     XXX,     XXX,     XXX,
                    XXX,     ___,     XXX,          XXX,     XXX,     XXX
)
};

