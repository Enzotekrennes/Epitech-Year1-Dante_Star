/*
** solver.c for solver in /home/ludovic.porokhov/delivery/Sem 2/prog/Epitech-Year1-Dante_Star/solve
** 
** Made by Ludovic POROKHOV
** Login   <ludovic.porokhov@epitech.net>
** 
** Started on  Wed Apr 12 16:52:23 2017 Ludovic POROKHOV
** Last update Thu May 11 19:22:49 2017 Ludovic POROKHOV
*/

#include "include/my.h"

t_laby	forward(t_laby ia, int xmax, int ymax)
{
  if (ia.x < xmax - 1 && ia.lab[ia.y][ia.x + 1] == '*')
    ia.x++;
  else if (ia.y < ymax - 1 && ia.lab[ia.y + 1][ia.x] == '*')
    ia.y++;
  else if (ia.y > 0 && ia.lab[ia.y - 1][ia.x] == '*')
    ia.y--;
  else if (ia.x > 0 && ia.lab[ia.y][ia.x - 1] == '*')
    ia.x--;
  return (ia);
}

t_laby	backward(t_laby ia, int xmax, int ymax)
{
  ia.lab[ia.y][ia.x] = 'D';
  if (ia.y < ymax - 1 && ia.lab[ia.y + 1][ia.x] == 'o')
    ia.y++;
  else if (ia.x < xmax - 1 && ia.lab[ia.y][ia.x + 1] == 'o')
    ia.x++;
  else if (ia.y > 0 && ia.lab[ia.y - 1][ia.x] == 'o')
    ia.y--;
  else if (ia.x > 0 && ia.lab[ia.y][ia.x - 1] == 'o')
    ia.x--;
  return (ia);
}

