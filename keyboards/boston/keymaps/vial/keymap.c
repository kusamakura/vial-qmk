/* Copyright 2020 Pylon
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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

    /* Due to how the matrix is setup - the right split backspace key is, for firmware purposes the key to the right of up arrow, which on the actual keyboard is a blocker*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [0] = LAYOUT_all(
	KC_MUTE, KC_F13 , KC_F14 , KC_F15 , KC_F16 , KC_F17 , KC_F18 , KC_F19 , KC_F20 , KC_F21 , KC_F22 , KC_F23 , KC_F24 ,                  KC_MPRV, KC_MPLY,  KC_MNXT ,          KC_INS , KC_HOME, KC_PGUP,
    KC_ESC , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,                  KC_PSCR, KC_SLCK,  KC_PAUSE,          KC_DEL , KC_END , KC_PGDN,
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL ,  KC_BSPC, KC_BSPC,        KC_CALC,           KC_NLCK , KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC,  KC_BSLS,                 RGB_TOG,           KC_P7   , KC_P8  , KC_P9  , KC_PEQL,
    KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_ENT ,  KC_ENT ,                 KC_MSEL,           KC_P4   , KC_P5  , KC_P6  , KC_PPLS,
    KC_LSFT, KC_BSLS, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,                           KC_UP  ,           KC_P1   , KC_P2  , KC_P3  , KC_PENT,
    KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC , KC_SPC , KC_SPC ,                   KC_RALT, KC_APP , KC_RCTL,                          KC_LEFT,  KC_DOWN, KC_RGHT,  KC_P0   , KC_P0  , KC_PDOT
    ),

   [1] = LAYOUT_all(

    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______, _______,        _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                           _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,         _______ ,_______ ,_______ ,                  _______ ,_______ ,_______ ,                          _______,  _______, _______,  _______ , _______, _______
    ),

   [2] = LAYOUT_all(

    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______, _______,        _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                           _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,         _______ ,_______ ,_______ ,                  _______ ,_______ ,_______ ,                          _______,  _______, _______,  _______ , _______, _______
    ),

   [3] = LAYOUT_all(

    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______, _______,        _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                           _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,         _______ ,_______ ,_______ ,                  _______ ,_______ ,_______ ,                          _______,  _______, _______,  _______ , _______, _______
    ),

   [4] = LAYOUT_all(

    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______, _______,        _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                           _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,         _______ ,_______ ,_______ ,                  _______ ,_______ ,_______ ,                          _______,  _______, _______,  _______ , _______, _______
    ),

   [5] = LAYOUT_all(

    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______, _______,        _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                           _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,         _______ ,_______ ,_______ ,                  _______ ,_______ ,_______ ,                          _______,  _______, _______,  _______ , _______, _______
    ),

   [6] = LAYOUT_all(

    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                  _______, _______,  _______ ,          _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______, _______,        _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,  _______,                 _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                           _______,           _______ , _______, _______, _______,
    _______,_______,_______ ,         _______ ,_______ ,_______ ,                  _______ ,_______ ,_______ ,                          _______,  _______, _______,  _______ , _______, _______
    )

};

/*Default layer is white.*/

/*Remember to also change the color in keyboard_post_init_kb in boston.c to make the startup color match the layer 0 color */

const rgblight_segment_t PROGMEM layer_0[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, 0, 0, 128}  /*White*/
);

const rgblight_segment_t PROGMEM layer_1[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, 21, 255, 128} /*Orange*/
);

const rgblight_segment_t PROGMEM layer_2[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, 43, 255, 128} /*Yellow*/
);

const rgblight_segment_t PROGMEM layer_3[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, 75, 255, 128} /*Green*/
);

const rgblight_segment_t PROGMEM layer_4[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, 135, 255, 128} /*Teal*/
);

const rgblight_segment_t PROGMEM layer_5[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, 160, 200, 128} /*Blue*/

);

const rgblight_segment_t PROGMEM layer_6[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, 190, 255, 128} /*Magenta*/
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    layer_0,
    layer_1,
    layer_2,
    layer_3,
    layer_4,
    layer_5,
    layer_6
);

void keyboard_post_init_user(void) {
    /* Enable the LED layers */
    rgblight_layers = my_rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    /* Both layers will light up if both kb layers are active */
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    rgblight_set_layer_state(5, layer_state_cmp(state, 5));
    rgblight_set_layer_state(6, layer_state_cmp(state, 6));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, true);
    return true;
} 

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [4] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [5] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [6] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
