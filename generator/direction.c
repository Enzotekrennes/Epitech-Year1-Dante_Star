/*
** direction.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/generator
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Tue Apr 11 16:24:19 2017 P3N15
** Last update Fri Apr 14 19:14:50 2017 P3N15
*/

#include "include/my.h"

char	**maze_up(char **maze, int x, int y)
{
  int	max_x;

  max_x = strlen(maze[0]) - 1;
  if (x == 0 || x == 1 || x == max_x || x == max_x - 1)
    return (maze);
  if (y >= 2)
    {
      (maze[y - 2][x] == 'X') ? maze[y - 1][x] = '*' : 0;
      (maze[y - 2][x] == 'X') ? maze[y - 2][x] = '*' : 0;
    }
  return (maze);
}

char	**maze_down(char **maze, int x, int y, int max_y)
{
  if (y <= max_y - 2)
    {
      (maze[y + 2][x] == 'X') ? maze[y + 1][x] = '*' : 0;
      (maze[y + 2][x] == 'X') ? maze[y + 2][x] = '*' : 0;
    }
  return (maze);
}

char	**maze_left(char **maze, int x, int y, int max_y)
{
  if (y == 0 || y == 1 || y == max_y || y == max_y - 1)
    return (maze);
  if (x >= 2)
    {
      (maze[y][x - 2] == 'X') ? maze[y][x - 1] = '*' : 0;
      (maze[y][x - 2] == 'X') ? maze[y][x - 2] = '*' : 0;
    }
  return (maze);
}

char	**maze_right(char **maze, int x, int y)
{
  int	max_x;

  max_x = strlen(maze[0]);
  if (x <= max_x - 2)
    {
      (maze[y][x + 2] == 'X') ? maze[y][x + 1] = '*' : 0;
      (maze[y][x + 2] == 'X') ? maze[y][x + 2] = '*' : 0;
    }
  return (maze);
}

char	**random_create_loop(char **maze, int x, int y)
{
  int	pos_x;
  int	pos_y;
  int	random = rand() % 2;

  pos_x = rand() % (x - 1);
  pos_y = rand() % (y - 1);
  if (pos_y % 2 == pos_x % 2 && random == 0)
    {
      if (pos_y > 0)
	pos_y--;
      else if (pos_x > 0)
	pos_x--;
    }
  else if (pos_y % 2 == pos_x % 2 && random == 1)
    {
      if (pos_x > 0)
	pos_x--;
      else if (pos_y > 0)
	pos_y--;
    }
  if (maze[pos_y][pos_x] == '*')
    maze = random_create_loop(maze, x, y);
  else
    maze[pos_y][pos_x] = '*';
  return (maze);
}
