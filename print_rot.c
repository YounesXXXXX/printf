#include "main.h"

/**
 * x_print_rot_x - writes the str in ROT13
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */

int x_print_rot_x(va_list arguments, char *buf, unsigned int ibuf)
{
	char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	unsigned int i, j, k;
	char nill[] = "(avyy)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = x_handl_buf_x(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
	{
		for (k = j = 0; alf[j]; j++)
		{
			if (str[i] == alf[j])
			{
				k = 1;
				ibuf = x_handl_buf_x(buf, rot[j], ibuf);
				break;
			}
		}
		if (k == 0)
			ibuf = x_handl_buf_x(buf, str[i], ibuf);
	}
	return (i);
}
			ibuf = x_handl_buf_x(buf, str[i], ibuf);
	}
	return (i);
}
