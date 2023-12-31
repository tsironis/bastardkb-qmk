#include QMK_KEYBOARD_H
#include "ishtob.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,------+------+------+------+------+------------------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | PSCR |
 * |------+------+------+------+------+------+------+------+------+------+------+------+--------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   7  |   8  |   9  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | LCTL |   A  |   S  |   D  |   F  |   G  |   4  |   5  |   6  |   H  |   J  |   K  |   L  | ;/Nav|Ctl/Et|
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   1  |   2  |   3  |   N  |   M  |   ,  |   .  |   /  |  -   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  | Ctrl | GUI  | Alt  |Lower |Space |   0  |   .  |   =  |Space |Raise |  Alt | NumL |  App  | Del |
 * `--------------------------------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_wrapper(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PSCR,
  LT_FN(KC_TAB),   _________________QWERTY_L1_________________,    KC_P7,   KC_P8,   KC_P9,    _________________QWERTY_R1_________________, KC_BSPC,
  KC_CAPS,  _________________QWERTY_L2_________________,    KC_P4,   KC_P5,   KC_P6,    _________________QWERTY_R2_________________, CTL_ENT,
  KC_LSFT,  _________________QWERTY_L3_________________,    KC_P1,   KC_P2,   KC_P3,    _________________QWERTY_R3_________________, LT_RAI(KC_MINS),
  KC_ESC,   KC_LCTL, KC_LGUI, KC_LALT, LOWER,   KC_SPC,    KC_P0,   KC_DOT,  KC_EQL,  KC_SPC,   RAISE, KC_RALT, KC_RGUI, KC_APP,  KC_DEL
),

/* Colemak
 * ,------+------+------+------+------+------------------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | PSCR |
 * |------+------+------+------+------+------+------+------+------+------+------+------+--------------------.
 * | Tab  |   Q  |   W  |   F  |   P  |   G  |   7  |   8  |   9  |   J  |   L  |   U  |   Y  |   ;  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------+------+------+------|
 * | CAPS |   A  |   R  |   S  |   T  |   D  |   4  |   5  |   6  |   H  |   N  |   E  |   I  |   O  |Ctl/Et|
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   1  |   2  |   3  |   K  |   M  |   ,  |   .  |   /  |  -   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  | Ctrl | GUI  | Alt  |Lower |Space |   0  |   .  |   =  |Space |Raise |  Alt | NumL |  App  | Del |
 * `--------------------------------------------------------------------------------------------------------'
 */
[_COLEMAK] = LAYOUT_wrapper(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PSCR,
  LT_FN(KC_TAB),   _________________COLEMAK_L1________________, KC_P7,   KC_P8,   KC_P9,    _________________COLEMAK_R1________________, KC_BSPC,
  KC_LCTL,  _________________COLEMAK_L2________________, KC_P4,   KC_P5,   KC_P6,    _________________COLEMAK_R2________________, CTL_ENT,
  KC_LSFT,  _________________COLEMAK_L3________________, KC_P1,   KC_P2,   KC_P3,    _________________COLEMAK_R3________________, LT_RAI(KC_MINS),
  KC_ESC,   KC_CAPS, KC_LGUI, KC_LALT,  LOWER,   KC_SPC, KC_P0,   KC_DOT,  KC_EQL,   KC_SPC,  RAISE, KC_RALT, KC_RGUI, KC_APP,  KC_DEL
  ),

/* Dvorak
 * ,------+------+------+------+------+------------------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | PSCR |
 * |------+------+------+------+------+------+------+------+------+------+------+------+--------------------.
 * | Tab  |   "  |   ,  |   .  |   P  |   Y  |   7  |   8  |   9  |   F  |   G  |   C  |   R  |   L  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   O  |   E  |   U  |   I  |   4  |   5  |   6  |   D  |   H  |   T  |   N  |   S  |  /   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   ;  |   Q  |   J  |   K  |   X  |   1  |   2  |   3  |   B  |   M  |   W  |   V  |   Z  |Ctl/Et|
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  | Ctrl | GUI  | Alt  |Lower |Space |   0  |   .  |   =  |Space |Raise |  Alt | NumL |  App  | Del |
 * `--------------------------------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_wrapper(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PSCR,
  LT_FN(KC_TAB),  _________________DVORAK_L1_________________, KC_P7, KC_P8,  KC_P9,  _________________DVORAK_R1_________________, KC_BSPC,
  KC_LCTL, _________________DVORAK_L2_________________, KC_P4, KC_P5,  KC_P6,  _________________DVORAK_R2_________________, CTL_ENT,
  KC_LSFT, _________________DVORAK_L3_________________, KC_P1, KC_P2,  KC_P3,  _________________DVORAK_R3_________________, LT_RAI(KC_MINS),
  KC_ESC,  KC_CAPS,  KC_LGUI,  KC_LALT, LOWER,  KC_SPC, KC_P0, KC_DOT, KC_EQL, KC_SPC,  RAISE, KC_RALT, KC_RGUI, KC_APP,  KC_DEL
),

/* Lower
 * ,------+------+------+------+------+------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------+--------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |      |      |      |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |      |      |      |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |      |      |      |  F12 |ISO ~ |ISO | |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      | Next | Vol- | Vol+ | Play |
 * `--------------------------------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_wrapper(
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR,  KC_LPRN, KC_RPRN, KC_DEL,
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, KC_F6,   KC_UNDS, KC_EQL,  KC_LBRC, KC_RBRC, KC_PIPE,
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  _______, _______, _______, KC_F12,S(KC_NUHS),S(KC_NUBS),_______,_______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

/* Raise
 * ,------+------+------+------+------+------------------------------------------------.
 * |  Esc |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+--------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |      |      |      |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |      |      |      |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |      |      |      |  F12 |ISO # |ISO / |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      | Next | Vol- | Vol+ | Play |
 * `--------------------------------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_wrapper(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  ________________NUMBER_LEFT________________, KC_6,    _______, _______, _______, KC_7,    KC_8,    KC_9,    KC_0,  KC_PLUS,  KC_BSLS,
  KC_DEL,  KC_A,    KC_UP,   KC_D,    KC_PSCR,  KC_VOLU, _______, _______, _______, KC_4,  KC_5,  KC_6,  KC_PAST, KC_COLN, KC_QUOT,
  _______, KC_LEFT, KC_DOWN, KC_RIGHT,KC_MUTE,  KC_VOLD, _______, _______, _______, KC_1,    KC_2,  KC_3,  KC_UP, KC_SLSH,   _______,
  _______, _______, _______, _______,  _______, KC_SPC, _______, _______, KC_SPC,  KC_0,   _______,  KC_LEFT, KC_DOWN, KC_RIGHT, KC_NUM
),

/* FN layer on Esc key
 * ,------+------+------+------+------+------------------------------------------------.
 * |  Esc |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |
 * |------+------+------+------+------+------+------+------+------+------+------+------+--------------------.
 * |      |   !  |   @  |   #  |   $  |   %  |      |      |      |   ^  |   &  |   *  |   (  |   )  |   +  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |      |      |      |  F6  |   _  |   =  |   [  |   ]  |  '   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |      |      |      |  F12 |ISO ~ |ISO | |   {  |   }  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      | Next | Vol- | Vol+ | Play |
 * '------+------+------+------+------+------+------+------+------+------+------+------+--------------------'
 */
