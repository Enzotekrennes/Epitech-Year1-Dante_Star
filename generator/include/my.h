/*
** my.h for lemin in /home/alexandre/delivery/
**
** Made by Lefevre Alexandre
** Login   <alexandre@epitech.net>
**
** Started on  Sun Jan  8 16:29:01 2017 Lefevre Alexandre
** Last update Fri Apr 14 16:58:14 2017 P3N15
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
int	my_strlen(char *);

/*-----maze_generator.c-----*/
int	maze_generator(int, int);
int	*get_random_place(int *, int, int);
char	**fill_map_x(char **, int);
char	**get_malloc_map(int, int);
char	**make_random_path(char **, int, int);

/*-----imperfection.c-----*/
int	check_if_maze_full(char **);
int	get_x_road(char **, int, int, int);
int	get_y_road(char **, int, int, int);
char	**my_add_cluster(char **);
char	**my_road_builder(char **, int, int);

/*-----direction.c-----*/
char	**maze_up(char **, int, int);
char	**maze_down(char **, int, int, int);
char	**maze_left(char **, int, int, int);
char	**maze_right(char **, int, int);
char	**random_create_loop(char **, int, int);

/*-----do_stuff.c-----*/
int	am_i_blocked(int, int);
int	new_i(char **, int, int);
int	new_n(char **, int, int);
int	can_it_horiz(char **, int, int, int);
int	can_it_verti(char **, int, int, int);

/*-----way_finder.c-----*/
char	**road_up(char **, int, int);
char	**road_down(char **, int, int);
char	**road_left(char **, int, int);
char	**road_right(char **, int, int);
char	**my_add_loop(char **);
