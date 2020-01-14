/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_list_size
*/

#include "mylist.h"
#include <stdio.h>

int my_list_size(linked_list_t const *begin)
{
    int i = 0;

    while (begin != NULL) {
        begin = begin->next;
        i++;
    }
    return (i);
}