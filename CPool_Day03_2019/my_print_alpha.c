/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** print_alpha Piscine
*/

void	my_putchar(char c);

int	my_print_alpha(void)
{
    char i;

    i = 'a';
    while (i <= 'z') {
        my_putchar(i);
        i++;
    }
    return (0);
}