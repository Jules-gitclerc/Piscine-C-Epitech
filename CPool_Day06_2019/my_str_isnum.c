/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    int x = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            x++;
        i++;
    }
    return (x != 0 ? 0 : 1);
}