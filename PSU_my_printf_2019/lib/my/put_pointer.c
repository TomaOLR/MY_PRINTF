/*
** EPITECH PROJECT, 2019
** test.c
** File description:
** Thomas Olry's test.c made the 11/04/2019
*/

#include <stdio.h>

int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_putnbr_base(int nb, char *base);

void put_pointer(int nb)
{
    if (nb != 0) {
        my_putstr("0x");
        my_putnbr_base(nb, "0123456789abcdef");
    } else
        my_putstr("(nil)");
}
