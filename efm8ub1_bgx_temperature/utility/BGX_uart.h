/*
 * BGX_uart.h
 *
 *  Created on: Jul 14, 2018
 *      Author: padorris
 */

#ifndef BGX_UART_H_
#define BGX_UART_H_
#include <compiler_defs.h>
uint8_t BGX_Write(const char*);
uint8_t BGX_getResponse(void);
void listenerOn(void);
void listenerOff(void);
void listenerReset(void);
bool listenerFoundLineEnd(void);
uint8_t BGX_didReceiveLine(const char *buff);
extern SI_SEGMENT_VARIABLE(BGX_transmitBuffer[30], uint8_t, SI_SEG_XDATA);
extern SI_SEGMENT_VARIABLE(BGX_receiveBuffer[90], uint8_t, SI_SEG_XDATA);
#endif /* BGX_UART_H_ */
