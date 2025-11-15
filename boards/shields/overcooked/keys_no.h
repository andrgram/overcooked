#pragma once

#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ | │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ \ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ø │ Æ │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define NO_PIPE  GRAVE // `
#define NO_N1    N1    // 1
#define NO_N2    N2    // 2
#define NO_N3    N3    // 3
#define NO_N4    N4    // 4
#define NO_N5    N5    // 5
#define NO_N6    N6    // 6
#define NO_N7    N7    // 7
#define NO_N8    N8    // 8
#define NO_N9    N9    // 9
#define NO_N0    N0    // 0
#define NO_PLUS  MINUS // +
#define NO_BSLS  EQUAL // (backslash)
// Row 2
#define NO_Q    Q    // Q
#define NO_W    W    // W
#define NO_E    E    // E
#define NO_R    R    // R
#define NO_T    T    // T
#define NO_Y    Y    // Y
#define NO_U    U    // U
#define NO_I    I    // I
#define NO_O    O    // O
#define NO_P    P    // P
#define NO_AA   LBKT // Å
#define NO_UMLT RBKT // ¨
// Row 3
#define NO_A    A    // A
#define NO_S    S    // S
#define NO_D    D    // D
#define NO_F    F    // F
#define NO_G    G    // G
#define NO_H    H    // H
#define NO_J    J    // J
#define NO_K    K    // K
#define NO_L    L    // L
#define NO_OE   SEMI // Ø
#define NO_AE   SQT  // Æ
#define NO_SQT  NUHS // '
// Row 4
#define NO_LT    NUBS  // <
#define NO_Z     Z     // Z
#define NO_X     X     // X
#define NO_C     C     // C
#define NO_V     V     // V
#define NO_B     B     // B
#define NO_N     N     // N
#define NO_M     M     // M
#define NO_COMMA COMMA // ,
#define NO_DOT   DOT   // .
#define NO_MINUS FSLH  // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define NO_SCT   LS(NO_PIPE)  // §
#define NO_EXCL  LS(NO_N1)    // !
#define NO_DQT   LS(NO_N2)    // "
#define NO_HASH  LS(NO_N3)    // #
#define NO_CURR  LS(NO_N4)    // ¤
#define NO_PRCNT LS(NO_N5)    // %
#define NO_AMPS  LS(NO_N6)    // &
#define NO_FSLH  LS(NO_N7)    // /
#define NO_LPAR  LS(NO_N8)    // (
#define NO_RPAR  LS(NO_N9)    // )
#define NO_EQL   LS(NO_N0)    // =
#define NO_QMRK  LS(NO_PLUS)  // ?
#define NO_GRAVE LS(NO_BSLS)  // `
// Row 2
#define NO_CARET LS(NO_UMLT) // ^
// Row 3
#define NO_ASTRK LS(NO_SQT)  // *
// Row 4
#define NO_GT    LS(NO_LT)    // >
#define NO_SEMI  LS(NO_COMMA) // ;
#define NO_COLON LS(NO_DOT)   // :
#define NO_UNDER LS(NO_MINUS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │ € │   │ { │ [ │ ] │ } │   │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define NO_AT    RA(NO_N2) // @
#define NO_POUND RA(NO_N3) // £
#define NO_DLLR  RA(NO_N4) // $
#define NO_EURO  RA(NO_N5) // €
#define NO_RBRC  RA(NO_N7) // {
#define NO_LBRKT RA(NO_N8) // [
#define NO_RBRKT RA(NO_N9) // ]
#define NO_LBRC  RA(NO_N0) // }
#define NO_ACUTE RA(NO_GRAVE) // ´
// Row 2
#define NO_TILDE RA(NO_UMLT) // ~
// Row 4
#define NO_MU    RA(NO_M)    // µ