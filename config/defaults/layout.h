/*
 * Copyright (c) 2023 Hannes Hasselbring
 *
 * SPDX-License-Identifier: MIT
 */

#define DEFAULT_LEFT_R1     &kp Q       &kp W       &kp F       &kp P       &kp G
#define DEFAULT_RIGHT_R1    &kp J       &kp L       &kp U       &kp Y       &kp SEMI
#define DEFAULT_LEFT_R2     &hm LCTRL A &hm LALT R  &hm LGUI S  &hm LSHFT T &kp D
#define DEFAULT_RIGHT_R2    &kp H       &hm RSHFT N &hm RGUI E  &hm RALT I  &hm RCTRL O
#define DEFAULT_LEFT_R3     &kp Z       &kp X       &kp C       &kp V       &kp B
#define DEFAULT_RIGHT_R3    &kp K       &kp M       &kp COMMA   &kp DOT     &kp FSLH
#define DEFAULT_LEFT_THUMB  &mt RGUI SQT    &lt 1 RET
#define DEFAULT_RIGHT_THUMB &lt 2 SPACE  &mt RALT TAB

#define LOWER_LEFT_R1       &kp EXCL    &kp AT      &kp HASH    &kp DLLR        &kp PRCNT
#define LOWER_RIGHT_R1      &kp CARET   &kp AMPS    &kp ASTRK   &kp LPAR        &kp RPAR 
#define LOWER_LEFT_R2       &kp UNDER   &kp PLUS    &kp LBRC    &kp RBRC        &kp PIPE
#define LOWER_RIGHT_R2      &kp LEFT    &kp DOWN    &kp UP      &kp RIGHT       &kp SEMI 
#define LOWER_LEFT_R3       &kp ESC     &kp LGUI    &kp LALT    &kp TAB         &kp DQT 
#define LOWER_RIGHT_R3      &kp HOME    &kp END     &kp PAGE_UP &kp PAGE_DOWN   &kp PSCRN
#define LOWER_LEFT_THUMB    &trans      &trans 
#define LOWER_RIGHT_THUMB   &mo 3       &trans

#define RAISE_LEFT_R1       &kp N1          &kp N2      &kp N3      &kp N4      &kp N5
#define RAISE_RIGHT_R1      &kp N6          &kp N7      &kp N8      &kp N9      &kp N0
#define RAISE_LEFT_R2       &kp MINUS       &kp EQUAL   &kp LBKT    &kp RBKT    &kp BSLH
#define RAISE_RIGHT_R2      &kp LG(GRAVE)   &none       &kp GRAVE   &kp TILDE   &kp COLON
#define RAISE_LEFT_R3       &kp ESC         &kp LCTRL   &kp LALT    &kp LGUI    &kp DOUBLE_QUOTES
#define RAISE_RIGHT_R3      &kp TAB         &trans      &kp RCTRL   &kp RALT    &kp ENTER
#define RAISE_LEFT_THUMB    &trans  &mo 3 
#define RAISE_RIGHT_THUMB   &trans  &trans

#define ADJUST_LEFT_R1      &kp F1          &kp F2      &kp F3          &kp F4          &kp F5
#define ADJUST_RIGHT_R1     &bt BT_SEL 0    &bt BT_SEL 1 &bt BT_SEL 2   &bt BT_SEL 3    &bt BT_SEL 4 
#define ADJUST_LEFT_R2      &kp F6          &kp F7      &kp F8          &kp F9          &kp F10
#define ADJUST_RIGHT_R2     &none           &none       &none           &none           &none
#define ADJUST_LEFT_R3      &kp F11         &kp F12     &none           &none           &macro_screenshot 
#define ADJUST_RIGHT_R3     &kp LG(TAB)     &kp LG(GRAVE) &none         &sys_reset      &bootloader
#define ADJUST_LEFT_THUMB   &trans  &trans
#define ADJUST_RIGHT_THUMB  &trans  &trans