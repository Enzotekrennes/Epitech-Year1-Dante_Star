/*
** maze_secret_plan_creator.c for dante star in /home/p3n15/delivery/Epitech-Year1-Dante_Star/breadth
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Thu May 11 18:15:59 2017 P3N15
** Last update Fri May 12 20:03:59 2017 P3N15
*/

#include "include/my.h"

int	**int_tab_creator(char **maze, int x, int y)
{
  int	**solv;

  solv = malloc_int_tab(x, y);
  solv = fill_int_tab(solv, maze);
  return (solv);
}

int     **fill_int_tab(int **solv, char **maze)
{
  int   i;
  int   n;

  i = 0;
  n = 0;
  while (maze[n] != '\0')
    {
      while (maze[n][i] != '\0')
	{
	  if (maze[n][i] == '*')
	    solv[n][i] = -1;
	  else if (maze[n][i] == 'X')
	    solv[n][i] = -2;
	  i++;
	}
      i = 0;
      n++;
    }
  solv[0][0] = 0;
  return (solv);
}

int     **malloc_int_tab(int x, int y)
{
  int   **solv;
  int   i;

  i = 0;
  y++;
  if ((solv = malloc(sizeof(int *) * (y + 1))) == NULL)
    exit(84);
  solv[y] = '\0';
  while (i != y)
    {
      if ((solv[i] = malloc(sizeof(int) * (x + 2))) == NULL)
	exit(84);
      solv[i][x + 1] = -3;
      i++;
    }
  return (solv);
}

int	maze_check_validity(char **maze)
{
  int	x;
  int	i;
  int	n;

  x = 0;
  i = 0;
  n = 0;
  while (maze[0][x] != '\0')
    x++;
  while (maze[n] != '\0')
    {
      while (maze[n][i] != '\0')
	{
	  if (maze[n][i] != '*' && maze[n][i] != 'X')
	    return (84);
	  i++;
	}
      if (i != x)
	return (84);
      n++;
      i = 0;
    }
  if (maze[0][0] == 'X' || maze[n - 1][x - 1] == 'X')
    return (84);
  return (0);
}
