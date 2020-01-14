/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_str_isprintable.c
*/

#include <criterion/criterion.h>
#include <criterion/criterion.h>
#include <stdio.h>

int	my_str_isprintable(char *str);

Test(my_str_isprintable, testing_my_str_isprintable)
{
    char s1[] = "HeLlOWoRlD";
    char *s2 = "yiiiii\t";

    cr_assert_eq(my_str_isprintable(s1), my_str_isprintable(s1));
    cr_assert_eq(my_str_isprintable(s2), my_str_isprintable(s2));
}