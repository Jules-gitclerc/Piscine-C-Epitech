/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_strstr.c
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, testing_strstr)
{
    char str[] = "hello world gentle\0";
    char to_find[] = "world\0";

    cr_assert_str_eq(my_strstr(str, to_find), strstr(str, to_find));
}