/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** is_prime Piscine
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb < 2)
        return (0);
    while (i * i <= nb && i * i > 0)
        if (nb % i == 0)
            return (0);
        else
            i++;
    return (1);
}