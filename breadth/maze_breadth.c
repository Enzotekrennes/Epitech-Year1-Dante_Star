/*
** maze_breadth.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/breadth
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Sat Apr 15 17:36:38 2017 P3N15
** Last update Fri May 12 19:53:38 2017 P3N15
*/

#include "include/my.h"

int	maze_breadth_solver(char **maze, int **solv, int x, int y)
{
  int	k;

  k = 1;
  while (solv[y][x] == -1)
    {
      solv = next_turn(solv, k);
      k++;
    }
  maze = get_solved_maze(maze, solv, x, y);
  my_puttab(maze);
  k = 0;
  while (solv[k] != '\0')
    {
      free(solv[k]);
      k++;
    }
  free(solv);
  return (0);
}

char	**get_solved_maze(char **maze, int **solv, int x, int y)
{
  int	k;

  k = solv[y][x] - 1;
  maze[y][x] = 'o';
  while (y != 0 || x != 0)
    {
      if (x != 0 && solv[y][x - 1] == k)
	x--;
      else if (solv[y][x + 1] == k)
	x++;
      else if (y != 0 && solv[y - 1][x] == k)
	y--;
      else
	y++;
      maze[y][x] = 'o';
      k--;
    }
  return (maze);
}

inline int	**next_turn(int **solv, int k)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (solv[n] != '\0')
    {
      while (solv[n][i] != -3)
	{
	  if (solv[n][i] == (k - 1))
	    solv = follow_path(solv, n, i, k);
	  if ((i + n) >  k)
	    break ;
	  i++;
	}
      i = 0;
      n++;
    }
  return (solv);
}

inline int	**follow_path(int **solv, int n, int i, int k)
{
  (n != 0 && solv[n - 1][i] == -1) ? solv[n - 1][i] = k : 0;
  (i != 0 && solv[n][i - 1] == -1) ? solv[n][i - 1] = k : 0;
  (solv[n][i + 1] == -1) ? solv[n][i + 1] = k : 0;
  if (solv[n + 1] != '\0' && solv[n + 1][i] == -1)
    solv[n + 1][i] = k;
  return (solv);
}
