/*
** imperfection.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Mon Apr 10 16:26:42 2017 P3N15
** Last update Mon Apr 10 16:34:26 2017 P3N15
*/

#include "include/my.h"

char	**add_imperfection(char **maze, int *random)
{
  int	i;

  i = 0;
  while (random[i] != '\0')
    {
      y = random[i] - 1;
      x = random[i + 1] - 1;
      maze = imperfection_creator(maze, y, x);
      i = i + 2;
    }
  return (maze);
}

char	**imperfection_creator(char **maze, int x, int y)
{
  
  return (maze);
}
