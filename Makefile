##
## EPITECH PROJECT, 2023
## makefile
## File description:
## pour my_printf
##

CC	=	gcc

SRC	=	src/main.c			\
		src/my_putstr.c		\
		src/my_put_nbr.c	\
		src/linked_list_add.c		\
		src/linked_list_delete.c	\
		src/display_list.c			\
		src/my_strcmp.c				\
		src/type_value.c			\
		src/add_func.c				\
		src/del_func.c				\
		src/sort_reverse_menu.c		\
		src/sort_menu.c				\
		src/swap.c

OBJ	=	$(SRC:.c=.o)

NAME_O	=	organized

FLAGS	=	-L ./libshell -lshell -g3

CFLAGS = -Wall -Wextra -Wpedantic -iquote include -iquote libshell

all: $(NAME_O)
$(NAME_O):	$(OBJ)
	$(CC) -o $(NAME_O) $(OBJ) $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME_O)

re: fclean all

.PHONY: all clean fclean re
