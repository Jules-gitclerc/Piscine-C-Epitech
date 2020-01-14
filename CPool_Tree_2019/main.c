#include <stdlib.h>

void my_putchar(char c);
int tree(int nb);

int main(int ac, char **av)
{
    if (!(ac < 2))
        tree(atoi(av[1]));
    return (0);
}