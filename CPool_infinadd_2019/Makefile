##
## EPITECH PROJECT, 2019
## Untitled (Workspace)
## File description:
## Makefile
##

SRC =           infinadd.c\
				include/my_atoi.c\
				include/my_check_neg.c\
				include/my_malloc.c\
				my_check_0_s.c\
				main.c

NAME =          infin_add

OBJ =           $(SRC:.c=.o)

COMPILATION =   -Llib/my -lmy

CFLAGS =        -I./include/

all:            $(NAME)

$(NAME):        $(OBJ)
	make -C lib/my
	make clean -C lib/my
	gcc -o $(NAME) $(OBJ) $(COMPILATION) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:    all clean fclean re