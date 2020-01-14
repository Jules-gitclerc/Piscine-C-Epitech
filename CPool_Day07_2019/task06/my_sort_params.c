/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_sort_params
*/

void    my_putchar(char c);

int my_putstr(char const *str);

int my_strcmp(char const *s1, char const *s2);

void my_sort_params(int ac, char const *av[])
{
    int i = 0;
    int j;
    char const *tmp;

    tmp = av[1];
    while (i < ac - 1) {
        if (my_strcmp(av[i], av[i + 1]) > 0) {
            tmp = av[i];
            av[i] = av[i + 1];
            av[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}

int main(int argc, char const *argv[])
{
    int i = 0;
    my_sort_params(argc, argv);
    while (i < argc) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
    return 0;
}
