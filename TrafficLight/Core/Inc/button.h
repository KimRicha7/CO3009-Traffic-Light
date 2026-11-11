#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include <stdint.h>

#define NUM_BUTTONS 4

void    button_reading(void);
uint8_t isButtonPressed(uint8_t i);
uint8_t isButtonLongPressed(uint8_t i);
uint8_t isButtonRepeat(uint8_t i);

#endif /* INC_BUTTON_H_ */
