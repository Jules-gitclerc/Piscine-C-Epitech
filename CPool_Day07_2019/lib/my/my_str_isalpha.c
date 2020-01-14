/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int x = 0;

    while (str[i] != '\0')
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z')))
            x++;
        i++;
    }
    return (x != 0 ? 0 : 1);
}