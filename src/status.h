#ifndef _STATUS_H
#define _STATUS_H

typedef enum { RED, GREEN, BLUE, YELLOW, BLANK } LED_STATUS;

void setup_status_pinouts();
void set_multicoloured(int P1, int P2, int P3);
void set_status(LED_STATUS stat);

#endif
