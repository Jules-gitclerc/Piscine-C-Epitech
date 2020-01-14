/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** my_strlen Piscine
*/

void    ft_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}