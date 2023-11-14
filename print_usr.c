#include "main.h"

/**
 * x_print_usr_x - prints a string and values of
 * non-printed chars
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int x_print_usr_x(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned char *str;
	char *hexadecimal, *binary;
	unsigned int i, sum, op;

	str = va_arg(arguments, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			ibuf = x_handl_buf_x(buf, '\\', ibuf);
			ibuf = x_handl_buf_x(buf, 'x', ibuf);
			op = str[i];
			binary = x_fill_binary_array_x(binary, op, 0, 32);
			hexadecimal = x_fill_hex_array_x(binary, hexadecimal, 1, 8);
			ibuf = x_handl_buf_x(buf, hexadecimal[6], ibuf);
			ibuf = x_handl_buf_x(buf, hexadecimal[7], ibuf);
			sum += 3;
		}
		else
			ibuf = x_handl_buf_x(buf, str[i], ibuf);
	}
	free(binary);
	free(hexadecimal);
	return (i + sum);
}
