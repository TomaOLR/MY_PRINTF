/*
** EPITECH PROJECT, 2019
** test_printf_format.c
** File description:
** Thomas Olry's test_printf_format.c made the 11/11/2019
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/printf.h"
#include <stdio.h>

Test(my_printf, format, .init = redirect_all_std)
{
    my_printf("%#s %#c", "lol", '*');
    cr_assert_stdout_eq_str("lol *");
}

Test(my_printf, format_easy, .init = redirect_all_std)
{
    my_printf("%#k %#%");
    cr_assert_stdout_eq_str("%#k %");
}

Test(my_printf, format_lol, .init = redirect_all_std)
{
    my_printf("%#b %#u %#p", 10, 150, 10);
    cr_assert_stdout_eq_str("1010 150 0xA");
}

Test(my_printf, format_cool, .init = redirect_all_std)
{
    my_printf("%-d %+d -10 ", 42, 42);
    cr_assert_stdout_eq_str("42 +42 -10 ");
}
