/*
** main.c for Dante in /home/p3n15/delivery/Epitech-Year1-Dante_star
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Mon Apr 10 10:53:26 2017 P3N15
** Last update Fri Apr 14 18:44:19 2017 P3N15
*/

#include "include/my.h"

int	main(int ac, char **av)
{
  if (ac <= 2)
    return (0);
  if (my_get_nbr(av[1]) <= 0 || my_get_nbr(av[2]) <= 0)
    return (0);
  if (ac == 3)
    maze_generator(my_get_nbr(av[1]), my_get_nbr(av[2]));
  if (ac == 4 && my_strsame(av[3], "perfect") == 0)
    perfect_maze_creator(my_get_nbr(av[1]), my_get_nbr(av[2]));
  return (0);
}
