#ifndef INC_LCD_H_
#define INC_LCD_H_

#include <stdint.h>

void lcd_init(void);
void lcd_clear(void);
void lcd_set_cursor(uint8_t row, uint8_t col);
void lcd_print(const char *s);
void lcd_print_num(int32_t n);

#endif /* INC_LCD_H_ */
