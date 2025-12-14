#include QMK_KEYBOARD_H
#include "vial.h"

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y,
        KC_U, KC_I, KC_O, KC_P, KC_A, KC_S,
        KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,
        KC_L, KC_Z, KC_X, KC_C, KC_V, KC_B
    )
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_0, KC_1) }
};
#endif
