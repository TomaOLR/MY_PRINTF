/*
** EPITECH PROJECT, 2019
** basic_flags.c
** File description:
** Thomas Olry's flag.c made the 11/04/2019
*/

#include "../include/printf.h"

void print_string(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void print_char(va_list ap)
{
    my_putchar(va_arg(ap, int));
}

void print_int(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void print_unsigned_int(va_list ap)
{
    my_putnbr_unsigned(va_arg(ap, unsigned int));
}

void print_binary(va_list ap)
{
    my_putnbr_base(va_arg(ap, unsigned int), "01");
}
