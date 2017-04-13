/*
** do_stuff.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/generator
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Tue Apr 11 17:42:49 2017 P3N15
** Last update Thu Apr 13 07:33:09 2017 P3N15
*/

#include "include/my.h"

int	am_i_blocked(int i, int n)
{
  static int	count = 0;
  static int	*coord_x[20];
  static int	*coord_y[20];
  int		a;
  int		b;

  a = 0;
  b = 0;
  coord_x[count % 20] = i;
  coord_y[count % 20] = n;
  while (a != 19 && coord_x[0] == coord_x[a] && count >= 21)
    a++;
  while (b != 19 && coord_y[0] == coord_y[b] && count >= 21)
    b++;
  count++;
  if (b == 19 || a == 19)
    return (1);
  return (0);
}

int	new_i(char **maze, int i, int n)
{
  i = 0;
  while (maze[n][i] != '\0')
    i++;
  while (maze[n][i] != '*')
    i--;
  return (i);
}

int	new_n(char **maze, int i, int n)
{
  int	save;

  i = 0;
  n = 0;
  while (maze[n] != '\0' && maze[n][i] != '\0')
    {
      while(maze[n][i] != '*' && maze[n][i] != '\0')
	i++;
      if (maze[n][i] =='*')
	save = n;
      n++;
      i = 0;
    }
  return (save);
}

int	can_it_horiz(char **maze, int dir, int i, int n)
{
  int	max_x;
  int	max_y = 0;

  while (maze[max_y] != '\0')
    max_y++;
  max_y--;
  max_x = strlen(maze[0]) - 1;
  if (dir == 2 && i != max_x
      && i != max_x - 1
      && maze[n][i + 2] == 'X')
    return (i + 2);
  if (dir == 3 && i != 0)
    {
      if (n == 0 || n == 1 || n == max_y || n == max_y - 1)
	return (i);
      if (i >= 2 && maze[n][i - 2] == 'X')
	return (i - 2);
    }
  return (i);
}

int	can_it_verti(char **maze, int dir, int i, int n)
{
  int	max_x;
  int	max_y = 0;

  while (maze[max_y] != '\0')
    max_y++;
  max_y--;
  max_x = strlen(maze[0]) - 1;
  if (dir == 1 && n != 0)
    {
      if (i == 0 || i == 1 || i == max_x || i == max_x - 1)
	return (n);
      if (n >= 2 && maze[n - 2][i] == 'X')
	return (n - 2);
    }
  if (dir == 0 && n != max_y
      && n != max_y - 1 && maze[n + 2][i] == 'X')
    return (n + 2);
  return (n);
}
