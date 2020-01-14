/*
** EPITECH PROJECT, 2019
** CPool_rush01_2019
** File description:
** rush1-1.c
*/

#include <unistd.h>

void    my_putchar(char c);

void    my_put_line(int x, int j, int k, int l)
{
    int i = 1;

    my_putchar(j);
    while (i++ < x - 1)
        my_putchar(k);
    if (x >= 2)
        my_putchar(l);
    my_putchar('\n');
}

void    rush(int x, int y)
{
    int i = 1;

    if (x <= 0 || y <= 0)
        write (2, "Invalid size\n", 13);
    else
        if (x > 0 && y > 0) {
            my_put_line(x, 'o', '-', 'o');
            while (++i < y)
                my_put_line(x, '|', ' ', '|');
            if (y >= 2)
                my_put_line(x, 'o', '-', 'o');
    }
}