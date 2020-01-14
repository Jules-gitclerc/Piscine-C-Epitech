/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_rev_list
*/

#include <stdio.h>
#include "mylist.h"

void    my_rev_list(linked_list_t **begin)
{
    linked_list_t *list;
    linked_list_t *tmp;
    linked_list_t *element;

    list = *begin;
    tmp = NULL;
    while (list-> next) {
        element = list->next;
        list->next = tmp;
        tmp = list;
        list = element;
    }
    list->next = tmp;
    *begin = list;
}