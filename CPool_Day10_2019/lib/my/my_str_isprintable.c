/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    int x = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] < 32 && str[i] > 126))
            x++;
        i++;
    }
    return (x != 0 ? 0 : 1);
}