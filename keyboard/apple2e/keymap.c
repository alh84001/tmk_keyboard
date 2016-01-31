/*
Copyright 2015 Ethan Apodaca <papodaca@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     * ,-----------------------------------------------------------.
     * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |FN    |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Space             |Alt |Gui |Fn  |Ctrl|
     * `-----------------------------------------------------------'
     */
    [0] = KEYMAP(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, FN4, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        LCTRL, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,    ENT, \
        LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, \
        LALT,FN0,LGUI,          SPC,                     FN0,LEFT,RGHT,UP,DOWN),

/*
KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, \
    K40, K41, K42,           K43,                K44, K45, K46, K47, K48  \
) { \
*/

    /* Keymap 1: Disable Win(Gui) key
     * ,-----------------------------------------------------------.
     * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |FN    |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl|No  |Alt |      Space             |Alt |No  |Fn  |Ctrl|
     * `-----------------------------------------------------------'
     */
    [1] = KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,NO  ,          TRNS,                    TRNS,TRNS,TRNS,TRNS,TRNS),

    /* Keymap 2: SpaceFN mode!
     * ,-----------------------------------------------------------.
     * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |FN    |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      FN3               |Alt |Gui |APP |Ctrl|
     * `-----------------------------------------------------------'
     */
    [2] = KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,LGUI,          FN3,                    TRNS,TRNS,TRNS,TRNS,TRNS),

    /* Keymap 3: extra modifiers layer
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Del    |
     * |-----------------------------------------------------------|
     * |FN4 |FN5| UP|FN6|  R|MPR|MNX|MPL|MST|  O|  P| UP|  ]|SLEEP|
     * |-----------------------------------------------------------|
     * |Caps  |LFT|DWN|RGT|  F|  G|  H|  J|Hom|PGU|LFT|RGT|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |Vlu|Vld|Mte|  V| SP|  N|CAL|End|PGd|DWN|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl|FN1 |Alt |      Space             |FN2 |FN1 |Fn  |Ctrl|
     * `-----------------------------------------------------------'
     */
    [3] = KEYMAP(
        ESC ,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F11, DEL,FN2, \
        TRNS,TRNS,  UP,TRNS,MPRV,MPRV,MNXT,MSTP,TRNS,TRNS,TRNS,WH_U,TRNS,TRNS, \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,WH_L,WH_R,     TRNS, \
        TRNS,     VOLU,VOLD,MUTE,TRNS,TRNS,TRNS,CALC,END,PGDN,WH_D, \
        TRNS,TRNS,FN1  ,           SPC,                    TRNS,TRNS,TRNS,TRNS,TRNS),

};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(3),
    [1] = ACTION_LAYER_TOGGLE(1),
    [2] = ACTION_LAYER_TOGGLE(2),
    [3] = ACTION_LAYER_TAP_KEY(3, KC_SPACE),
    [4] = ACTION_MODS_KEY(MOD_LCTL, KC_L)
};
