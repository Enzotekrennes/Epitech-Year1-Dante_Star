/*
** create_matrice.c for create matrice in /home/ludovic.porokhov/Epitech-Year1-Dante_Star/astar
** 
** Made by Ludovic POROKHOV
** Login   <ludovic.porokhov@epitech.net>
** 
** Started on  Fri May 12 13:31:15 2017 Ludovic POROKHOV
** Last update Sat May 13 18:06:55 2017 Ludovic POROKHOV
*/

#include "include/my.h"

t_tile	**allocated_struct(t_tile **matrix, int xmax, int ymax)
{
  int	i;

  i = 0;
  matrix = malloc(sizeof(t_tile *) * ymax);
  while (i != ymax)
    {
      matrix[i] = malloc(sizeof(t_tile) * xmax);
      i++;
    }
  return (matrix);
}

t_tile	**matrix_creator(t_tile **matrix, t_pos maze)
{
  int	i;
  int	j;

  j = 0;
  while (maze.lab[j] != NULL)
    {
      i = 0;
      while (maze.lab[j][i] != '\0')
	{
	  if (maze.lab[j][i] == 'X')
	    matrix[j][i].type = 1;
	  else
	    matrix[j][i].type = 0;
	  i++;
	}
      j++;
    }
  return (matrix);
}
