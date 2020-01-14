/*
** EPITECH PROJECT, 2019
** CPool_Day12_2019
** File description:
** cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int my_putstr(char const *str);
void    my_putchar(char c);

int check_error(int ac, char **av, int i)
{
    int fd = open(av[1], O_RDWR);
    if (0 > fd) {
        write(2, "cat: ", 5);
        my_putstr(av[1]);
        if (errno == 21)
            write(2, ": Is a directory\n", 17);
        else if (errno == 13)
            write (2, ": Permission denied\n",20);
        else if (errno == 2)
            write(2, ": No such file or directory\n", 28);    
    }
}

int cat(int ac, char **av)
{
    char buffer[999];
    int i = 1;
    int fd;
    int read_c = 1;
    int byte;

    fd = open(av[i], O_RDONLY);
    if (ac == 1) {
        while (read (STDIN_FILENO, buffer, 1)) {
            write(1, buffer, 1);
        }
        return (0);
    }
    while (read_c) {
        read_c = read (fd, buffer, 1);
        if (read_c < 0) {
            check_error(ac, av, i);
            close(fd);
            return(0);
        }
        write(1, buffer, read_c);
        i++;
    }
    return (0);
}