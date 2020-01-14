/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** malloc
*/

#include <stdlib.h>
#include "my.h"

char *alloc(char const *s1, char const *s2)
{
    int index = 0;
    int lenght = my_strlen(s1) + my_strlen(s2) + 1;
    char *tmp = malloc(sizeof(char) * lenght);

    for (index = 0; index < lenght; index++)
        tmp[index] = '0';
    return (tmp);
}

char *alloc_string(char *s, char *s2)
{
    int n = (my_strlen(s) > my_strlen(s2) ? my_strlen(s) : my_strlen(s2)) + 2;
    char *dest = malloc(n);
    for (int i = 0; i < n; i++)
        dest[i] = '0';
    my_revstr(s);
    for (int i = 0; s[i] != '\0'; i++)
        dest[i] = s[i];
    my_revstr(dest);
    return (dest);
}