/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** print_comb2 Piscine
*/

void	my_putchar(char c);

void	print_a_b(int a, int b)
{
    my_putchar(a / 10 + 48);
    my_putchar(a % 10 + 48);
    my_putchar(' ');
    my_putchar(b / 10 + 48);
    my_putchar(b % 10 + 48);
    if (a < 98 || b < 99) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int	my_print_comb2(void)
{
    int a;
    int b;

    while (a <= 99) {
        b = a + 1;
        while (b <= 99) {
            if ( a <= 98 || b >= 99)
                print_a_b(a, b);
            b++;
        }
        a++;
    }
    return (0);
}