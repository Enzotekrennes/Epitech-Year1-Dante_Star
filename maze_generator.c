/*
** maze_generator.c for Dante in /home/p3n15/delivery/Epitech-Year1-Dante_star
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Mon Apr 10 10:55:00 2017 P3N15
** Last update Mon Apr 10 16:30:16 2017 P3N15
*/

#include "include/my.h"

int	maze_generator(int x, int y)
{
  char	**maze;

  maze = get_malloc_map(x, y);
  maze = fill_map_x(maze, x);
  maze = make_random_path(maze, x - 1, y - 1);
  printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", maze[0], maze[1], maze[2], maze[3], maze[4], maze[5], maze[6], maze[7], maze[8], maze[9], maze[10], maze[11], maze[12]);
  return (0);
}


char	**make_random_path(char **maze, int x, int y)
{
  int	i = 0;
  int	n = 0;
  int	direction;
  int	*random;

  random = malloc(sizeof(int) * (x * y));
  srand(time(NULL));
  while ((i != x && i != x - 1) || (n != y && n != y - 1)
	 || (n == y - 1 && i == x - 1))
    {
      maze[n][i] = '*';
      direction = rand() % 3;
      random = get_random_place(random, i, n);
      (direction == 0 && n != y) ? n++ : 0;
      (direction == 1 && i != x) ? i++ : 0;
      (direction == 2 && n != 0) ? n-- : 0;
    }
  printf("%d,%d %d,%d %d,%d", random[0], random[1], random[2], random[3], random[4], random[5]);
  maze[n][i] = '*';
  maze[y][x] = '*';
  maze = add_imperfection(maze, random);
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
