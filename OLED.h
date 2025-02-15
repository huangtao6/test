#ifndef _OLED_H_
#define _OLED_H_
#include <stdint.h>

// OLED初始化
void OLED_Init(void);

// OLED发送命令
void OLED_WriteCommand(uint8_t command);

// OLED发送数据
void OLED_WriteData(uint8_t data);

// OLED显示位置
void OLED_SetCursor(uint8_t x, uint8_t page);

// OLED 清屏
void OLED_Clear(void);

// OLED显示字符
void OLED_ShowChar(uint8_t x, uint8_t y, char mChar, uint8_t fontSize);

// OLED显示图片
void OLED_ShowImage(uint8_t x, uint8_t y, uint8_t width, uint8_t height, const uint8_t *Image);

// void OLED_ShowChinese(uint8_t x, uint8_t y, char *chinese);

void OLED_ShowChinese(uint8_t X, uint8_t Page, char *Chinese);

void OLED_ShowString(uint8_t X, uint8_t Page, char *String, uint8_t FontSize);

#endif
