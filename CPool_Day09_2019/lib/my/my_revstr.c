/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_revstr
*/

char *my_revstr(char *str)
{
    char buffer = 0;
    int first = 0;
    int last = 0;

    while (str[last] != '\0') {
        last++;
    }
    last = last - 1;
    while (first < last) {
        buffer = str[first];
        str[first] = str[last];
        str[last] = buffer;
        first++;
        last--;
    }
    return (str);
}