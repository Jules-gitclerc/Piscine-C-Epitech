##
## EPITECH PROJECT, 2019
## CPool_Day10_2019
## File description:
## Makefile
##

SRC     =   my_getnbr.c \
            my_put_nbr.c \
            my_putchar.c \
            my_putstr.c \
            do_op.c


OBJ        =     $(SRC:.c=.o)

NAME     =     do-op

all:    $(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:        all

.PHONY:     all clean re