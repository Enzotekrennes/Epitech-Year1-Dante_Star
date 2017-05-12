##
## Makefile for Makefile in /home/alexandre/delivery/PSU_2021_my_printf
##
## Made by Lefevre Alexandre
## Login   <alexandre@epitech.net>
##
## Started on  Mon Nov  7 14:33:31 2016 Lefevre Alexandre
## Last update Fri May 12 20:06:35 2017 P3N15
##

SRC	=	main.c	\
		basics.c	\
		maze_creator.c	\
		maze_breadth.c	\
		maze_secret_plan_creator.c

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

all:	$(OBJ)
	gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all NAME clean fclean re
