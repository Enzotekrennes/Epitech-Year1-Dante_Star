/*
** imperfection.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Mon Apr 10 16:26:42 2017 P3N15
** Last update Fri Apr 14 16:31:13 2017 P3N15
*/

#include "include/my.h"

char	**my_add_cluster(char **maze)
{
  int	i;
  int	n;
  int	k;

  i = 0;
  n = 0;
  k = 0;
  while (check_if_maze_full(maze) == 1)
    {
      while (maze[n] != '\0')
	{
	  while (maze[n][i] != '\0')
	    {
	      if (maze[n][i] == '*')
		maze = my_road_builder(maze, i, n);
	      i = i + 2;
	    }
	  n = n + 2;
	  i = 0;
	}
      i = 0;
      n = 0;
      k++;
    }
  return (maze);
}

char	**my_road_builder(char **maze, int i, int n)
{
  int	rd;
  int	x;
  int	y;
  int	a;

  a = 0;
  while (a != 20)
    {
      rd = rand() % 4;
      x = get_x_road(maze, rd, i, n);
      y = get_y_road(maze, rd, i, n);
      (rd == 0) ? maze = road_up(maze, i, n) : 0;
      (rd == 1) ? maze = road_down(maze, i, n) : 0;
      (rd == 2) ? maze = road_left(maze, i, n) : 0;
      (rd == 3) ? maze = road_right(maze, i, n) : 0;
      i = x;
      n = y;
      a++;
    }
  return (maze);
}

int	check_if_maze_full(char **maze)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (maze[n] != '\0')
    {
      while (maze[n][i] != '\0')
	{
	  if (maze[n][i] == 'X')
	    return (1);
	  i = i + 2;
	}
      i = 0;
      n = n + 2;
    }
  return (0);
}

int	get_y_road(char **maze, int rd, int i, int n)
{
  int	j;

  j = 0;
  while (maze[j] != '\0')
    j++;
  j--;
  if (rd == 2 || rd == 3)
    return (n);
  if (rd == 0)
    {
      if (n == 0 || n == 1 || maze[n - 2][i] == '*')
	return (n);
      return (n - 2);
    }
  if (rd == 1)
    {
      if (n == j || n == j - 1 || maze[n + 2][i] == '*')
	return (n);
      return (n + 2);
    }
  return (n);
}

int	get_x_road(char **maze, int rd, int i, int n)
{
  int	k;

  k = 0;
  while (maze[0][k] != '\0')
    k++;
  k--;
  if (rd == 0 || rd == 1)
    return (i);
  if (rd == 2)
    {
      if (i == 0 || i == 1 || maze[n][i - 2] == '*')
	return (i);
      return (i - 2);
    }
  if (rd == 3)
    {
      if (i == k || i == k - 1 || maze[n][i + 2] == '*')
	return (i);
      return (i + 2);
    }
  return (i);
}
