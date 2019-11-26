##
## EPITECH PROJECT, 2019
## Makefile for BSQ
## File description:
## Epitech Project
##

SRC	=	src/bsq.c		\
		src/my_strlen.c	\
		src/my_getnbr.c	\
		src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
