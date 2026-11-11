#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include <stdint.h>

enum Mode {
    MODE_AUTO = 0,
    MODE_MANUAL,
    MODE_TUNING
};

enum Color {
    RED = 0,
    AMBER,
    GREEN,
    OFF
};

enum Phase {
    R1G2 = 0,
    R1A2,
    G1R2,
    A1R2,
    ALL_RED,
    ALL_AMBER,
    ALL_OFF
};

extern uint8_t  g_mode;
extern uint16_t g_red_s;
extern uint16_t g_green_s;
extern uint16_t g_amber_s;
extern uint8_t  g_phase;
extern uint16_t g_countdown_s;

#endif /* INC_GLOBAL_H_ */
