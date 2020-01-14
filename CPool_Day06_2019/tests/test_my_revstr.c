/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_revstr.c
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, rev_string)
{
    char dest[7] = "coucou\0";
    my_revstr(dest);
    cr_assert_str_eq(dest, "uocuoc");
}