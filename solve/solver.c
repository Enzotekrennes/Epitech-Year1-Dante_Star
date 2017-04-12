/*
** solver.c for solver in /home/ludovic.porokhov/delivery/Sem 2/prog/Epitech-Year1-Dante_Star/solve
** 
** Made by Ludovic POROKHOV
** Login   <ludovic.porokhov@epitech.net>
** 
** Started on  Wed Apr 12 16:52:23 2017 Ludovic POROKHOV
** Last update Wed Apr 12 19:15:20 2017 Ludovic POROKHOV
*/

#include "include/my.h"

int	checkmove(t_laby ia, int xmax, int ymax)
{
  if (ia.y < ymax - 1)
    if (ia.lab[ia.y + 1][ia.x] == '*')
      return (0);
  if (ia.y > 0)
    if (ia.lab[ia.y - 1][ia.x] == '*')
      return (0);
  if (ia.x < xmax - 1)
    if (ia.lab[ia.y][ia.x + 1] == '*')
      return (0);
  if (ia.x > 0)
    if (ia.lab[ia.y][ia.x - 1] == '*')
      return (0);
  return (84);
}

t_laby	forward(t_laby ia, int xmax, int ymax)
{
  if (ia.y < ymax - 1)
    if (ia.lab[ia.y + 1][ia.x] == '*')
      {
	ia.y++;
	return (ia);
      }
  if (ia.y > 0)
    if (ia.lab[ia.y - 1][ia.x] == '*')
      {
	ia.y--;
	return (ia);
      }
  if (ia.x < xmax - 1)
    if (ia.lab[ia.y][ia.x + 1] == '*')
      {
	ia.x++;
	return (ia);
      }
  if (ia.x > 0)
    if (ia.lab[ia.y][ia.x - 1] == '*')
      {
	ia.x--;
	return (ia);
      }
}

t_laby	backward(t_laby ia, int xmax, int ymax)
{
  ia.lab[ia.y][ia.x] = 'D';
  if (ia.y < ymax - 1)
    if (ia.lab[ia.y + 1][ia.x] == 'o')
      {
	ia.y++;
	return (ia);
      }
  if (ia.x < xmax - 1)
    if (ia.lab[ia.y][ia.x + 1] == 'o')
      {
	ia.x++;
	return (ia);
      }
  if (ia.y > 0)
    if (ia.lab[ia.y - 1][ia.x] == 'o')
      {
	ia.y--;
	return (ia);
      }
  if (ia.x > 0)
    if (ia.lab[ia.y][ia.x - 1] == 'o')
      {
	ia.x--;
	return (ia);
      }
}
