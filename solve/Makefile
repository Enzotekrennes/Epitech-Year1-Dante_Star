##
## Makefile for Makefile in /home/ludovic.porokhov/delivery/Sem 2/prog/Epitech-Year1-Dante_Star/solve
## 
## Made by Ludovic POROKHOV
## Login   <ludovic.porokhov@epitech.net>
## 
## Started on  Tue Apr 11 16:07:10 2017 Ludovic POROKHOV
## Last update Wed Apr 12 16:52:16 2017 Ludovic POROKHOV
##

SRC	=	s_main.c \
		basic.c \
		create_lab.c \
		solver.c

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
