/*
** EPITECH PROJECT, 2019
** tests
** File description:
** test_my_strncmp.c
*/

#include <criterion/criterion.h>

int	my_strncmp(char const *s1, char const *s2, int n);

Test(my_strcmp, testing_strcmp)
{
    char s1[] = "world";
    char s2[] = "hello";
    char s3[] = "ABV123";
    char s4[] = "A6";

    cr_assert_eq(my_strncmp(s1, s2, 3), strncmp(s1, s2, 3));
    cr_assert_eq(my_strncmp(s3, s4, 20), strncmp(s3, s4, 20));
    cr_assert_eq(my_strncmp(s3, s4, 0), strncmp(s3, s4, 0));
}