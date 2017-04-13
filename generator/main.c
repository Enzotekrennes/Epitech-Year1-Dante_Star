/*
** main.c for Dante in /home/p3n15/delivery/Epitech-Year1-Dante_star
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Mon Apr 10 10:53:26 2017 P3N15
** Last update Thu Apr 13 12:47:18 2017 P3N15
*/

#include "include/my.h"

int	main(int ac, char **av)
{
  int	x;
  int	y;

  if (ac <= 2)
    return (0);
  x = my_get_nbr(av[1]);
  y = my_get_nbr(av[2]);
  maze_generator(x, y);
  return (0);
}
