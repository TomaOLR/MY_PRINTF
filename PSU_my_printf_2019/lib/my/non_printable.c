/*
** EPITECH PROJECT, 2019
** print_non_printable.c
** File description:
** Thomas Olry's print_non_printable.c made the 11/05/2019
*/

#include <string.h>

void my_putchar(char c);
void my_putnbr_base(int nb, char *base);
void my_putstr(char const *str);

void none_printable(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 37 || str[i] >= 127 ) {
            my_putchar('\\');
            if (str[i] < 8)
                my_putstr("00");
            if (str[i] > 8 && str[i] < 37)
                my_putchar('0');
            my_putnbr_base(str[i], "01234567");
        } else
            my_putchar(str[i]);
    }
}
