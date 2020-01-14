/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_isalpha.c
*/

#include <criterion/criterion.h>
#include <ctype.h>

int	my_str_isalpha(char *str);

Test(my_isalpha, testing_mi_str_isalpha)
{
    int alpha;
    int i;
    char s1[] = "HeLlO141WoRlD";

    for (i = 0; s1[i] != '\0'; i++) {
        if (isalpha(s1[i]) == 0) {
            alpha = 0;
            break;
        }
    }
    cr_assert_eq(my_str_isalpha(s1), alpha);
}