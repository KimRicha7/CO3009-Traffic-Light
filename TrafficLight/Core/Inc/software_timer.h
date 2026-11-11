#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include <stdint.h>

#define NUM_TIMERS 8

void    setTimer(uint8_t i, uint32_t ms);
uint8_t isTimerExpired(uint8_t i);
void    timerRun(void);

#endif /* INC_SOFTWARE_TIMER_H_ */
