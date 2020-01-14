/*
** EPITECH PROJECT, 2019
** yeet
** File description:
** yoink
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *my_strcpy(char *dest, char const *src);
char    *my_strncpy(char *dest, char const *src, int n);
char    *my_revstr(char *str);
char    *my_strstr(char *str, char const *to_find);
int     my_strcmp(char const *s1, char const *s2);
int     my_strncmp(char const *s1, char const *s2, int n);
char    *my_strupcase(char *str);
char    *my_strlowcase(char *str);
char    *my_strcapitalize(char *str);
int     my_str_isalpha(char const *str);
int     my_str_isnum(char const *str);
int     my_str_isupper(char const *str);
int     my_str_islower(char const *str);
int     my_str_isprintable(char const *str);

int     my_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int     main(int ac, char **av)
{
    //test for strcpy
    char    dest[my_strlen(av[1])];
    char    dest2[my_strlen(av[1])];
    printf("-----og strcpy-----\nsrc = %s\ndest = %s\n", av[1], strcpy(dest ,av[1]));
    printf("-----your strcpy----\nsrc = %s\ndest = %s\n\n", av[1], my_strcpy(dest2 ,av[1]));
    //test for strncpy
    char    dest3[my_strlen(av[1])];
    char    dest4[my_strlen(av[1])];
    printf("-----og strncpy-----\nsrc = %s\ndest = %s\n", av[1], strncpy(dest3, av[1], atoi(av[3])));
    printf("-----your strncpy-----\nsrc = %s\ndest = %s\n\n", av[1], my_strncpy(dest3, av[1], atoi(av[3])));
    //test for revstr
    char    *str=strdup("");
    printf("-----revstr-----\nsrc = %s\nrev = %s\n\n", av[1], my_revstr(str));
    //test for strstr
    char    *haystack=strdup(av[1]);
    char    *haystack2=strdup(av[1]);
    printf("-----og strstr-----\nhaystack = %s\nneedle = %s\n\n", av[1], strstr(haystack2, av[2]));
    printf("-----your strstr-----\nhaystack = %s\nneedle = %s\n\n", av[1], my_strstr(haystack, av[2]));
    //test for strcmp
    printf("-----og strcmp-----\n%d\n", strcmp(av[1], av[2]));
    printf("-----your strcmp-----\n%d\n\n", my_strcmp(av[1], av[2]));
    //test for strncmp
    printf("-----og strncmp-----\n%d\n", strncmp(av[1], av[2], atoi(av[3])));
    printf("-----your strncmp-----\n%d\n\n", my_strncmp(av[1], av[2], atoi(av[3])));
    //test for strupcase
    char    *str2=strdup(av[1]);
    printf("-----your strupcase-----\n%s\n\n", my_strupcase(str2));
    //test for strlowcase
    char    *str3=strdup(av[1]);
    printf("-----your strlowcase-----\n%s\n\n", my_strlowcase(str3));
    //test for strcapitalize
    char    *str4=strdup(av[1]);
    printf("-----your strcapitalize-----\n%s\n\n", my_strcapitalize(str4));
    //test for isalpha
    printf("-----isalpha-----\n%d\n", my_str_isalpha(av[1]));
    //test for isnum
    printf("-----isnum-----\n%d\n", my_str_isnum(av[1]));
    //test for islower
    printf("-----islower-----\n%d\n", my_str_islower(av[1]));
    //test for isupper
    printf("-----isupper-----\n%d\n", my_str_isupper(av[1]));
    //test for isprintable
    printf("-----isprintable-----\n%d\n", my_str_isprintable(av[1]));
}