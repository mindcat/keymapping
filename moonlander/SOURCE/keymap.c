#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  FR_LSPO,
  FR_RSPC,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_LBRACKET,    KC_RBRACKET,    KC_0,           KC_1,           KC_2,           KC_3,           KC_4,                                           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_EQUAL,       
    KC_GRAVE,       TD(DANCE_0),    KC_W,           TD(DANCE_1),    KC_P,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_TRANSPARENT, 
    KC_ESCAPE,      KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOTE,       
    KC_LSHIFT,      TD(DANCE_2),    TD(DANCE_3),    KC_D,           TD(DANCE_4),    KC_Z,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_CAPSLOCK,    MO(3),          KC_LCTRL,       KC_LALT,        KC_LGUI,        TD(DANCE_5),                                                                                                    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_SPACE,       KC_TAB,         KC_TRANSPARENT,                 KC_TRANSPARENT, KC_ENTER,       KC_BSPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_1,     ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    US_LDAQ,        US_RDAQ,        ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_7,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSLASH,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,                                          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_ASTERISK, KC_KP_PLUS,     KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_KP_SLASH,    KC_KP_MINUS,    KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_0,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {0,0,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {252,255,232}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {197,189,255}, {252,255,232} },

    [1] = { {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {0,0,255}, {252,255,232}, {252,255,232}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {252,255,232}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255}, {139,108,255} },

    [2] = { {139,108,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,108,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,108,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,108,255}, {139,108,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {15,235,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {15,235,244}, {0,0,0}, {0,0,0}, {0,0,0}, {15,235,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {15,235,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {15,235,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {15,235,244}, {252,255,232}, {252,255,232}, {252,255,232}, {0,0,0}, {15,235,244}, {252,255,232}, {252,255,232}, {252,255,232}, {0,0,0}, {15,235,244}, {252,255,232}, {252,255,232}, {252,255,232}, {0,0,0}, {15,235,244}, {74,255,255}, {74,255,255}, {252,255,232}, {15,235,244}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_N)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_F)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_R)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_6)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_0)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_9)));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_6)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_3)) SS_DELAY(100) SS_LALT(SS_TAP(X_F)));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_6)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_4)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_0)));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_2)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_6)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_2)) SS_DELAY(100) SS_LALT(SS_TAP(X_D)));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_1)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_7)) SS_DELAY(100) SS_LALT(SS_TAP(X_KP_6)));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[6];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Q);
        tap_code16(KC_Q);
        tap_code16(KC_Q);
    }
    if(state->count > 3) {
        tap_code16(KC_Q);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_Q); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_Q)); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_Q)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Q); register_code16(KC_Q);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_Q); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_Q)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_Q)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Q); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if(state->count > 3) {
        tap_code16(KC_F);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_F); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F)); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(KC_F))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F); register_code16(KC_F);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_F); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(KC_F))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_X);
        tap_code16(KC_X);
        tap_code16(KC_X);
    }
    if(state->count > 3) {
        tap_code16(KC_X);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_X); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_X)); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_X)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_X); register_code16(KC_X);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_X); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_X)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_X); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_C);
        tap_code16(KC_C);
        tap_code16(KC_C);
    }
    if(state->count > 3) {
        tap_code16(KC_C);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_C); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_C)); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_C); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_V)); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_SPACE));
        tap_code16(LGUI(KC_SPACE));
        tap_code16(LGUI(KC_SPACE));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_SPACE));
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_SPACE)); break;
        case SINGLE_HOLD: layer_on(1); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_SPACE)); register_code16(LGUI(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_SPACE)); register_code16(LGUI(KC_SPACE));
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
        case SINGLE_HOLD: layer_off(1); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_SPACE)); break;
    }
    dance_state[5].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
};

