#include "main.h"
#include <stdio.h>
/**
 * x_print_chr_x - writes the character c to stdout
 * @arguments: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int x_print_chr_x(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	x_handl_buf_x(buf, c, ibuf);

	return (1);
}
