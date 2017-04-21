/*
** perfect_maze.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/generator
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Fri Apr 14 18:39:14 2017 P3N15
** Last update Fri Apr 21 19:49:41 2017 P3N15
*/

#include "include/my.h"

int	perfect_maze_creator(int x, int y)
{
  char	**maze;
  int	i;

  i = 0;
  maze = get_malloc_map(x, y);
  maze = fill_map_x(maze, x);
  maze = make_random_path(maze, x - 1, y - 1);
  maze[0][0] = '*';
  maze[y - 1][x - 1] = '*';
  maze = perfect_maze_cleaner(maze, x - 1, y - 1);
  my_putlab(maze);
  while (maze[i] != '\0')
    {
      free(maze[i]);
      i++;
    }
  free(maze);
  return (0);
}

char	**perfect_maze_cleaner(char **maze, int x, int y)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (i != x || n != y)
    {
      maze[n][i] = 'o';
      if (i < x && maze[n][i + 1] == '*')
	i++;
      else if (n < y && maze[n + 1][i] == '*')
	n++;
      else if (i > 0 && maze[n][i - 1] == '*')
	i--;
      else if (n > 0 && maze[n - 1][i] == '*')
	n--;
      clrscr();
      my_putlab(maze);
    }
  maze[n][i] = 'o';
  maze = clean_the_remains(maze);
  return (maze);
}

char	**clean_the_remains(char **maze)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (maze[n] != '\0')
    {
      while (maze[n][i] != '\0')
	{
	  (maze[n][i] == '*') ? maze[n][i] = 'X' : 0;
	  (maze[n][i] == 'o') ? maze[n][i] = '*' : 0;
	  i++;
	}
      i = 0;
      n++;
    }
  return (maze);
}
