/*
** EPITECH PROJECT, 2019
** test_printf.c
** File description:
** Thomas Olry's test_printf.c made the 11/05/2019
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "printf.h"

Test(my_printf, simple_pointer, .init = redirect_all_std)
{
    my_printf("%p, %p", 0, 1);
    cr_assert_stdout_eq_str("(nil), 0x1");
}

Test(my_printf, test_hexa, .init = redirect_all_std)
{
    my_printf("%X, %x", 4294967295, 1871872);
    cr_assert_stdout_eq_str("FFFFFFFF, 1c9000");
}

Test(my_printf, test_non_printable, .init = redirect_all_std)
{
    char str[5];
    char str2[5];
    my_strcpy(str, "toto");
    my_strcpy(str2, "toto");
    str[1] = 6;
    str2[1] = 10;
    my_printf("%S\n%S", str, str2);
    cr_assert_stdout_eq_str("t\\006to\nt\\012to");
}

Test(my_printf, test_modulo, .init = redirect_all_std)
{
    my_printf("%%Woah");
    cr_assert_stdout_eq_str("%Woah");
}

Test(my_printf, test_format, .init = redirect_all_std)
{
    my_printf("%#d\n%#x\n%#X\n%#i\n%#o", 42, 1, 2, 42, 10);
    cr_assert_stdout_eq_str("42\n0x1\n0X2\n42\n012");
}
