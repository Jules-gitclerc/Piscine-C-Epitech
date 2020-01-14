/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_atoi
*/

int my_atoi(char c)
{
    if (c >= '0' && c <= '9')
        return (c - 48);
    return (0);
}