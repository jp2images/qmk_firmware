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

#include QMK_KEYBOARD_H
#include "keychron_common.h"

// clang-format off

LEADER_EXTERNS(); // Setting up the Leader Key function

enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN,
  WIN_FN2
};

enum jp_custom_keys{
    TEMPLATEKEY = SAFE_RANGE // Filler/Template to aid in aligning the other enums for readability.
    , LAMBDA  // =>
    , LAMDAP  // () =>
    , GITPULL // git pull
    , GITSTAT // git stat
    , GITADD  // git add .
    , GITORG  // git pull origin
    , GITPUSH // git push
    , GITCMT  // git commit
    , TODO    // TODO JP
    , HERE    // HERE: Jeff, you are here.
    , EDTQUOT // [...]
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_109(
        KC_ESC,     KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    KC_MUTE,    KC_SNAP,  KC_SIRI,  RGB_MOD,  KC_F13,   KC_F14,   KC_F15,   KC_F16,
        KC_GRV,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,    KC_PSLS,  KC_PAST, KC_PMNS,
        KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,    KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,                                   KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,              KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,              KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,    KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, KC_ROPTN, MO(MAC_FN), KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    [MAC_FN] = LAYOUT_ansi_109(
        _______,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     RGB_TOG,    _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,
        _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,    RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,
        _______,    RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                  _______,  _______,  _______,  _______,
        _______,              _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,              _______,            _______,  _______,  _______,
        _______,    _______,  _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,            _______,  _______),
    [WIN_BASE] = LAYOUT_ansi_109(
        KC_ESC,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MUTE,    KC_PSCR,  KC_CRTA,  RGB_TOG,  KC_MPRV,  KC_MPLY,  KC_MNXT,  QK_LEAD,
        KC_GRV,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,    KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,
    /*MO(WIN_FN),*/ KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,                                   KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,              KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,              KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,    KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  MO(WIN_FN), KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    [WIN_FN] = LAYOUT_ansi_109(
        QK_BOOT,    KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    _______,    _______,  _______,  RGB_TOG,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,
        _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,    RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  LAMBDA,   LAMDAP,   _______,
        _______,    RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                  TODO,     HERE,     EDTQUOT,  _______,
        _______,              _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,              _______,            GITPULL,  GITORG,   GITPUSH,
        _______,    _______,  _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______,  GITSTAT,            GITADD,   GITCMT),
    [WIN_FN2] = LAYOUT_ansi_109(
        _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,
        _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,
        _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                  _______,  _______,  _______,  _______,
        _______,              _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,              _______,            _______,  _______,  _______,
        _______,    _______,  _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,            _______,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][1][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [MAC_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [WIN_FN2]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) }
};
#endif

// clang-format on

void housekeeping_task_user(void) {
    housekeeping_task_keychron();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // if (!process_record_keychron(keycode, record)) {
    //     return false; //Returning FALSE stops the QMK processing further key press events.
    // }

    switch (keycode) {
        case TEMPLATEKEY: // Use this as a template for creating additional keycodes
            if (record->event.pressed) // On Key DOWN
            {
                // SEND_STRING("=", SS_RCTRL(SS_LSFT(">")))
                // tap_code(KC_SPC); //Type a single space that is more explicit than a blank space in the string.
            } else { // On Key UP
                // tap_code(KC_ENT); //This fucntion presses and releases the key argument.
                // On the other hand using the register_code() and unrigester_code()
                // allow for pressing and holding the key then enter other key presses
                // and then releasing the key.

                //  register_code(KC_ENT);
                //  unregister_code(KC_ENT);
                return false;
            }
            break;

        case LAMBDA:
            if (record->event.pressed) { // On Key DOWN - print key combination: '=> for a C# lamda'
                SEND_STRING("=>");
                tap_code(KC_SPC);
                return false;
            } else { //On Key UP
            }
            break;

        case LAMDAP:
            if (record->event.pressed) { // On Key DOWN - print key combination: '() => for a C# lamda with arguments'
                SEND_STRING("() =>");
                tap_code(KC_SPC);
                return false;
            } else { //On Key UP
            }
             break;

        case GITSTAT:
            if (record->event.pressed) { // On Key DOWN
                SEND_STRING("git status");
            } else { //On Key UP
                tap_code(KC_ENT);
                return false;
            }
            break;

        case GITADD:
            if (record->event.pressed) { // On Key DOWN
                SEND_STRING("git add .");
            } else {
                tap_code(KC_ENT);
                return false;
            }
            break;

        case GITPULL:
            if (record->event.pressed) { // On Key DOWN
                SEND_STRING("git pull");
            } else { //On Key UP
                tap_code(KC_ENT);
                return false;
            }
            break;

        case GITORG:
            if (record->event.pressed) { // On Key DOWN
                SEND_STRING("git pull origin");
            } else { //On Key UP
                tap_code(KC_ENT);
                return false;
            }
            break;

        case GITPUSH:
            if (record->event.pressed) { // On Key DOWN
                SEND_STRING("git push");
            } else { //On Key UP
                tap_code(KC_ENT);
                return false;
            }
            break;

        case GITCMT:
            if (record->event.pressed) { // On Key DOWN
                SEND_STRING("git commit -m \"" );
                return false;
            } else { //On Key UP
            }
            break;

        case TODO:
            if (record->event.pressed) { // On Key DOWN
                SEND_STRING("//TODO JP");
                return false;
            } else { //On Key UP
            }
            break;

        case HERE:
            if (record->event.pressed) { // On Key DOWN
                SEND_STRING("//HERE: Jeff, you are here.");
            } else { //On Key UP
                tap_code(KC_ENT);
                return false;
            }
            break;

        // Insert the [...] symbol indicating that there author removed some text from the quote.
        case EDTQUOT: //FN + KC_P3
            if (record->event.pressed) { // On Key DOWN
                SEND_STRING("[...]"); //No enter after these characters
                tap_code(KC_SPC);
                return false;
            } else { //On Key UP
            }
            break;

        default:
            break;
    }
    return true; // return true to allow the QMK loop to continue processing other
                 // keyboard events.
}

// void matrix_scan_user(void) {
//   LEADER_DICTIONARY() {
//     leading = false;
//     leader_end();

//     SEQ_ONE_KEY(KC_F) {
//       // Anything you can do in a macro.
//       SEND_STRING("QMK is awesome.");
//     }
//     SEQ_TWO_KEYS(KC_D, KC_D) {
//       SEND_STRING(SS_LCTL("a") SS_LCTL("c"));
//     }
//     SEQ_THREE_KEYS(KC_D, KC_D, KC_S) {
//       SEND_STRING("https://start.duckduckgo.com\n");
//     }
//     // SEQ_TWO_KEYS(KC_A, KC_S) {
//     //   register_code(KC_LGUI);
//     //   register_code(KC_S);
//     //   unregister_code(KC_S);
//     //   unregister_code(KC_LGUI);
//     // }
//   }
// }
