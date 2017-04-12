/*
** my.h for lemin in /home/alexandre/delivery/
**
** Made by Lefevre Alexandre
** Login   <alexandre@epitech.net>
**
** Started on  Sun Jan  8 16:29:01 2017 Lefevre Alexandre
** Last update Wed Apr 12 17:22:42 2017 P3N15
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>


/*-----main.c-----*/
int	main();

/*-----basics.c-----*/
void	my_putchar(char);
void	my_putstr(char *);
void	my_puttab(char **);
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

/*-----direction.c-----*/
char	**maze_up(char **, int, int, int);
char	**maze_down(char **, int, int, int);
char	**maze_left(char **, int, int, int);
char	**maze_right(char **, int, int, int);

/*-----do_stuff.c-----*/
int	am_i_blocked(char **, int, int);
int	new_i(char **, int, int);
int	new_n(char **, int, int);
int	can_it_horiz(char **, int, int, int);
int	can_it_verti(char **, int, int, int);
