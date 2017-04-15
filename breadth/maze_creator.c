/*
** maze_creator.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/breadth
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Sat Apr 15 17:19:16 2017 P3N15
** Last update Sat Apr 15 17:52:03 2017 P3N15
*/

#include "include/my.h"

char	**malloc_maze(char *file)
{
  char	**maze;
  int	i;
  int	n;
  int	k;

  i = 0;
  n = 1;
  k = 0;
  while (file[i] != '\0')
    {
      if (file[i] == '\n')
	n++;
      i++;
    }
  i = i / n;
  maze = malloc(sizeof(char *) * (n + 2));
  while (k != n)
    {
      maze[k] = malloc(sizeof(char) * (i + 2));
      k++;
    }
  return (maze);
}

char	**get_maze_tab(char **maze, char *file)
{
  int	i;
  int	x;
  int	y;

  i = 0;
  x = 0;
  y = 0;
  while (file[i] != '\0')
    {
      if (file[i] == '\n')
	{
	  y++;
	  x = 0;
	  i++;
	}
      maze[y][x] = file[i];
      x++;
      i++;
    }
  return (maze);
}

int	get_maze_x(char **maze)
{
  int	x;

  x = 0;
  while (maze[0][x] != '\0')
    x++;
  return (x - 1);
}

int	get_maze_y(char **maze)
{
  int	y;

  y = 0;
  while (maze[y] != '\0')
    y++;
  return (y - 1);
}
