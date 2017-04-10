/*
** my.h for lemin in /home/alexandre/delivery/
**
** Made by Lefevre Alexandre
** Login   <alexandre@epitech.net>
**
** Started on  Sun Jan  8 16:29:01 2017 Lefevre Alexandre
** Last update Mon Apr 10 15:34:02 2017 P3N15
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/*-----main.c-----*/
int	main();

/*-----basics.c-----*/
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_get_nbr(char *str);

/*-----maze_generator.c-----*/
int	maze_generator(int, int);
char	**fill_map_x(char **, int);
char	**get_malloc_map(int, int);
char	**make_random_path(char **, int, int);
