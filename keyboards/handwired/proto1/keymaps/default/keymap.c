/* My keymap. */

#include "keymap_steno.h"
#include QMK_KEYBOARD_H

enum layers {
	STENO,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [STENO] =  LAYOUT(
/*TO(NKRO)*/_______,   STN_S1, STN_TL, STN_PL, STN_HL, STN_ST1,   STN_ST3, STN_FR, STN_PR, STN_LR, STN_TR, STN_DR,
/*MO(SYMBOL)*/_______, STN_S2, STN_KL, STN_WL, STN_RL, STN_ST2,   STN_ST4, STN_RR, STN_BR, STN_GR, STN_SR, STN_ZR,
                       STN_N1, STN_A, STN_O,   STN_E, STN_U, STN_N2),
    /* This layout allowed me to figure out the keys.
     * {
        { KC_Q, KC_W, KC_E, KC_R, KC_T, KC_1, },
        { KC_Y, KC_U, KC_I, KC_O, KC_P, KC_2, },
        { KC_A, KC_S, KC_D, KC_F, KC_G, KC_3, },
        { KC_H, KC_J, KC_K, KC_L, KC_Z, KC_4, },
        { KC_X, KC_C, KC_V, KC_B, KC_N, KC_5, }, 
    },
    */
};

void matrix_init_user(void) {
	steno_set_mode(STENO_MODE_GEMINI);
}
