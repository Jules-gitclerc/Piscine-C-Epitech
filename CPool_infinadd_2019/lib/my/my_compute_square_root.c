/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** compute_square_root Piscine
*/

int my_compute_square_root(int nb)
{
    int i = 1;

    while (i * i < nb && i <= 46340)
        i++;
    if (i * i == nb)
        return (i);
    else
        return (0);
}