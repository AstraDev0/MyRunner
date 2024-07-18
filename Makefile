##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC		=	$(wildcard src/*.c)

OBJ		=	$(SRC:.c=.o)

NAME	=	my_runner

CFLAGS	=	-I ./include -L ./lib/my -lmy

FLAG	=	-lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system -g3

all:	$(NAME)

$(NAME):
		make -C lib/my
		gcc -o $(NAME) $(SRC) $(CFLAGS) $(FLAG)

clean:
		make clean -C lib/my
		rm -f $(OBJ)

fclean:	clean
		make fclean -C lib/my
		rm -f $(NAME)
		rm -f vgcore*

re:		fclean all

.PHONY:	re fclean clean all
