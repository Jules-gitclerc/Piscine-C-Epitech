/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** getnbr Piscine
*/

int	my_getnbr(char const *str)
{
    int i = 0;
    int out = 0;
    int x = 1;
    int check;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            x *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9' && str[i]) {
        check = out;
        out = out * 10 + (str[i] - 48);
        if (out == 214748364 && str[i + 1] == '8' && x > 0)
            return (0);
        if (out / 10 != check && out != -2147483648)
            return (0);
        i++;
    }
    return (out * x);
}