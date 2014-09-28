#include "common.h"

extern "C" int main(void)
{
    setup_status_pinouts();
    pinMode(13, OUTPUT);

    while (1) {
        set_status(RED);
        digitalWriteFast(13, HIGH);
        delay(500);
        digitalWriteFast(13, LOW);
        delay(500);
    }
}