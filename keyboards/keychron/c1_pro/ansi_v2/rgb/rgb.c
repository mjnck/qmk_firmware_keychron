/* Copyright 2022 @ Keychron (https://www.keychron.com)
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

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE

// clang-format off
const ckled2001_led PROGMEM g_ckled2001_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to CKLED2001 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, I_1,    G_1,    H_1},
    {0, I_2,    G_2,    H_2},
    {0, I_3,    G_3,    H_3},
    {0, I_4,    G_4,    H_4},
    {0, I_5,    G_5,    H_5},
    {0, I_6,    G_6,    H_6},
    {0, I_7,    G_7,    H_7},
    {0, I_8,    G_8,    H_8},
    {0, I_9,    G_9,    H_9},
    {0, I_10,   G_10,   H_10},
    {0, I_11,   G_11,   H_11},
    {0, I_12,   G_12,   H_12},
    {0, I_13,   G_13,   H_13},
    {0, I_15,   G_15,   H_15},
    {0, I_16,   G_16,   H_16},
    {0, L_5,    J_5,    K_5},

    {0, C_1,    A_1,    B_1},
    {0, C_2,    A_2,    B_2},
    {0, C_3,    A_3,    B_3},
    {0, C_4,    A_4,    B_4},
    {0, C_5,    A_5,    B_5},
    {0, C_6,    A_6,    B_6},
    {0, C_7,    A_7,    B_7},
    {0, C_8,    A_8,    B_8},
    {0, C_9,    A_9,    B_9},
    {0, C_10,   A_10,   B_10},
    {0, C_11,   A_11,   B_11},
    {0, C_12,   A_12,   B_12},
    {0, C_13,   A_13,   B_13},
    {0, C_14,   A_14,   B_14},
    {0, C_15,   A_15,   B_15},
    {0, C_16,   A_16,   B_16},
    {0, L_9,    J_9,    K_9},

    {0, F_1,    D_1,    E_1},
    {0, F_2,    D_2,    E_2},
    {0, F_3,    D_3,    E_3},
    {0, F_4,    D_4,    E_4},
    {0, F_5,    D_5,    E_5},
    {0, F_6,    D_6,    E_6},
    {0, F_7,    D_7,    E_7},
    {0, F_8,    D_8,    E_8},
    {0, F_9,    D_9,    E_9},
    {0, F_10,   D_10,   E_10},
    {0, F_11,   D_11,   E_11},
    {0, F_12,   D_12,   E_12},
    {0, F_13,   D_13,   E_13},
    {0, F_14,   D_14,   E_14},
    {0, F_15,   D_15,   E_15},
    {0, F_16,   D_16,   E_16},
    {0, L_14,   J_14,   K_14},

    {1, C_16,   A_16,   B_16},
    {1, C_15,   A_15,   B_15},
    {1, C_14,   A_14,   B_14},
    {1, C_13,   A_13,   B_13},
    {1, C_12,   A_12,   B_12},
    {1, C_11,   A_11,   B_11},
    {1, C_10,   A_10,   B_10},
    {1, C_9,    A_9,    B_9},
    {1, C_8,    A_8,    B_8},
    {1, C_7,    A_7,    B_7},
    {1, C_6,    A_6,    B_6},
    {1, C_5,    A_5,    B_5},
    {1, C_3,    A_3,    B_3},

    {1, I_16,   G_16,   H_16},
    {1, I_14,   G_14,   H_14},
    {1, I_13,   G_13,   H_13},
    {1, I_12,   G_12,   H_12},
    {1, I_11,   G_11,   H_11},
    {1, I_10,   G_10,   H_10},
    {1, I_9,    G_9,    H_9},
    {1, I_8,    G_8,    H_8},
    {1, I_7,    G_7,    H_7},
    {1, I_6,    G_6,    H_6},
    {1, I_5,    G_5,    H_5},
    {1, I_3,    G_3,    H_3},
    {1, I_1,    G_1,    H_1},

    {1, F_16,   D_16,   E_16},
    {1, F_15,   D_15,   E_15},
    {1, F_14,   D_14,   E_14},
    {1, F_10,   D_10,   E_10},
    {1, F_6,    D_6,    E_6},
    {1, F_5,    D_5,    E_5},
    {1, F_4,    D_4,    E_4},
    {1, F_3,    D_3,    E_3},
    {1, F_2,    D_2,    E_2},
    {1, F_1,    D_1,    E_1},
    {1, L_10,   J_10,   K_10},
};
#endif // RGB_MATRIX_ENABLE

// clang-format on
void housekeeping_task_kb(void) {
    if (default_layer_state == (1 << 0)) {
//        writePin(LED_MAC_OS_PIN, !LED_OS_PIN_ON_STATE);
        writePin(LED_WIN_OS_PIN, !LED_OS_PIN_ON_STATE);
    }
    if (default_layer_state == (1 << 2)) {
//        writePin(LED_MAC_OS_PIN, !LED_OS_PIN_ON_STATE);
        writePin(LED_WIN_OS_PIN, LED_OS_PIN_ON_STATE);
    }
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
//#ifdef LED_SCROLL_LOCK_PIN
//        //writePin(LED_SCROLL_LOCK_PIN, led_state.scroll_lock);
//        if (host_keyboard_led_state().scroll_lock) {
//           writePin(LED_SCROLL_LOCK_PIN, LED_OS_PIN_ON_STATE);
//        } else {
//           writePin(LED_SCROLL_LOCK_PIN, !LED_OS_PIN_ON_STATE);
//        }
//
//#endif

#ifdef LED_SCROLL_LOCK_PIN
        writePin(LED_SCROLL_LOCK_PIN, led_state.scroll_lock);
#endif

#ifdef LED_CAPS_LOCK_PIN
        writePin(LED_CAPS_LOCK_PIN, led_state.caps_lock);
#endif

    }
    return res;
}
