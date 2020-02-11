##
## EPITECH PROJECT, 2019
## Makefile for BSQ
## File description:
## Epitech Project
##

SRC	=	src/bsq.c		\
		src/my_strlen.c	\
		src/my_getnbr.c	\
		src/main.c		\
		src/print.c 	\
		src/findchar.c
	
SRC_TEST	=	tests/tests.usage.c		\
				tests/my_putstr.c		\
				tests/my_strlen.c

OBJ	=	$(SRC:.c=.o)

OBJ_TESTS	=	$(SRC_TEST:.c=.o)

NAME	=	bsq

TEST_NAME	=	unit_test

all:	$(NAME)

gcovr:
		gcovr --exclude $(SRC_TEST)
		gcovr --exclude $(SRC_TEST) --branches

$(NAME):	$(OBJ)
		gcc -g -o $(NAME) $(OBJ)

tests_run:	$(SRC_TEST)
			$(CC) -o $(TEST_NAME) $(SRC_TEST) $(LDFLAGS) -I./include --coverage -lcriterion -lgcov
			./$(TEST_NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
