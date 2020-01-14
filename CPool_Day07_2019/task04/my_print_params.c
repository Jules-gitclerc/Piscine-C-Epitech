/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_print_params
*/

void    my_putchar(char c);

int my_putstr(char const *str);

int main(int ac, char const **av)
{
    int i = 0;

    while (i < ac)
    {
        my_putstr(av[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}
// je trifouille du veau