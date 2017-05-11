/*
** checker.c for checker in /home/ludovic.porokhov/Epitech-Year1-Dante_Star/depth
** 
** Made by Ludovic POROKHOV
** Login   <ludovic.porokhov@epitech.net>
** 
** Started on  Tue May  9 14:08:57 2017 Ludovic POROKHOV
** Last update Thu May 11 19:28:20 2017 Ludovic POROKHOV
*/

#include "include/my.h"

int     checkmove(t_laby ia, int xmax, int ymax)
{
  if (ia.y < ymax - 1 && ia.lab[ia.y + 1][ia.x] == '*')
    return (0);
  else if (ia.y > 0 && ia.lab[ia.y - 1][ia.x] == '*')
    return (0);
  else if (ia.x < xmax - 1 && ia.lab[ia.y][ia.x + 1] == '*')
    return (0);
  else if (ia.x > 0 && ia.lab[ia.y][ia.x - 1] == '*')
    return (0);
  if (checkother(ia, xmax, ymax) == 0)
    return (84);
  return (1);
}

int     checkother(t_laby ia, int xmax, int ymax)
{
  if (ia.y < ymax - 1 && ia.lab[ia.y + 1][ia.x] == 'o')
    return (0);
  if (ia.y > 0 && ia.lab[ia.y - 1][ia.x] == 'o')
    return (0);
  if (ia.x < xmax - 1 && ia.lab[ia.y][ia.x + 1] == 'o')
    return (0);
  if (ia.x > 0 && ia.lab[ia.y][ia.x - 1] == 'o')
    return (0);
  return (84);
}
