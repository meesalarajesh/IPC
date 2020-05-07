/*
 * lcd_header.h
 *
 *  Created on: May 7, 2020
 *      Author: DEADM
 */

#ifndef INC_LCD_DRIVER_H_
#define INC_LCD_DRIVER_H_

#include "stdint.h"

/* LCD control pins */
#define PIN_RS                 (1 << 0)
#define PIN_EN                 (1 << 2)
#define BACKLIGHT              (1 << 3)

/* I2C Module Address, this is Hardware dependent */
#define I2C_SLAVE_ADDRESS      0x4E

/*LCD Commands*/
#define LCD_FUNCTION_SET1      0x33
#define LCD_FUNCTION_SET2      0x32
#define LCD_4BIT_2LINE_MODE    0x28
#define LCD_DISP_CURS_ON       0x0E
#define LCD_DISP_ON_CURS_OFF   0x0C  //Display on, cursor off
#define LCD_DISPLAY_OFF        0x08
#define LCD_DISPLAY_ON         0x04
#define LCD_CLEAR_DISPLAY      0x01
#define LCD_ENTRY_MODE_SET     0x04
#define LCD_INCREMENT_CURSER   0x06
#define LCD_SET_ROW1_COL1      0x80  //Force cursor to beginning ( 1st line)
#define LCD_SET_ROW2_COL1      0xC0  //Force cursor to beginning ( 2nd line)
#define LCD_MOVE_DISPLAY_LEFT  0x18
#define LCD_MOVE_DISPLAY_RIGHT 0x1C

/**
 * @brief  Initializes LCD
 * @param  None
 * @retval None
 */
void LCD_Init(void);

/**
 * @brief Send Command to LCD
 * @param cmd : LCD commands
 * @retval None
 */
void LCD_Send_Cmd(uint8_t cmd);

/**
 * @brief Send Data to LCD
 * @param data: Data to be sent to LCD
 * @retval None
 */
void LCD_Send_Data(uint8_t data);


/**
 * @brief Send Strings to LCD
 * @param str: pointer to strings
 * @retval None
 */
void LCD_Send_String(char *str);


/**
 * @brief Clears screen first, then displays the given string
 * @param str: pointer to strings
 * @retval None
 */
void LCD_Clear_Then_Display(char *str);



/**
 * @brief Display the strings on Line1
 * @param str: pointer to strings
 * @retval None
 */
void LCD_Send_String_On_Line1(char *str);


/**
 * @brief Display the strings on Line2
 * @param str: pointer to strings
 * @retval None
 */
void LCD_Send_String_On_Line2(char *str);

/**
* @brief Set the time
* @param None
* @retval None
*/
void set_time(void);

/**
* @brief Get the time
* @param None
* @retval None
*/

void get_time(void);

/**
* @brief Display the time and date
* @param None
* @retval None
*/
void display_time(void);

#endif /* INC_LCD_DRIVER_H_ */
