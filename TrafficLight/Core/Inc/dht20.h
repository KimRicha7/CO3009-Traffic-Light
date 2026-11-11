#ifndef INC_DHT20_H_
#define INC_DHT20_H_

#include <stdint.h>

void     dht20_init(void);
void     dht20_trigger(void);
void     dht20_read(void);
int16_t  dht20_get_temp_x10(void);
uint16_t dht20_get_hum_x10(void);
uint8_t  dht20_ok(void);

#endif /* INC_DHT20_H_ */
