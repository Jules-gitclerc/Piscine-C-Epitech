/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_apply_on_nodes
*/

#include "mylist.h"
#include <stdio.h>

int my_apply_on_node(linked_list_t *begin, int (*f)(void *))
{
    while (begin != NULL) {
        f(begin->data);
        begin = begin->next;
    }
    return (0);
}