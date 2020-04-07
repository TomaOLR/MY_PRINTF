/*
** EPITECH PROJECT, 2019
** flags_nbr.c
** File description:
** Thomas Olry's flags_nbr.c made the 11/04/2019
*/

#include "../include/printf.h"

void print_octal(va_list ap)
{
    my_putnbr_base(va_arg(ap, unsigned int), "01234567");
}

void print_pointer(va_list ap)
{
    put_pointer(va_arg(ap, int));
}

void print_none_printable(va_list ap)
{
    none_printable(va_arg(ap, char *));
}

void print_hexa_maj(va_list ap)
{
    my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
}

void print_hexa_min(va_list ap)
{
    my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
}
