#ifndef INC_TRAFFIC_LIGHT_H_
#define INC_TRAFFIC_LIGHT_H_

#include <stdint.h>
#include "global.h"

void traffic_set(uint8_t road, uint8_t color);
void traffic_set_phase(uint8_t phase);

#endif /* INC_TRAFFIC_LIGHT_H_ */
