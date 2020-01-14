/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** my_params_to_array
*/

#include "include/my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
	int	i = 0;
	struct info_param *ret = malloc(sizeof(struct info_param) * (ac + 1));

	while (i < ac){
		ret[i].length = my_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = my_strdup(av[i]);
		ret[i].word_array = my_str_to_word_array(av[i]);
		i++;
	}
	ret[i].length = -1;
	ret[i].str = 0;
	ret[i].copy = 0;
	ret[i].word_array = 0;
	return (ret);
}