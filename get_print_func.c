#include "main.h"
/**
 * x_get_print_func_x - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*getprint_func(const char *s, int index))(va_list, char *,
				unsigned int)
{
	print_t pr[] = {
		{"c", x_print_chr_x}, {"s", x_print_str_x},
		{"i", x_print_int_x}, {"d", x_print_int_x},
		{"b", x_print_bnr_x}, {"u", x_print_unt_x},
		{"o", x_print_oct_x}, {"x", x_print_hex_x},
		{"X", x_print_upx_x}, {"S", x_print_usr_x},
		{"p", x_print_add_x}, {"li", x_prinlint_x},
		{"ld", x_prinlint_x}, {"lu", x_prinlunt_x},
		{"lo", x_prinloct_x}, {"lx", x_prinlhex_x},
		{"lX", x_prinlupx_x}, {"hi", x_prinhint_x},
		{"hd", x_prinhint_x}, {"hu", x_prinhunt_x},
		{"ho", x_prinhoct_x}, {"hx", x_prinhhex_x},
		{"hX", x_prinhupx_x}, {"#o", x_prinnoct_x},
		{"#x", x_prinnhex_x}, {"#X", x_prinnupx_x},
		{"#i", x_print_int_x}, {"#d", x_print_int_x},
		{"#u", x_print_unt_x}, {"+i", x_prinpint_x},
		{"+d", x_prinpint_x}, {"+u", x_print_unt_x},
		{"+o", x_print_oct_x}, {"+x", x_print_hex_x},
		{"+X", x_print_upx_x}, {" i", x_prinsint_x},
		{" d", x_prinsint_x}, {" u", x_print_unt_x},
		{" o", x_print_oct_x}, {" x", x_print_hex_x},
		{" X", x_print_upx_x}, {"R", x_print_rot_x},
		{"r", x_print_rev_x}, {"%", x_print_prg_x},
		{"l", x_print_prg_x}, {"h", x_print_prg_x},
		{" +i", x_prinpint_x}, {" +d", x_prinpint_x},
		{"+ i", x_prinpint_x}, {"+ d", x_prinpint_x},
		{" %", x_print_prg_x}, {NULL, NULL},
	};
	int i = 0, j = 0, x_first_index_x;

	x_first_index_x = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = x_first_index_x;
		}
	}
	return (pr[i].f);
}
