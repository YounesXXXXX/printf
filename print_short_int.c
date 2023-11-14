#include "main.h"

/**
 * x_prinhint_x - prints a short integer
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int x_prinhint_x(va_list arguments, char *buf, unsigned int ibuf)
{
	short int int_input;
	unsigned short int int_in, int_temp, i, div, isneg;

	int_input = va_arg(arguments, int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuf = x_handl_buf_x(buf, '-', ibuf);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}
	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = x_handl_buf_x(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (i + isneg);
}
