/*
** EPITECH PROJECT, 2019
** my_evil_str.c
** File description:
** evil_str Piscine
*/

char my_evil_str(char *str)
{
    int i = 0;
    int j = 0;
    char tmp;

    while (str[i + 1])
        i++;
    while (i > j) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        j++;
        i--;
    }
    return (str);
}