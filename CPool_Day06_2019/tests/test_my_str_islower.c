/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_str_islower.c
*/

#include <criterion/criterion.h>
#include <ctype.h>

int	my_str_islower(char *str);

Test(my_islower, testing_mi_str_islower)
{
    int alpha;
    int i;
    char s1[] = "HeLlOWoRlD";

    for (i = 0; s1[i] != '\0'; i++) {
        if (islower(s1[i]) == 0) {
            alpha = 0;
            break;
        }
    }
    cr_assert_eq(my_str_islower(s1), alpha);
}