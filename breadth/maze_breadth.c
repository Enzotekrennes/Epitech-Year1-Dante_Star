/*
** maze_breadth.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/breadth
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Sat Apr 15 17:36:38 2017 P3N15
** Last update Mon Apr 17 16:22:24 2017 P3N15
*/

#include "include/my.h"

int	separate_path(char **maze, int i, int n)
{
  pid_t	pid = fork();
  int	dir1;
  int	dir2;

  dir1 = first_path(maze, i, n);
  dir2 = second_path(maze, i, n, dir1);
  if (pid == 0)
    {
      (dir1 == 0) ? n-- : 0;
      (dir1 == 1) ? i-- : 0;
      (dir1 == 2) ? i++ : 0;
      (dir1 == 3) ? n++ : 0;
    }
  else if (pid > 0)
    {
      (dir2 == 0) ? n-- : 0;
      (dir2 == 1) ? i-- : 0;
      (dir2 == 2) ? i++ : 0;
      (dir2 == 3) ? n++ : 0;
    } 
  maze[n][i] = 'o';
  maze_breadth_solver(maze, i, n);
  return (0);
}

int	maze_breadth_solver(char **maze, int i, int n)
{
  int	x;
  int	y;

  x = get_maze_x(maze);
  y = get_maze_y(maze);
  while (i != x || n != y)
    {
      if (multiple_path(maze, i, n) != 0)
	{
	  separate_path(maze, i, n);
	  exit(0);
	}
      if (i != 0 && maze[n][i - 1] == '*')
	i--;
      else if (i != x && maze[n][i + 1] == '*')
	i++;
      else if (n != 0 && maze[n - 1][i] == '*')
	n--;
      else if (n != y && maze[n + 1][i] == '*')
	n++;
      maze[n][i] = 'o';
    }
  my_puttab(maze);
  return (0);
}

int	first_path(char **maze, int i, int n)
{
  int	x;
  int	y;

  x = get_maze_x(maze);
  y = get_maze_y(maze);
  if (n != 0 && maze[n - 1][i] == '*')
    return (0);
  if (i != 0 && maze[n][i - 1] == '*')
    return (1);
  if (i != x && maze[n][i + 1] == '*')
    return (2);
  if (n != y && maze[n + 1][i] == '*')
    return (3);
}

int	second_path(char **maze, int i, int n, int dir1)
{
  int	x;
  int	y;

  x = get_maze_x(maze);
  y = get_maze_y(maze);
  if (n != 0 && maze[n - 1][i] == '*' && dir1 != 0)
    return (0);
  if (i != 0 && maze[n][i - 1] == '*' && dir1 != 1)
    return (1);
  if (i != x && maze[n][i + 1] == '*' && dir1 != 2)
    return (2);
  if (n != y && maze[n + 1][i] == '*' && dir1 != 3)
    return (3);
  
}
