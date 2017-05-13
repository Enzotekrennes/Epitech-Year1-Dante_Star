/*
** my.h for my.h in /home/ludovic.porokhov/Epitech-Year1-Dante_Star/astar
** 
** Made by Ludovic POROKHOV
** Login   <ludovic.porokhov@epitech.net>
** 
** Started on  Fri May 12 12:49:26 2017 Ludovic POROKHOV
** Last update Sat May 13 17:58:38 2017 Ludovic POROKHOV
*/

#ifndef MY_H_
# define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>

typedef struct  s_tile
{
  int		type;
  int		status;
  int           F;
  int           G;
  int		H;
}		t_tile;

typedef struct  s_pos
{
  char		**lab;
  int		x;
  int		y;
}               t_pos;

void	solver(t_pos);
void	my_putstr(char *);
void	my_putmatrix(t_tile **, int, int);
void	my_putlab(char **);

int	tab_line(char **);
int	linelen(char *);
int	how_many_lines(char *);

char	*file_reader(char *);

char	**make_tab(char *, int);
char	**labyrinthe(char *);

t_tile	**solving(t_pos, int, int);
t_tile	**allocated_struct(t_tile **, int, int);
t_tile	**matrix_creator(t_tile **, t_pos);

#endif /*MY_H_*/
