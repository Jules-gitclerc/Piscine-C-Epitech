/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** compute_factorial_it Piscine
*/

int my_compute_factorial_it(int nb)
{
    int i = 1;
    int x = nb;

    if (nb == 0)
        return (1);
    if (nb < 0 || nb == 13)
        return (0);
    while (++i < nb)
        x *= i;
    return (x);
}