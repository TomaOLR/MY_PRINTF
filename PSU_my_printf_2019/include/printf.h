/*
** EPITECH PROJECT, 2019
** printf.h
** File description:
** Thomas Olry's printf.h made the 11/04/2019
*/

#ifndef PRINTf_H_
#define PRINTF_H_

#include <stdarg.h>

void print_string(va_list ap);
void print_char(va_list ap);
void print_int(va_list ap);
void print_unsigned_int(va_list ap);
void print_binary(va_list ap);
void print_octal(va_list ap);
void print_octal_format(va_list ap);
void print_hexa_min(va_list ap);
void print_hexa_maj(va_list ap);
void print_pointer(va_list ap);
void print_none_printable(va_list ap);
void format_x(va_list ap);
void format_X(va_list ap);
void format_o(va_list ap);
void flags_other(char *str, int i, va_list ap);
void flags_int(char *str, int i, va_list ap);
void flags(char *str, int i, va_list ap);
void format_printf(char *str, int i, va_list ap);
void format_printf_other(char *str, int i, va_list ap);
void formatting_long(char *str, int i, va_list ap);
void my_putnbr_base_long(long long int nb, char *base);
void redirect_all_std(void);
void formatting_d(va_list ap, char c);
void formatting_space(va_list ap);
void print_long_x(va_list ap);
void print_long_X(va_list ap);
void print_long_d(va_list ap);
void print_long_b(va_list ap);
void print_long_o(va_list ap);

void my_putchar(char c);
void my_put_nbr(int nb);
void my_putnbr_unsigned(unsigned int nb);
void my_putnbr_base(int nb, char *base);
void my_putnbr_octal(int nb, char *base);
void put_pointer(int nb);
void none_printable(char *str);
int my_putstr(char *const str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

void my_printf(char *str, ...);

#endif /* PRINTF_H_  */
