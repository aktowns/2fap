#include "common.h"

void setup_status_pinouts() {
    pinMode(MULTI_BLUE, OUTPUT);
    pinMode(MULTI_RED, OUTPUT);
    pinMode(MULTI_GREEN, OUTPUT);
}

void set_multicoloured(int P1, int P2, int P3) {
    digitalWriteFast(MULTI_BLUE, P1);
    digitalWriteFast(MULTI_GREEN, P2);
    digitalWriteFast(MULTI_RED, P3);
}

void set_status(LED_STATUS stat) {
    switch (stat) {
        case BLUE:
            set_multicoloured(HIGH, LOW, LOW);
            break;
        case GREEN:
            set_multicoloured(LOW, HIGH, LOW);
            break;
        case RED:
            set_multicoloured(LOW, LOW, HIGH);
            break;
        case YELLOW:
            set_multicoloured(LOW, HIGH, HIGH);
            break;
        default:
            set_multicoloured(LOW, LOW, LOW);
            break;
    }
}