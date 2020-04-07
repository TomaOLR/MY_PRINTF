/*
** EPITECH PROJECT, 2019
** test_formatting_long.c
** File description:
** Thomas Olry's test_formatting_long.c made the 11/11/2019
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/printf.h"

Test(my_printf, simple_test_long, .init = redirect_all_std)
{
    my_printf("%lx %lX %lo %ld %li %lb ", 42, 84, 42, 84, 42, 84);
    cr_assert_stdout_eq_str("2a 54 52 84 42 1010100");
}
