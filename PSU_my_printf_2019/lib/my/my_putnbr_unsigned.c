/*
** EPITECH PROJECT, 2019
** my_putnbr_unsigned.c
** File description:
** Thomas Olry's my_putnbr_unsigned.c made the 11/04/2019
*/

void my_putchar(char c);

void my_putnbr_unsigned(unsigned int nb)
{
    int mod = 0;

    if (nb <= 9 && nb >= 0)
        my_putchar(nb + '0');
    if (nb > 9) {
        mod = nb % 10;
        my_putnbr_unsigned(nb / 10);
        my_putchar(mod + '0');
    }
}
