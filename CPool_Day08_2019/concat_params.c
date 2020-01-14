/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** concat_params
*/

#include <stdlib.h>
#include <unistd.h>

void    my_putchar(char c);

int my_putstr(char const *str);

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char *concat_params(int argc, char **argv)
{
    int size;
    int i =  -1;
    char *res;

    while (++i < argc)
        size += my_strlen(argv[i]) + 1;
    res = malloc(size * sizeof(char));
    i = 0;
    while (i < argc) {
        while (*argv[i])
            *res++ = *argv[i]++;
        *res++ = '\n';
        i++;
    }
    *(res - 1) = '\0';
    return (res - size);
}