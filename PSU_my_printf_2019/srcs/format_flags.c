/*
** EPITECH PROJECT, 2019
** format_flags.c
** File description:
** Thomas Olry's format_flags.c made the 11/06/2019
*/

#include "../include/printf.h"

void format_x(va_list ap)
{
    my_putstr("0x");
    my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
}

void format_X(va_list ap)
{
    my_putstr("0X");
    my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
}

void format_o(va_list ap)
{
    my_putchar('0');
    my_putnbr_base(va_arg(ap, unsigned int), "01234567");
}
