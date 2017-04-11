/*
** my.h for lemin in /home/alexandre/delivery/
**
** Made by Lefevre Alexandre
** Login   <alexandre@epitech.net>
**
** Started on  Sun Jan  8 16:29:01 2017 Lefevre Alexandre
** Last update Tue Apr 11 13:42:18 2017 P3N15
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/*-----main.c-----*/
int	main();

/*-----basics.c-----*/
void	my_putchar(char);
void	my_putstr(char *);
int	my_get_nbr(char *);

/*-----maze_generator.c-----*/
int	maze_generator(int, int);
int	*get_random_place(int *, int, int);
char	**fill_map_x(char **, int);
char	**get_malloc_map(int, int);
char	**make_random_path(char **, int, int);

/*-----imperfection.c-----*/
char	**add_imperfection(char **, int *);
char	**imperfection_creator(char **, int, int);
