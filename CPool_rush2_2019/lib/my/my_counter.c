/*
** EPITECH PROJECT, 2019
** CPool_rush2_2019
** File description:
** my_counter
*/

int    my_counter(char const *str, char const *find)
{
    int i = 0;
    int x = 0;

    while (str[i]) {
        if (str[i] == *find)
            x++;
        i++;
    }
    return (x);
}