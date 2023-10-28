// Console IO is a wrapper between the actual in and output and the console code
// In an embedded system, this might interface to a UART driver.

#include "usart.h"
#include "consoleIo.h"
#include <stdio.h>

//use the windows conio.h for kbhit, or a POSIX reproduction
#ifdef _WIN32
#include <conio.h>
#else
//#include "conioCompat.h"
#endif

extern UART_HandleTypeDef huart4;

//static int getch_noblock() {
//    if (_kbhit())
//        return _getch();
//    else
//        return EOF;
//}

eConsoleError ConsoleIoInit(void)
{
	return CONSOLE_SUCCESS;
}
eConsoleError ConsoleIoReceive(uint8_t *buffer, const uint32_t bufferLength, uint32_t *readLength)
{
    uint32_t i = 0;
    uint8_t rxByte = 0;


 while (HAL_UART_GetState(&huart4) != HAL_UART_STATE_READY);

 if (HAL_OK != HAL_UART_Receive(&huart4, &rxByte, 1, HAL_MAX_DELAY))
 {
  return CONSOLE_ERROR;
 }

 /* Send echo */
 HAL_UART_Transmit(&huart4, (uint8_t*)&rxByte, 1, HAL_MAX_DELAY);

 buffer[i] = rxByte;
 i++;


 *readLength = i;

 return CONSOLE_SUCCESS;
}

eConsoleError ConsoleIoSendString(const char *buffer)
{
	printf("%s", buffer);
	return CONSOLE_SUCCESS;
}

