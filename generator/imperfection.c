/*
** imperfection.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Mon Apr 10 16:26:42 2017 P3N15
** Last update Tue Apr 11 14:01:22 2017 P3N15
*/

#include "include/my.h"

char	**add_imperfection(char **maze, int *random)
{
  int	i;
  int	x;
  int	y;

  i = 0;
  while (random[i] != '\0')
    {
      y = random[i] - 1;
      x = random[i + 1] - 1;
      maze = imperfection_creator(maze, x, y);
      i = i + 2;
    }
  return (maze);
}

char	**imperfection_creator(char **maze, int x, int y)
{
  int	i = 0;
  int	random;
  int	max_x = 0;
  int	max_y = 0;

  while (maze[0][max_x] != '\0')
    max_x++;
  while (maze[max_y] != '\0')
    max_y++;
  while (i != 10)
    {
      random = rand() % 4;
      printf("%d", random);
      //      (random == 0 && go_up(maze, x, y, max_x) ? : 0;
      (random == 1 && x != max_x) ? x++ : 0;
      (random == 2 && y != 0) ? y-- : 0;
      (random == 3 && x != 0) ? x-- : 0;
      maze[y][x] = '*';
      i++;
    }
  return (maze);
}
