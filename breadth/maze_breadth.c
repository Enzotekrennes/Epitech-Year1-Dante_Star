/*
** maze_breadth.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/breadth
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Sat Apr 15 17:36:38 2017 P3N15
** Last update Sat Apr 15 17:53:50 2017 P3N15
*/

#include "include/my.h"

int	maze_breadth_solver(char **maze, int x, int y)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (i != x || n != y)
    {
      if (i != 0 && maze[n][i - 1] == '*')
	i--;
      else if (i != x && maze[n][i + 1] == '*')
	i++;
      else if (n != 0 && maze[n - 1][i] == '*')
	n--;
      else if (n != y && maze[n + 1][i] == '*')
	n++;
      maze[n][i] = 'o';
      printf("%d,%d   %d,%d\n", i, n, x, y);
    }
  return (0);
}
