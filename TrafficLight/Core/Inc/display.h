#ifndef INC_DISPLAY_H_
#define INC_DISPLAY_H_

#include <stdint.h>

void display_refresh(void);
void display_message(const char *line2, uint16_t ms);

#endif /* INC_DISPLAY_H_ */
