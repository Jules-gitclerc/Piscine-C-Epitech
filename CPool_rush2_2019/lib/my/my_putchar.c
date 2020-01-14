/*
** EPITECH PROJECT, 2019
** CPool_rush2_2019
** File description:
** my_putchar
*/

#include <unistd.h>

void    my_putchar(char c)
{
    write (1, &c, 1);
}

