/*
** a_main.c for main in /home/ludovic.porokhov/Epitech-Year1-Dante_Star/astar
** 
** Made by Ludovic POROKHOV
** Login   <ludovic.porokhov@epitech.net>
** 
** Started on  Tue May  9 15:28:33 2017 Ludovic POROKHOV
** Last update Sat May 13 18:06:47 2017 Ludovic POROKHOV
*/

#include "include/my.h"

t_tile		**solving(t_pos maze, int xmax, int ymax)
{
  return (NULL);
}

void		solver(t_pos maze)
{
  int		ymax;
  int		xmax;
  t_tile	**matrix;

  ymax = tab_line(maze.lab);
  xmax = linelen(maze.lab[0]);
  matrix = allocated_struct(matrix, xmax, ymax);
  matrix = matrix_creator(matrix, maze);
  my_putmatrix(matrix, xmax, ymax);
  my_putlab(maze.lab);
  if ((matrix = solving(maze, xmax, ymax)) == NULL)
    {
      printf("no solution found");
      return ;
    }
  my_putlab(maze.lab);
  printf("\n");
}

int		main(int ac, char **av)
{
  t_pos		maze;
  
  if (ac != 2)
    return (84);
  if ((maze.lab = labyrinthe(av[1])) == NULL)
    return (84);
  solver(maze);
  return (0);
}

