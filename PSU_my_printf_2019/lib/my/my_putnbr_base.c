/*
** EPITECH PROJECT, 2019
** my_putnbr_base.c
** File description:
** Thomas Olry's my_putnbr_base.c made the 11/04/2019
*/

int my_strlen(char const *str);
void my_putchar(char c);

void my_putnbr_base_long(long long int nb, char *base)
{
    int len = my_strlen(base);

    if (nb > 0) {
        my_putnbr_base_long(nb / len, base);
        my_putchar(base[nb % len]);
    }
}

void my_putnbr_base(unsigned int nb, char *base)
{
    int len = my_strlen(base);

    if (nb > 0) {
        my_putnbr_base(nb / len, base);
        my_putchar(base[nb % len]);
    }
}