[_FNLAYER] = LAYOUT_wrapper(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
  _______, __________________LONG_FUNC_LEFT___________________,  _______, _______, _______, KC_UNDS, KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOT,
  _______, __________________LONG_FUNC_RIGHT__________________, _______, _______, _______,S(KC_NUHS),S(KC_NUBS),KC_LCBR, KC_RCBR, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

/* Mouse Layer (semi-col)
 * ,------+------+------+------+------+------------------------------------------------.
 * | ACCL0| ACCL1| ACCL2|      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+--------------------.
 * |      |      |      |      |      |      |      |      | Home | Wh_Up| WHL_L| M_Up | WHL_R| Macro|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | End  | Wh_Dn| M_Lft| M_Dn | M_Rt |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      | BTN2 | BTN3 | BTN4 | BTN5 |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      | BTN1 |      |      |      | BTN1 |      |      |      |      |      |
 * `--------------------------------------------------------------------------------------------------------'
 */

[_MOUSECURSOR] = LAYOUT_wrapper(
  KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, M_EMAIL,M_EMAIL2, _______, _______, _______, KC_HOME, KC_PGUP, KC_WH_L, KC_MS_U, KC_WH_R, P_MPASS, P_META,
  _______, _______, _______, _______, O_RTQ6H, _______, _______, _______, KC_END , KC_PGDN, KC_MS_L, KC_MS_D, KC_MS_R, _______, O_DAYRN,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5, _______, _______,
  _______, _______, _______, _______, _______, KC_BTN1, _______, _______, _______, KC_BTN1, _______, _______, _______, P_CITRIX, O_AUTODC
),

/* Adjust (Lower + Raise)
 * ,------+------+------+------+------+------------------------------------------------.
 * | Reset|HPT TG|HPT FB|HPT M+|HPT M-|HPT RS|      |      |      |      |      |EEP RS|
 * |------+------+------+------+------+------+------+------+------+------+------+------+--------------------.
 * |      |RGB TG|RGB ST|RGBH -|RGBH +|RGBS -|RGBS +|RGBV -|RGBV +|      |      |      |      |      |  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|      |      |      |AGswap|Qwerty|Colemk|      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|      |      |      |      |      |      |BL -  | BL + |BL ST |BL TG |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |CK RS |CK -  |CK +  |CK TG |
 * `--------------------------------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_wrapper(
  _______, HF_TOGG, HF_FDBK, HF_NEXT, HF_PREV, HF_RST,  _______, _______, _______, _______, _______, EE_CLR,
  QK_BOOT, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______, _______, KC_DEL,
  _______, MAGIC_TOGGLE_NKRO, _______, AU_ON,   AU_OFF,  AG_NORM, _______, _______, _______, AG_SWAP, QWERTY,  COLEMAK, _______,  _______,  _______,
  _______, AU_PREV, AU_NEXT, MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______, _______, _______, BL_DOWN, BL_UP,   BL_STEP, BL_TOGG,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, CK_RST,  CK_DOWN, CK_UP,   CK_TOGG
)



};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
          //not sure how to have keyboard check mode and set it to a variable, so my work around
          //uses another variable that would be set to true after the first time a reactive key is pressed.
        layer_on(_LOWER);
      } else {
        layer_off(_LOWER);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        //not sure how to have keyboard check mode and set it to a variable, so my work around
        //uses another variable that would be set to true after the first time a reactive key is pressed.
        layer_on(_RAISE);
      } else {
        layer_off(_RAISE);
      }
      return false;
      break;
    case BACKLIT:
      if (record->event.pressed) {
        register_code(KC_RSFT);
        #ifdef BACKLIGHT_ENABLE
          backlight_step();
        #endif
      } else {
        unregister_code(KC_RSFT);
      }
      return false;
      break;
  }
  return true;
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
