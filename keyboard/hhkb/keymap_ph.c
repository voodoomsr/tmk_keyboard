/*
 * PH: hardware mapping for real
 */
#include "keymap_common.h"

#define AC_EXC    ACTION_MODS_KEY(MOD_LSFT, KC_2)

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif

    [0] = \
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLASH,GRAVE, \
           TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,CAPS, \
           LCTL, A,   S,   D,   F,   G,   H,   J,   K,   L,   FN2, QUOT, LCTL, \
           LGUI, Z,   X,   C,   V,   B,   N,   M, FN3, DOT, SLASH, LGUI,FN1, \
                LALT,LSFT,           SPACE,                FN4, LALT),

    [1] = \
    KEYMAP(FN0, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TRNS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  PSCR,SLCK,PAUS, UP,  NO,  BSPC, \
           TRNS,VOLD,VOLU,MUTE,NO,  NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,ENT, \
           TRNS,NO,  NO,  NO,  NO,  NO,  PPLS,PMNS,END, PGDN,DOWN, TRNS,TRNS, \
                TRNS,TRNS,           TRNS,               TRNS,TRNS),

    [2] = \
    KEYMAP(FN0, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, ESC, HOME,   UP,  END, NO, NO, NO, NO, NO, NO, NO, NO,  TRNS, \
           TRNS, BSPC, LEFT, DOWN, RGHT, ENT, NO, LALT, LCTL, LGUI, TRNS, TRNS, TRNS, \
           TRNS, CAPS, NO, DEL, PGDN, PGUP,  NO, NO, NO, TRNS, TRNS, TRNS,TRNS, \
                TRNS,TRNS,          TRNS,                TRNS,TRNS),

    [3] = \
    KEYMAP(FN0,    F1,    F2,    F3,    F4,    F5,    F6,    F7,    F8,    F9,    F10,    F11,    F12,    INS,    DEL, \
           TRNS, FN24,  FN25,  LBRC,  RBRC,    NO,    NO,  TRNS,  TRNS,  TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
           TRNS, MINS,   EQL,BSLASH, GRAVE,    NO,  TRNS,  TRNS,  TRNS,  TRNS,   TRNS,   TRNS,   TRNS, \
           TRNS, FN20,  FN21,  FN22,  FN23,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,   TRNS,   TRNS,   TRNS, \
                TRNS,TRNS,           TRNS,               TRNS,TRNS),

		[4] = \
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TRNS,WH_U,  BTN2,  MS_U, BTN1,      NO,    NO,  TRNS,  TRNS,  TRNS,   TRNS,   TRNS,   TRNS,   TRNS,  \
           TRNS,WH_D,  MS_L,  MS_D, MS_R,      NO,  TRNS,  TRNS,  TRNS,  TRNS,   TRNS,   TRNS,   TRNS, \ 
           TRNS,NO,    WH_L,  BTN3,  WH_R,   TRNS,  TRNS,  TRNS,  TRNS,  TRNS,   TRNS,   TRNS,   TRNS, \ 
                TRNS,TRNS,          TRNS,                TRNS,TRNS),


	};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_TAP_TOGGLE(0),
    [1] = ACTION_LAYER_TAP_TOGGLE(1),
    [2] = ACTION_LAYER_TAP_KEY(2, KC_SCOLON),
    [3] = ACTION_LAYER_TAP_KEY(3, KC_COMMA),
    [4] = ACTION_LAYER_TAP_TOGGLE(4),
		[10] = ACTION_MODS_KEY(MOD_LSFT, KC_1),          //Exclamation
		[11] = ACTION_MODS_KEY(MOD_LSFT, KC_2),          //At
		[12] = ACTION_MODS_KEY(MOD_LSFT, KC_3),          //Sharp
		[13] = ACTION_MODS_KEY(MOD_LSFT, KC_4),          //Dollar
		[14] = ACTION_MODS_KEY(MOD_LSFT, KC_5),          //Percent
		[15] = ACTION_MODS_KEY(MOD_LSFT, KC_6),          //Hat
		[16] = ACTION_MODS_KEY(MOD_LSFT, KC_7),          //Ampersand
		[17] = ACTION_MODS_KEY(MOD_LSFT, KC_8),          //Asterisk
		[18] = ACTION_MODS_KEY(MOD_LSFT, KC_9),          //Left Parenthesis
		[19] = ACTION_MODS_KEY(MOD_LSFT, KC_0),          //Right Parenthesis
		[20] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),       //Underscore
		[21] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),        //Plus
		[22] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLASH),     //Pipe
		[23] = ACTION_MODS_KEY(MOD_LSFT, KC_GRAVE),      //Tilde
		[24] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),       //Left Curly Bracket
		[25] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),       //Right Curly Bracket
		[26] = ACTION_MODS_KEY(MOD_LSFT, KC_SCOLON),     //Colon
		[27] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),       //DoubleQuote
		[28] = ACTION_MODS_KEY(MOD_LSFT, KC_COMMA),      //Left Angle Bracket
		[29] = ACTION_MODS_KEY(MOD_LSFT, KC_DOT),        //Right Angle Bracket
		[30] = ACTION_MODS_KEY(MOD_LSFT, KC_SLASH),      //Interrogation
		[31] = ACTION_MODS_KEY(MOD_LSFT | MOD_LALT , KC_1),      //Open Exclamation
		[9] = ACTION_MODS_KEY(MOD_LSFT | MOD_LALT , KC_SLASH)    //Open Interrogation


};
