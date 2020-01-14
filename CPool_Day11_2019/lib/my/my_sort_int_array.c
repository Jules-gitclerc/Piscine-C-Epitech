/*
** EPITECH PROJECT, 2019
** sort_int_array
** File description:
** sort_int_array Piscine
*/

void    my_sort_int_array(int *array, int size)
{
    int i =  0;
    int tmp;

    while (i < size - 1 ) {
        if (array[i] > array[i + 1]) {
            tmp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}