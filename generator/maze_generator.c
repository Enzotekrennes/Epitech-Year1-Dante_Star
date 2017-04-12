/*
** maze_generator.c for Dante in /home/p3n15/delivery/Epitech-Year1-Dante_star
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Mon Apr 10 10:55:00 2017 P3N15
** Last update Wed Apr 12 20:17:55 2017 P3N15
*/

#include "include/my.h"

int	maze_generator(int x, int y)
{
  char	**maze;

  maze = get_malloc_map(x, y);
  maze = fill_map_x(maze, x);
  maze = make_random_path(maze, x - 1, y - 1);
  my_puttab(maze);
  return (0);
}


char	**make_random_path(char **maze, int x, int y)
{
  int	i = 0;
  int	n = 0;
  int	horiz;
  int	verti;
  int	dir;
  int	*random;

  srand(time(NULL));
  while (i != x && i != x - 1 || n != y && n != y - 1)
    {
      dir = rand() % 4;
      horiz = can_it_horiz(maze, dir, i, n);
      verti = can_it_verti(maze, dir, i, n);
      (dir == 0 && n != y) ? maze = maze_down(maze, i, n, y) : 0;
      (dir == 2 && i != x) ? maze = maze_right(maze, i, n, y) : 0;
      (dir == 1 && n != 0) ? maze = maze_up(maze, i, n, y) : 0;
      (dir == 3 && i != 0) ? maze = maze_left(maze, i, n, y) : 0;
      i = horiz;
      n = verti;
      if (am_i_blocked(maze, i, n) == 1)
	(1) ? n = new_n(maze, i, n), i = new_i(maze, i, n)  : 0;
    }
  maze[0][0] = '*';
  maze[y][x] = '*';
  (maze[y - 1][x] == 'X' && maze[y][x - 1] == 'X') ? maze[y -1][x] = '*': 0;
  return (maze);
}

int	*get_random_place(int *random, int i, int n)
{
  int	randomness;
  int	k = 0;

  randomness = rand() % 5;
  while (random[k] != '\0')
    k++;
  if (randomness == 0)
    {
      random[k] = n + 1;
      random[k + 1] = i + 1;
    }
  return (random);
}

char	**fill_map_x(char **maze, int k)
{
  int	x = 0;
  int	y = 0;

  while (maze[y] != '\0')
    {
      while (x != k)
	{
	  maze[y][x] = 'X';
	  x++;
	}
      y++;
      x = 0;
    }
  return (maze);
}

char	**get_malloc_map(int x, int y)
{
  char	**maze;
  int	i;

  i = 0;
  maze = malloc(sizeof(char *) * y);
  while (i != y)
    {
      maze[i] = malloc(sizeof(char) * x);
      i++;
    }
  return (maze);
}
