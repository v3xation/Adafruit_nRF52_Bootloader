/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 gpshead (krypto.org) for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _LW_NRF52840_FLEX_H_
#define _LW_NRF52840_FLEX_H_

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           1  // TODO(gpshead): support 0.
#define LED_PRIMARY_PIN       _PINNUM(1, 11)  // Red
#define LED_STATE_ON          0

//#define LED_RGB_RED_PIN       _PINNUM(0, 23)
//#define LED_RGB_GREEN_PIN     _PINNUM(0, 22)
//#define LED_RGB_BLUE_PIN      _PINNUM(0, 24)
#define BOARD_RGB_BRIGHTNESS  0x404040
/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
// TODO(gpshead): simplify, have code support 0.  double reset only.
#define BUTTONS_NUMBER        2  // none connected at all
#define BUTTON_1              _PINNUM(0, 18)  // unusable: RESET
#define BUTTON_2              _PINNUM(0, 19)  // no connection
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

// Same as the MDK Dongle TODO
#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x0029
#define USB_DESC_CDC_ONLY_PID  0x0029

// Used as model string in OTA mode
#define BLEDIS_MANUFACTURER   "LiquidWire"
#define BLEDIS_MODEL          "LiquidWire NRF52840 Flexible Microcontroller"

#define UF2_PRODUCT_NAME   "LiquidWire nRF52840 Flex MCU"
#define UF2_VOLUME_LABEL   "LW_FlexMCU"
#define UF2_BOARD_ID       "nRF52840-Flex-v1"

#define UF2_INDEX_URL      "https://https://www.liquidwire.com/"

#endif /* _LW_NRF52840_FLEX_H_ */
