/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_explen
*/

int     is_alphanum(char c)
{
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        return (1);
    else if ('0' <= c && c <= '9')
        return (2);
    else
        return (0);
}

int exprlen(char const *str)
{
    char *s1 = my_strdup(str);
    int i = 0;
    int len = 0;

    while (s1[i] == '+' || s1[i] == '-' || s1[i] == '0')
        i++;
    while (s1[i] && is_alphanum(s1[i]) == 2) {
        len++;
        i++;
    }
    free (s1);
    return (len);
}