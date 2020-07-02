/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _F 1
#define _J 2
#define _G 3



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
     KC_LGUI, KC_A  , KC_S  , KC_D  , LT(_F,KC_F), KC_G,                  KC_H, LT(_J,KC_J), KC_K, KC_L, KC_SCLN, KC_QUOT,
     KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
                      KC_GRV,KC_EQL,                                                 KC_LBRC, KC_RBRC,
                                      KC_DEL,                                 KC_ENT,
                                      KC_LCTL, KC_BSPC,                         KC_SPC,  KC_DEL,
                                      KC_LALT, KC_LGUI,                        KC_GRV, KC_RALT
  ),

  [_F] =LAYOUT_5x6(
      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
     KC_NO , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                         KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,KC_NO,
     KC_NO, KC_NO  , KC_NO  , KC_NO  , _______, KC_NO,                  KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO,
     KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                         KC_NO  , KC_NO  ,KC_NO,KC_NO ,KC_NO,TG(_G),
                      KC_NO,KC_NO,                                                 KC_NO, KC_NO,
                                      KC_NO,                                 KC_END,
                                      KC_NO, KC_NO,                         KC_HOME,  KC_NO,
                                      KC_NO, KC_NO,                        LCTL(LSFT(LGUI(KC_4))), LCTL(LGUI(KC_4))
  ),

  [_J] = LAYOUT_5x6(
       KC_MUTE, KC_VOLD, KC_VOLU, KC_NO  , KC_NO  , KC_NO  ,                         KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,KC_NO,
     KC_NO,   KC_MPRV, KC_MPLY, KC_MNXT, KC_NO  , KC_NO  ,                         KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,KC_NO,
     KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO,                  KC_NO, _______, KC_NO, KC_NO, KC_NO, KC_NO,
     KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                         KC_NO  , KC_NO  ,KC_NO,KC_NO ,KC_NO,KC_NO,
                      KC_NO,KC_NO,                                                 KC_NO, KC_NO,
                                      KC_F13,                                 KC_NO,
                                      KC_NO, KC_F14,                         KC_NO,  KC_NO,
                                      KC_NO, KC_NO,                        KC_NO, KC_NO
  ),
  [_G] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
     KC_LCTL, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , LT(_J,KC_J)  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,TG(_G),
                      KC_LBRC,KC_RBRC,                                                       KC_PLUS, KC_EQL,
                                      KC_R,                                 KC_ENT,
                                      KC_SPC, KC_M,                         KC_SPC,  KC_DEL,
                                      KC_M, KC_LCTL,                        KC_GRV, _______
  )
};


