/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_str_to_word_array
*/

int my_strlen(char const *str);

int    my_str_letter(char str)
{
    if (str >= 'A' && str <= 'Z' || str >= 'a' && str <= 'z'
            || str >= '0' && str <= '9')
      return (1);
    else
      return (0);
}

int word_counter(char const *str)
{
    int i = 0;
    int nbr = 0;

    while (str[i]) {
        if (my_str_letter(str[i]) == 1 && my_str_letter(str[i + 1]) == 0)
            nbr++;
        i++;
    }
    return (nbr);
}

char *copy_next_word(char const *str, int i)
{
    int len = 0;

    while (my_str_letter(str[i + len]) == 1)
        len++;
    char *ret = malloc((len + 1) * sizeof(char));
    len = 0;
    while (my_str_letter(str[i]) == 1) {
        ret[len] = str[i];
        len++;
        i++;
    }
    ret[i] = '\0';
    return (ret);
}

char **my_str_to_word_array(char const *str)
{
    int wc = word_counter(str);
    char **ret = malloc((wc + 1) * sizeof(char *));
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i]) {
        if (my_str_letter(str[i]) == 1 ) {
            ret[j] = copy_next_word(str, k);
            k += my_strlen(ret[j]);
            i += my_strlen(ret[j]);
        }
        else {
            k++;
            j++;
            i++;
        }
    }
    j++;
    ret[j] = NULL;
    return (ret);
}