/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** Thomas Olry's my_printf.c made the 11/04/2019
*/

#include "../include/printf.h"

void my_printf2(char *str, int i, va_list ap)
{
    if ((str[i] == '#') && str[i - 1] != '%')
        my_putchar(str[i + 1]);
    if ((str[i - 1] == '%' && str[i - 2] == '%'))
        my_putchar(str[i]);
    if (str[i] == ' ' && str[i - 1] == '%')
        my_putchar(str[i]);
}

void my_printf(char *str, ...)
{
    va_list ap;

    va_start(ap, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i - 2] == '%') {
            print_int(ap);
            i++;
        }
        if ((str[i - 1] != '%' && str[i] != '%') && str[i - 1] != '#' &&
            str[i - 1] != '-' && str[i - 1] != '+' && str[i - 1] != 'l')
            my_putchar(str[i]);
        if ((str[i - 1] == '-' || str[i - 1] == '+' || str[i - 1] == 'l')
            && str[ i - 2] != '%')
            my_putchar(str[i]);
        my_printf2(str, i, ap);
        flags(str, i, ap);
    }
    va_end(ap);
}
