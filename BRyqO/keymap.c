#include QMK_KEYBOARD_H
#include "version.h"
#include "cwc.c"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  MAC_LOCK,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TO(6),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    MT(MOD_LCTL, KC_ESCAPE),KC_A,           MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCLN),KC_QUOTE,       
    MO(3),          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,       
                                                    KC_SPACE,       MO(1),                                          MO(4),          LT(2, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(5),
    KC_TRANSPARENT, KC_TRANSPARENT, TO(6),          LGUI(KC_A),     LGUI(KC_S),     OSM(MOD_HYPR),                                  RGUI(KC_LEFT),  RALT(KC_LEFT),  RALT(KC_RIGHT), RGUI(KC_RIGHT), RALT(RSFT(KC_KP_PLUS)),TO(3),
    CW_TOGG,        LGUI(KC_LBRC),  LGUI(KC_RBRC),  RGUI(RSFT(KC_LBRC)),RGUI(RSFT(KC_RBRC)),OSM(MOD_MEH),                                   KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       RALT(RSFT(KC_KP_MINUS)),TO(6),
    LGUI(LSFT(KC_X)),LGUI(KC_Z),     LGUI(KC_X),     LGUI(KC_C),     LGUI(KC_V),     KC_LEFT_SHIFT,                                  RGUI(RSFT(KC_LBRC)),RGUI(RSFT(KC_RBRC)),LGUI(KC_LBRC),  LGUI(KC_RBRC),  KC_TRANSPARENT, LGUI(KC_ENTER), 
                                                    LCTL(KC_GRAVE), KC_TRANSPARENT,                                 LGUI(KC_GRAVE), LALT(KC_BSPC)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_LCBR,        KC_CIRC,        KC_LBRC,        KC_LPRN,        KC_GRAVE,                                       KC_TILD,        KC_RPRN,        KC_RBRC,        KC_DLR,         KC_RCBR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MINUS,       KC_ASTR,        KC_EQUAL,       KC_UNDS,        KC_PERC,                                        KC_HASH,        KC_AT,          KC_AMPR,        KC_TILD,        KC_EXLM,        KC_DQUO,        
    KC_TRANSPARENT, KC_PLUS,        KC_PIPE,        KC_TRANSPARENT, KC_SLASH,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BSLS,        KC_LABK,        KC_RABK,        KC_QUES,        KC_COLN,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    MAC_LOCK,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_PLUS,     
    LALT(LGUI(LCTL(LSFT(KC_D)))),KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,LCTL(KC_GRAVE), LALT(LCTL(LSFT(KC_GRAVE))),LCTL(LSFT(KC_GRAVE)),                                KC_DLR,         KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_KP_MINUS,    
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_MS_BTN1,     KC_NO,                                          KC_PERC,        KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_KP_ASTERISK, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_C),     KC_MS_BTN2,     KC_TRANSPARENT,                                 KC_KP_EQUAL,    KC_1,           KC_2,           KC_3,           KC_DOT,         KC_KP_SLASH,    
                                                    KC_LEFT_CTRL,   KC_LEFT_GUI,                                    KC_TRANSPARENT, KC_0
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_W))),KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_T))),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_O))),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LCTL(LSFT(KC_A))),LALT(LCTL(LSFT(KC_S))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(LCTL(LSFT(KC_H))),LALT(LCTL(LSFT(KC_J))),KC_TRANSPARENT, LALT(LCTL(LSFT(KC_L))),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_C))),LALT(LCTL(LSFT(KC_V))),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_COMMA))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    LGUI(KC_TAB),   LGUI(KC_GRAVE),                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_W,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_UP,
    KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_PRINT,
    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_DOWN,
                                                    KC_SPACE,       KC_TRANSPARENT,                                 KC_F1,          KC_F2
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_MS_BTN3,     KC_MS_BTN2,     KC_MS_BTN1,     KC_NO,                                          KC_TRANSPARENT, KC_RIGHT_SHIFT, KC_RIGHT_GUI,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_MS_BTN1),LSFT(KC_MS_BTN1),KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

/* const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT( */
/*   'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', */ 
/*   'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', */ 
/*   'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', */ 
/*   'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', */ 
/*   'L', 'L', 'R', 'R' */
/* ); */


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LCTL, KC_ESCAPE):
            return g_tapping_term -100;
        case MT(MOD_LSFT, KC_F):
            return g_tapping_term -100;
        case KC_SPACE:
            return g_tapping_term -100;
        case MT(MOD_RSFT, KC_J):
            return g_tapping_term -110;
        case KC_QUOTE:
            return g_tapping_term -30;
        case LT(2, KC_BSPC):
            return g_tapping_term -65;
        default:
            return g_tapping_term;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [3] = { {16,231,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {170,151,242}, {170,151,242}, {170,70,166}, {170,70,166}, {170,70,166}, {0,0,0}, {41,227,246}, {41,227,246}, {41,227,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {170,70,166}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,208,182}, {140,153,103}, {248,226,224}, {248,226,224}, {248,226,224}, {0,0,0}, {176,208,182}, {140,153,103}, {248,226,224}, {248,226,224}, {248,226,224}, {0,0,0}, {176,208,182}, {140,153,103}, {248,226,224}, {248,226,224}, {248,226,224}, {140,153,103}, {176,208,182}, {0,0,0}, {248,226,224} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {170,70,166}, {0,0,0}, {0,0,0}, {140,195,56}, {0,0,0}, {170,70,166}, {170,70,166}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,146,210}, {139,76,134}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,156,98}, {0,0,0}, {0,0,0}, {170,70,166}, {170,70,166}, {0,0,0}, {170,70,166}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {170,70,166}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {176,208,182}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,208,182}, {0,0,0}, {139,208,182}, {0,0,0}, {0,0,0}, {0,0,0}, {176,208,182}, {139,208,182}, {139,208,182}, {139,208,182}, {0,0,0}, {0,0,0}, {176,208,182}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,208,182}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {176,208,182}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // if (!process_achordion(keycode, record)) {
  //   return false;
  // }
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case MAC_LOCK:
      HCS(0x19E);

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
