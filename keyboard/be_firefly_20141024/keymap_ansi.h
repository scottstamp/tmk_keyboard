
static const uint8_t PROGMEM keymaps[][MATRIX_COLS][MATRIX_ROWS] = {
    /* Layer 0: Standard ANSI layer */
    KEYMAP(F1, F2, F3, F4, F5, F6, F7)
};

enum macro_id {
    PASS0,
    PASS1,
    PASS2,
    PASS3,
    PASS4,
    PASS5,
    PASS6
}

static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_MACRO(PASS0),
    [1] = ACTION_MACRO(PASS1),
    [2] = ACTION_MACRO(PASS2),
    [3] = ACTION_MACRO(PASS3),
    [4] = ACTION_MACRO(PASS4),
    [5] = ACTION_MACRO(PASS5),
    [6] = ACTION_MACRO(PASS6)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    keyevent_t event = record->event;

    switch (id) {
        case PASS0:
        case PASS1:
        case PASS2:
        case PASS3:
        case PASS4:
        case PASS6:
        case PASS7:
            return MACRO_NONE;
            //return (event.pressed ?
                    //MACRO( I(50), T(LCTRL), T(LCTRL), W(255), W(255), T(ENTER), END) : MACRO_NONE);
            break;
        default:
            return MACRO_NONE;
    }
}
