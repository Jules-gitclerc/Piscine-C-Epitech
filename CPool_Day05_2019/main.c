#include <stdio.h>
#include <stdlib.h>

int     my_compute_factorial_it(int nb);
int     my_compute_factorial_rec(int nb);
int     my_compute_power_it(int nb, int p);
int     my_compute_power_rec(int nb, int p);

int     main(int ac, char **av)
{
    //tests for iterative factorial
    printf("%d\n", my_compute_factorial_it(atoi(av[1])));
    //tests for recursive factorial
    printf("%d\n", my_compute_factorial_rec(atoi(av[1])));
    //tests for iterative power
    printf("%d\n", my_compute_power_it(atoi(av[1]), atoi(av[2])));
    //tests for recursive power
    printf("%d\n", my_compute_power_rec(atoi(av[1]), atoi(av[2])));
    //tests for sqrt
    printf("%d\n", my_compute_square_root(atoi(av[1])));
    //tests for is prime
    printf("%d\n", my_is_prime(atoi(av[1])));
    //tests for find next prime
    printf("%d\n", my_find_prime_sup(atoi(av[1])));
    return (0);
}