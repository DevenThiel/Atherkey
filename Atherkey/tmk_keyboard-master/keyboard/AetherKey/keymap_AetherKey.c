#include "keymap_common.h"

/*
 * AetherKey Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,-------------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| BKSP  |vd |vu |
     * |-------------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|del|mut|
     * |-------------------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |ins|pnt|
     * |-------------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |up |pau|
     * |-------------------------------------------------------------------|
     * |CTRL|FN0|MOD|ALT |      Space             | FN2|FN1|FN0|lft|dwn|rht|
     * `-------------------------------------------------------------------'
     */
    KEYMAP(
		  ESC,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0,MINUS,  EQL, BSPC, VOLD, VOLU, \
		  TAB,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P, LBRC, RBRC, BSLS,  DEL, MUTE, \
		 CAPS,    A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, QUOT,        ENT,  INS, PSCR, \
		 LSFT,          Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH,       RSFT,   UP, PAUS, \
		 LCTL,  FN0, LGUI, LALT,                    SPC,              FN2,  FN1,  FN0, LEFT, DOWN, RGHT), 

	/* 1: FN0 Layer
     * ,-------------------------------------------------------------------.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12| PWR   |   |   |
     * |-------------------------------------------------------------------|
     * |     |   |Ply|   |   |   |   |   |   |   |   |   |   |     |   |   |
     * |-------------------------------------------------------------------|
     * |      | FR|Stp| FF|   |   |   |   |   |   |   |   |        |   |   |
     * |-------------------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |Pup|   |
     * |-------------------------------------------------------------------|
     * |    |FN0|   |    |                        | FN2|FN1|FN0|HOM|Pdn|END|
     * `-------------------------------------------------------------------'
     */
    KEYMAP(
          GRV,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12,  PWR, TRNS, TRNS, \
         TRNS, TRNS, MPLY, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
         TRNS, MPRV, MSTP, MNXT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, \
         TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, PGUP, TRNS, \
         TRNS, TRNS, TRNS, TRNS,                   TRNS,             TRNS, TRNS, TRNS, HOME, PGDN,  END),
	
		/* 1: FN1/2 Layer
     * ,-------------------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |   |   |
     * |-------------------------------------------------------------------|
     * |     |   |Wup|   |   |   |   |   |   |   |   |   |   |     |   |   |
     * |-------------------------------------------------------------------|
     * |      |Wlt|Wdn|Wrt|   |   |   |   |   |   |   |   |        |   |   |
     * |-------------------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |     LCK  |Mup|RCK|
     * |-------------------------------------------------------------------|
     * |    |FN0|   |    |                        | FN2|FN1|FN0|Mlt|Mdn|Mrt|
     * `-------------------------------------------------------------------'
     */
    KEYMAP(
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
         TRNS, TRNS, WH_U, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
         TRNS, WH_L, WH_D, WH_R, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, \
         TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       BTN1, MS_U, BTN2, \
         TRNS, TRNS, TRNS, TRNS,                   TRNS,             TRNS, TRNS, TRNS, MS_L, MS_D, MS_R),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
	[1] = ACTION_LAYER_MOMENTARY(2),
	[2] = ACTION_LAYER_TOGGLE(2),
};
