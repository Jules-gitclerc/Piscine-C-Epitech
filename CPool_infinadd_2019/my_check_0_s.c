/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_check_0_s1
*/

int check_0_s(char const *s)
{
    int i = 0;
    while (s[i] == '+' || s[i] == '-' || s[i] == '0')
        i++;
    return (i);
}