/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** main
*/
#include <stdio.h>
#include <stdlib.h>

int check_0_s(char const *s);

char *my_infinadd(char const *s1, char const *s2);

int main(int ac, char **av)
{
    char *result = NULL;
    if (ac == 3) {
        result = my_infinadd(av[1], av[2]);
        printf("%s\n", result);
    }
    return (0);
}