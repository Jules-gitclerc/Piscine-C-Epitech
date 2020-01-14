/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_rev_params
*/

#include <unistd.h>

void    my_putchar(char c);

int my_putstr(char const *str);

int main(int ac, char const **av)
{
    int i = ac - 1;

    while (i >= 0)
    {
        my_putstr(av[i]);
        my_putchar('\n');
        i--;
    }
    return (0);
}