/*
** my.h for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/breadth
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Sat Apr 15 16:57:11 2017 P3N15
** Last update Fri May 12 19:57:46 2017 P3N15
*/

#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/* main.c */
int	main(int, char **);

/* basics.c */
void    my_putchar(char);
void    my_putstr(char *);
void    my_puttab(char **);
int     my_get_nbr(char *);
int     my_strlen(char *);

/* maze_creator.c */
int	get_maze_x(char **);
int	get_maze_y(char **);
int	multiple_path(char **, int, int);
char	**malloc_maze(char *);
char	**get_maze_tab(char **, char *);

/* maze_breadth.c */
int	maze_breadth_solver(char **, int **, int, int);
char	**get_solved_maze(char **, int **, int, int);
int	**next_turn(int **, int);
int	**follow_path(int **, int, int, int);

/* maze_secret_plan_creator.c */
int	maze_check_validity(char **);
int	**int_tab_creator(char **, int, int);
int	**fill_int_tab(int **, char **);
int	**malloc_int_tab(int, int);
