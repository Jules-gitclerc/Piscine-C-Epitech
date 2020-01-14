/*
** EPITECH PROJECT, 2019
** tests
** File description:
** test_my_strcapitalize.c
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalizee, testing_mi_strcapitalize)
{
    char s1[] = "world hello world";

    cr_assert_str_eq(my_strcapitalize(s1), my_strcapitalize(s1));
}