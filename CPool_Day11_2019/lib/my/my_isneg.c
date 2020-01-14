/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** isneg Piscine
*/

void	my_putchar(char c);

int	my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    if (n >= 0)
        my_putchar('P');
    return (0);
}