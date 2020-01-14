/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strcapitalize
*/

char *my_strlowcase2(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    int j = 0;

    my_strlowcase2(str);
    while (str[i]) {
        while ((str[i] >= '0' && str[i] <= '9')
        || (str[i] >= 'a' && str[i] <= 'z')) {
            if (j == 0  && str[i + j] >= 'a' && str[i + j] <= 'z')
                str[i + j] = str[i + j] - 32;
            else if (j != 0 && str[i + j] >= 'A' && str[i + j] <= 'Z')
                str[i + j] = str[i + j] + 32;
            i++;
            j++;
        }
        i++;
        j = 0;
    }
    return (str);
}