/*
** EPITECH PROJECT, 2019
** test_printf.c
** File description:
** Thomas Olry's test_printf.c made the 11/05/2019
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "printf.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("The end of the %s%c\n", "F***ing Worl", 'd');
    cr_assert_stdout_eq_str("The end of the F***ing World\n");
}

Test(my_printf, simple_nbr, .init = redirect_all_std)
{
    my_printf("%d\n%i\n%u\n",-10, 150, 3456567546);
    cr_assert_stdout_eq_str("-10\n150\n3456567546\n");
}

Test(my_printf, binary_octal, .init = redirect_all_std)
{
    my_printf("%o, %b %k", 897, 16789);
    cr_assert_stdout_eq_str("1601, 100000110010101 %k");
}
