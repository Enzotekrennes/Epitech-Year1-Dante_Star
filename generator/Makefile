##
## Makefile for Makefile in /home/alexandre/delivery/PSU_2021_my_printf
##
## Made by Lefevre Alexandre
## Login   <alexandre@epitech.net>
##
## Started on  Mon Nov  7 14:33:31 2016 Lefevre Alexandre
## Last update Fri May 12 19:28:16 2017 P3N15
##

SRC	=	main.c	\
		basics.c	\
		basics2.c	\
		maze_generator.c	\
		imperfection.c	\
		direction.c	\
		do_stuff.c	\
		way_finder.c	\
		perfect_maze.c

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

all:	$(OBJ)
	gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all NAME clean fclean re
