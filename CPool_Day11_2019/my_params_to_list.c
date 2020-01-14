/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_params_to_list
*/

#include "mylist.h"
#include <stdlib.h>

void    add_list(linked_list_t **node, char *str)
{
    linked_list_t *crazy_list;

    crazy_list = malloc(sizeof(*crazy_list));
    crazy_list -> data = str;
    crazy_list -> next = *node;
    *node = crazy_list;
}

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    int i = 0;
    linked_list_t *tmp;
    tmp = NULL;

    while (i < ac){
        add_list(&tmp, av[i]);
        i++;
    }
    return (tmp);
}