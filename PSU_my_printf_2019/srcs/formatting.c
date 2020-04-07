/*
** EPITECH PROJECT, 2019
** formatting.c
** File description:
** Thomas Olry's formatting.c made the 11/11/2019
*/

#include "../include/printf.h"

void format_printf(char *str, int i, va_list ap)
{
    switch (str[i])
    {
    case 'x':
        format_x(ap);
        break;
    case 'X':
        format_X(ap);
        break;
    case 'i':
    case 'd':
        print_int(ap);
        break;
    case 's':
        print_string(ap);
        break;
    case 'c':
        print_char(ap);
        break;
    }
}

void format_printf_other(char *str, int i, va_list ap)
{
    switch (str[i])
    {
    case 'k':
        my_putstr("%#k");
        break;
    case '%':
        my_putchar('%');
        break;
    case 'u':
        print_unsigned_int(ap);
        break;
    case 'o':
        format_o(ap);
        break;
    case 'p':
        print_pointer(ap);
        break;
    case 'b':
        print_binary(ap);
        break;
    }
}

void formatting_long(char *str, int i, va_list ap)
{
    switch (str[i])
    {
    case 'x':
        print_long_x(ap);
        break;
    case 'X':
        print_long_X(ap);
        break;
    case 'i':
    case 'd':
        print_long_d(ap);
        break;
    case 'b':
        print_long_b(ap);
        break;
    case 'o':
        print_long_o(ap);
        break;
    }
}
