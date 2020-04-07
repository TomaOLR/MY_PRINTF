/*
** EPITECH PROJECT, 2019
** foramt.c
** File description:
** Thomas Olry's test.c made the 11/11/2019
*/

#include "../include/printf.h"

void formatting_d(va_list ap, char c)
{
    if (c == '-')
        print_int(ap);
    else if (c == '+') {
        my_putchar('+');
        print_int(ap);
    }
    else
        print_int(ap);
}
