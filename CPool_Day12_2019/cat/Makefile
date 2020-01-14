##
## EPITECH PROJECT, 2019
## CPool_Day12_2019
## File description:
## Makefile
##

SRC     =   src/cat.c\
			src/my_putstr.c\
			src/my_putchar.c\
			src/main.c


OBJ        =     $(SRC:.c=.o)

NAME     =     cat

all:    $(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:        all

tests_run:
		gcc -o unit_tests cat.c ../tests/test.c --coverage -lcriterion $(CFLAGS) $(COMPILATION)
		./unit_tests

.PHONY:     all clean re