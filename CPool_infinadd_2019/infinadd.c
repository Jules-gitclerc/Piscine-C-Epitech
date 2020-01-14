/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** infinadd
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

int check_0_s(char const *s);

void swap_str(char **str1, char **str2)
{
    char *tmp = *str1;
    *str1 = *str2;
    *str2 = tmp;
}

char    *first_op(char const *s1, char const *s2, char *result)
{
    int len1 = my_strlen(s1) - 1;
    int len2 = my_strlen(s2) - 1;
    int num1 = 0;
    int num2 = 0;
    int retain = 0;

    for (int i = 0; len1 >= check_0_s(s1) || len2 >= check_0_s(s2) ||
        retain != 0; len1--, len2--, i++) {
        num1 = (len1 >= check_0_s(s1)) ? my_atoi(s1[len1]) : 0;
        num2 = (len2 >= check_0_s(s2)) ? my_atoi(s2[len2]) : 0;
        result[i] = ((num1 + num2 + retain) % 10) + 48;
        retain = (num1 + num2 + retain) / 10;
    }
    return (result);
}

char *second_op(char *s1, char *s2, char *result)
{
    int len1 = my_strlen(s1) - 1;
    int len2 = my_strlen(s2) - 1;
    char *result2 = malloc(my_strlen(result));

    s1[0] = '0';
    s1 = alloc_string(s1, result);
    s2 = alloc_string(s2, result);
    for (int i = 0; s2[i] != 0; i++)
        s2[i] = 9 - (s2[i] - 48) + 48;
    first_op(s1, s2, result);
    if (result[my_strlen(result) - 1] == '9')
        for (int i = 0; result[i] != '\0'; i++)
            result[i] = 9 - (result[i] - 48) + 48;
    else {
        s1[0] = '1';
        result[my_strlen(result) - 1] = '0';
        for (int i = 1; i < my_strlen(s1); i++)
            s1[i] = '0';
        for (int i = 0; s1[i] != '\0'; i++) {
            result[i + 1] += (s1[i] + result[i] - 48 - 48) / 10;
            result[i] = (s1[i] + result[i] - 48 - 48) % 10 + 48;
        }
    }
    return (result2);
}

char *my_infinadd(char const *s1, char const *s2)
{
    char *result = alloc(s1, s2);
    int out = 0;

    if (s1[0] == '-' && s2[0] != '-')
        swap_str(&s1, &s2);
    out = check_neg(s1, s2);
    if (out == 1)
        first_op(s1, s2, result);
    else if (out == 3 || out == 2) {
        swap_str(&s1, &s2);
        second_op(s1, s2, result);
    }
    else
        second_op(s1, s2, result);
    result = my_revstr(result);
    return (result);
}