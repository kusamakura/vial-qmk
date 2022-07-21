#include QMK_KEYBOARD_H

enum custom_keycodes {
  LCK_SHIFT = USER00,
  LCK_CTRL,
  LCK_ALT,
  LCK_CMD,
  LCK_OFF
};

#define _MA 0
#define _F1 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MA] = LAYOUT_all(
    KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS, KC_EQL,KC_GRV, KC_DEL,
    KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,KC_LBRC,KC_RBRC,KC_BSPC,
    KC_LCTRL,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN,KC_QUOT,         KC_ENT,
    KC_LSFT,  KC_BSLS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,KC_COMM, KC_DOT,KC_SLSH,KC_RSFT, MO(_F1),
    KC_LGUI,KC_LGUI,KC_LALT,                 KC_SPC,                        KC_RALT,KC_RGUI,KC_RCTL),

  [_F1] = LAYOUT_all(
    RESET,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,KC_INS,KC_DEL,
    KC_CAPS,_______,_______,_______,_______,_______,_______,_______,KC_PSCR,KC_SLCK,KC_PAUS,KC_UP,_______,KC_DEL,
    _______,KC_VOLD,KC_VOLU,KC_MUTE,KC_EJCT,_______,KC_PAST,KC_PSLS,KC_HOME,KC_PGUP,KC_LEFT,KC_RIGHT,        _______,
    _______,_______,_______,_______,_______,_______,_______,KC_PPLS,KC_PMNS,KC_END,KC_PGDN,KC_DOWN,_______,_______,
    _______,_______,_______,                _______,                        KC_STOP,_______,_______),
  [2] = LAYOUT_all(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______,                            _______,                            _______, _______, _______  ),

  [3] = LAYOUT_all(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______,                            _______,                            _______, _______, _______  ),
  };

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LCK_OFF:
      if (record->event.pressed) {
        clear_mods();
      }
      break;
    case LCK_SHIFT:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSFT)) {
          unregister_mods(MOD_BIT(KC_LSFT));
        }
        else {
          register_mods(MOD_BIT(KC_LSFT));
        }
      }
      break;
    case LCK_CTRL:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LCTL)) {
          unregister_mods(MOD_BIT(KC_LCTL));
        }
        else {
          register_mods(MOD_BIT(KC_LCTL));
        }
      }
      break;
    case LCK_ALT:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LALT)) {
          unregister_mods(MOD_BIT(KC_LALT));
        }
        else {
          register_mods(MOD_BIT(KC_LALT));
        }
      }
      break;
    case LCK_CMD:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LGUI)) {
          unregister_mods(MOD_BIT(KC_LGUI));
        }
        else {
          register_mods(MOD_BIT(KC_LGUI));
        }
      }
      break;
  }
  return true;
}
