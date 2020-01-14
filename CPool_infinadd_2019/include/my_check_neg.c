/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_check_neg
*/

#include "my.h"

int check_neg(char const *s1, char const *s2)
{
    int i = 0;

    if (s1[i] == '-' && s2[i] == '-')
        return (1);
    else if (s1[i] == '-' && exprlen(s1) <= exprlen(s2))
        return (2);
    else if (s2[i] == '-') {
        return (3);
    }
    return (0);
}