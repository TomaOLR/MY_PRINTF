/*
** EPITECH PROJECT, 2019
** all_flags.c
** File description:
** Thomas Olry's all_flags.c made the 11/05/2019
*/

#include "../include/printf.h"

void flags_other(char *str, int i, va_list ap)
{
    switch (str[i])
    {
    case 's':
        print_string(ap);
        break;
    case 'c':
        print_char(ap);
        break;
    case 'p':
        print_pointer(ap);
        break;
    case 'S':
        print_none_printable(ap);
        break;
    }
}

void flags_again(char *str, int i, va_list ap)
{
    switch (str[i])
    {
    case '%':
        my_putchar('%');
        break;
    case 'k':
        my_putstr("%k");
        break;
    case 'x':
        print_hexa_min(ap);
        break;
    case 'X':
        print_hexa_maj(ap);
        break;
    }
}

void flags_nbr(char *str, int i, va_list ap)
{
    switch (str[i])
    {
    case 'u':
        print_unsigned_int(ap);
        break;
    case 'b':
        print_binary(ap);
        break;
    case 'o':
        print_octal(ap);
        break;
    case 'i':
    case 'd':
        print_int(ap);
        break;
    }
}

void flags(char *str, int i, va_list ap)
{
    if (str[i - 1] == '%') {
        flags_nbr(str, i, ap);
        flags_other(str, i, ap);
        flags_again(str, i, ap);
    }
    if (str[i - 2] == '%' && str[i - 1] == '#') {
        format_printf(str, i, ap);
        format_printf_other(str, i, ap);
    }
    if (str[i - 2] == '%' && (str[i - 1] == '-' || str[i - 1] == '+'))
        formatting_d(ap, str[i - 1]);
    if (str[i - 2] == '%' && str[i - 1] == ' ')
        print_int(ap);
    if (str[i - 2] == '%' && str[i - 1] == 'l')
        formatting_long(str, i, ap);
}
