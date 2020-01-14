/*
** EPITECH PROJECT, 2019
** CPool_match-nmatch_2019
** File description:
** match
*/

int match(char const *s1, char const *s2)
{
    int i = 0;
    int u = 0;

    while (s1[i] && s2[u]) {
        if (s1[i] == s2[u]) {
            i++;
            u++;
        }
        while (s2[u] == '*') {
            u++;
            if (s2[u] == '\0')
                return (1);
        }
        while (s1[i] != s2[u]) {
            if (s1[i] == '\0')
                i--;
                if (s1[i] != s2[u] && s1[i + 1] == '\0')
                    return (0);
            i++;
        }
        if (s1[i] == '\0' && s2[u] == '\0' && s1[i - 1] == s2[u - 1])
            return (1);
    }
    return (0);
}

#include <stdio.h>

int main(void)
{
    char *s1 = "hello";
    char *s2 = "h*o";
    char *s3 = "hello";
    char *s4 = "*****h*e*l*l*o*";
    char *s5 = "*he*u*llo";
    char *s6 = "***h";
    char *s7 = "h*";
    char *s8 = "***l***";
    char *s9 = "he*llou*";
    char *test = "";
    char *s0 = "*";

    printf("h*o\n%d\n", match(s1, s2));
    printf("hello\n%d\n", match(s1, s3));
    printf("*****h*e*l*l*o*\n%d\n", match(s1, s4));
    printf("*he*u*llo\n%d\n", match(s1, s5));
    printf("***h\n%d\n", match(s1, s6));
    printf("h*\n%d\n", match(s1, s7));
    printf("****l****\n%d\n", match(s1, s8));
    printf("he*llou*\n%d\n", match(s1, s9));
    printf("\n%d\n", match(test, s0));
    return 0;
}