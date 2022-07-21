#include QMK_KEYBOARD_H

enum custom_keycodes {
  LCK_SHIFT = USER00,
  LCK_CTRL,
  LCK_ALT,
  LCK_CMD,
  LCK_OFF
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_space(
    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,   KC_O,  KC_P,
    KC_A,  KC_S,  KC_D,  KC_F,   KC_G,   KC_H,  KC_J,   KC_K,  KC_L, KC_ENT,
    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMM, KC_DOT,
    KC_LCTL, KC_LALT, KC_LGUI, KC_BSPC, KC_SPACE, KC_RALT, KC_RGUI, KC_RCTL
  ),

  [1] = LAYOUT_split_space(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [2] = LAYOUT_split_space(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [3] = LAYOUT_split_space(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
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
