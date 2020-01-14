/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** swap Piscine
*/

void    my_swap(int *a, int *b)
{
    int x;

    x = *a;
    *a = *b;
    *b = x;
}