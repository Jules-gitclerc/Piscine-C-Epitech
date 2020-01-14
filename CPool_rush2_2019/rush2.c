/*
** EPITECH PROJECT, 2019
** CPool_rush2_2019
** File description:
** rush02
*/


void    my_putchar(char c);

char    *my_strlowcase(char *str);

int     my_putstr(char const *str);

int     my_put_nbr(int nb);

int     my_counter(char const *str, char const *find);

int frequencies(char const *str, int nb)
{
    int i = 0;
    int total = 0;

    while(str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z')
            total++;
        i++;
    }
    my_put_nbr(nb * 10000 / (total * 100));
    my_putchar('.');
    my_put_nbr(nb * 10000 / total / 10 % 10);
    my_put_nbr(nb * 10000 / total % 100 % 10);
    my_putchar('%');
}

int main(int ac, char **av)
{
    int i = 2;

    if (ac < 3)
        return (0);
    my_strlowcase(av[1]);
    while (ac > i) {
        my_putstr(av[i]);
        my_putchar(':');
        if (*av[i] >= 'A' && *av[i] <= 'Z')
            *av[i] = *av[i] + 32;
        my_put_nbr(my_counter(av[1], av[i]));
        my_putchar(' ');
        my_putchar('(');
        frequencies(av[1], my_counter(av[1], av[i]));
        my_putchar(')');
        my_putchar('\n');
        i++;
    }
        return (0);
}