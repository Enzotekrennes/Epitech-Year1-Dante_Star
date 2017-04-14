/*
** main.c for Dante in /home/p3n15/delivery/Epitech-Year1-Dante_star
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Mon Apr 10 10:53:26 2017 P3N15
** Last update Fri Apr 14 16:03:42 2017 P3N15
*/

#include "include/my.h"

int	main(int ac, char **av)
{
  if (ac <= 2)
    return (0);
  maze_generator(my_get_nbr(av[1]), my_get_nbr(av[2]));
  return (0);
}
