#include "main.h"

/**
 * x_print_buf_x - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: number of bytes printed.
 */
int x_print_buf_x(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
