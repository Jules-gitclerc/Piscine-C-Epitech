/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strstr
*/

#include <stdio.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int n = 0;

    while (to_find[n] == '\0')
        return (str);
    while (str[i] != '\0')  {
        while (str[i] == to_find[n]) {
            i++;
            n++;
            if (to_find[n] == '\0') {
                i = i - n;
                return (&str[i]);
            }
        }
        i = i - n;
        n = 0;
        i++;
    }
    return (NULL);
}