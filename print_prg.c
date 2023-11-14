#include "main.h"
#include <stdio.h>

/**
 * x_print_prg_x - writes the character c to stdout
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */
int x_print_prg_x(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	x_handl_buf_x(buf, '%', i);

	return (1);
}
