##
## EPITECH PROJECT, 2019
## Makefile for BSQ
## File description:
## Epitech Project
##

SRC	=	\
		\
		\

NAME	=	bsq

OBJ	=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
		$()

all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all