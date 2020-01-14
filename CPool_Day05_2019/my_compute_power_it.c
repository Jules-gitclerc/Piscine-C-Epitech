/*
** EPITECH PROJECT, 2019
** my_compute_power_it.
** File description:
** compute_power_it Piscine
*/

int my_compute_power_it(int nb, int p)
{
    int i = -1;
    int x = 1;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    while (++i < p)
        x *= nb;
    return (x);
}