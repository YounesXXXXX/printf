#include "main.h"

/**
 * x_fill_hex_array_x - writes the character c to stdout
 *
 * @bnr: array where is stored the binary.
 * @hex: array where is stored the hexadecimal.
 * @isupp: integer that determines if the hexadecimal array is
 * in uppercase or lowercase letter.
 * @limit: size of hex
 * Return: binary array.
 */
char *x_fill_hex_array_x(char *bnr, char *hex, int isupp, int limit)
{
	int op, i, j, x_toletter_x;

	hex[limit] = '\0';
	if (isupp)
		x_toletter_x = 55;
	else
		x_toletter_x = 87;
	for (i = (limit * 4) - 1; i >= 0; i--)
	{
		for (op = 0, j = 1; j <= 8; j *= 2, i--)
			op = ((bnr[i] - '0') * j) + op;
		i++;
		if (op < 10)
			hex[i / 4] = op + 48;
		else
			hex[i / 4] = op + x_toletter_x;
	}
	return (hex);
}
