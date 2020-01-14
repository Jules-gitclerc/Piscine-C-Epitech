##
## EPITECH PROJECT, 2019
## CPool_rush2_2019
## File description:
## Makefile
##

SRC     =  	lib/my/my_counter.c \
            lib/my/my_put_nbr.c \
            lib/my/my_putchar.c \
            lib/my/my_putstr.c \
			lib/my/my_strlowcase.c \
            rush2.c


OBJ        =     $(SRC:.c=.o)

NAME     =     rush2

all:    $(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:        all

.PHONY:     all clean re