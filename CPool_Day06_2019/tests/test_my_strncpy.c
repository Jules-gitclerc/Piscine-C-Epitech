/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_strncpy.c
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[6] = {0};
    my_strncpy(dest, "Hello World", 5);
    cr_assert_str_eq(dest, "Hello");
}