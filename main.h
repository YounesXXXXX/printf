#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int x_print_prg_x(va_list __attribute__((unused)), char *, unsigned int);
int x_print_chr_x(va_list arguments, char *buf, unsigned int ibuf);
int x_print_str_x(va_list arguments, char *buf, unsigned int ibuf);
int x_print_int_x(va_list arguments, char *buf, unsigned int ibuf);
int x_print_bnr_x(va_list arguments, char *buf, unsigned int ibuf);
int x_print_unt_x(va_list arguments, char *buf, unsigned int ibuf);
int x_print_oct_x(va_list arguments, char *buf, unsigned int ibuf);
int x_print_hex_x(va_list arguments, char *buf, unsigned int ibuf);
int x_print_upx_x(va_list arguments, char *buf, unsigned int ibuf);
int x_print_usr_x(va_list arguments, char *buf, unsigned int ibuf);
int x_print_add_x(va_list arguments, char *buf, unsigned int ibuf);
int x_print_rev_x(va_list arguments, char *buf, unsigned int ibuf);
int x_print_rot_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinlint_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinlunt_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinloct_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinlhex_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinlupx_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinhint_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinhunt_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinhoct_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinhhex_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinhupx_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinpint_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinnoct_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinnhex_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinnupx_x(va_list arguments, char *buf, unsigned int ibuf);
int x_prinsint_x(va_list arguments, char *buf, unsigned int ibuf);
int (*x_get_print_func_x(const char *s, int index))(va_list, char *, unsigned int);
int x_ev_print_func_x(const char *s, int index);
unsigned int x_handl_buf_x(char *buf, char c, unsigned int ibuf);
int x_print_buf_x(char *buf, unsigned int nbuf);
char *x_fill_binary_array_x(char *binary, long int int_in, int isneg, int limit);
char *x_fill_oct_array_x(char *bnr, char *oct);
char *x_fill_long_oct_array_x(char *bnr, char *oct);
char *x_fill_short_oct_array_x(char *bnr, char *oct);
char *x_fill_hex_array_x(char *bnr, char *hex, int isupp, int limit);

#endif
