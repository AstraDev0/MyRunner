##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC		=	$(wildcard *.c)

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../$(NAME)
		cp my.h ../../include/my.h
		cp info_sprite.h ../../include/info_sprite.h

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		rm -f ../$(NAME)

re:		fclean all

.PHONY:	re fclean clean all
