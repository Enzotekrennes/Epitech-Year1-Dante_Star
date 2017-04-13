/*
** my.h for my h in /home/ludovic.porokhov/delivery/Sem 2/prog/Epitech-Year1-Dante_Star/solve
** 
** Made by Ludovic POROKHOV
** Login   <ludovic.porokhov@epitech.net>
** 
** Started on  Tue Apr 11 16:12:05 2017 Ludovic POROKHOV
** Last update Thu Apr 13 10:03:02 2017 Ludovic POROKHOV
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

typedef struct	s_laby
{
  char		**lab;
  int		y;
  int		x;
}		t_laby;

void	solver();
void	my_puttab(char **);
void	my_putlab(char **);
void	my_putstr(char *);

int	how_many_lines(char *);
int	linelen(char *);
int	tab_line(char **);
int	checkmove(t_laby, int, int);
int	checkother(t_laby, int, int);

char	*file_reader(char *);

char	**make_tab(char *, int);
char	**labyrinthe(char *);
char	**solving(t_laby, int, int);

t_laby	forward(t_laby, int, int);
t_laby	backward(t_laby, int, int);

#endif
