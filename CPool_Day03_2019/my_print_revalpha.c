/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** revalpha Piscine
*/

void	my_putchar(char c);

int	my_print_revalpha(void)
{
    char i;

    i = 'z';
    while (i >= 'a') {
        my_putchar(i);
        i--;
    }
    return (0);
}