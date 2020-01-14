/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** my_strdup
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *dest = 0;
    char *tmp = 0;

    if (!(dest = malloc(sizeof(char) * (1 + my_strlen(src)))))
        return (NULL);
    tmp = dest;
    while (*src)
        *tmp++ = *src++;
    *tmp = '\0';
    return (dest);
}