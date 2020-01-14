/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** do-op
*/

#include <unistd.h>

void	my_putchar(char c);

int my_putstr(char *str);

int    my_put_nbr(int nb);

int	my_getnbr(char const *str);

int main(int ac, char **av)
{
    int nb1;
    int nb2;
    char op;
    int res = 0;

    if (ac != 4)
        return (84);
    nb1 = my_getnbr(av[1]);
    nb2 = my_getnbr(av[3]);
    op = *av[2];
    if (nb2 == 0 && (op == '/' || op == '%')) {
        my_putstr(op == '%' ? "Stop: modulo by zero" : "Stop: division by zero");
        return (84);
    }
    if (op == '*')
        res = nb1 * nb2;
    else if (op == '+')
        res = nb1 + nb2;
    else if (op == '-')
        res = nb1 - nb2;
    else if (op == '/')
        res = nb1 / nb2;
    else if (op == '%')
        res = nb1 % nb2;
    if (res == 0 && nb1 != nb2)
        return (84);
    return (my_put_nbr(res));
}