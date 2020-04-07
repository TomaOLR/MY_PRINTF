/*
** EPITECH PROJECT, 2019
** formatting_long.c
** File description:
** Thomas Olry's formatting_long.c made the 11/11/2019
*/

#include "../include/printf.h"

void print_long_x(va_list ap)
{
    my_putnbr_base_long(va_arg(ap, unsigned long long int), "0123456789abcdef");
}

void print_long_X(va_list ap)
{
    my_putnbr_base_long(va_arg(ap, unsigned long long int), "0123456789ABCDEF");
}

void print_long_d(va_list ap)
{
    my_putnbr_base_long(va_arg(ap, unsigned long long int), "0123456789");
}

void print_long_b(va_list ap)
{
    my_putnbr_base_long(va_arg(ap, unsigned long long int), "01");
}

void print_long_o(va_list ap)
{
    my_putnbr_base_long(va_arg(ap, unsigned long long int), "01234567");
}
