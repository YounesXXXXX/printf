#include "main.h"

/**
 * x_handl_buf_x - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int x_handl_buf_x(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		x_print_buf_x(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
