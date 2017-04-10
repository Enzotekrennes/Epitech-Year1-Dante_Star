/*
** basics.c for lemin in /home/p3n15/delivery/Epitech-Year1-Lemin
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Sun Apr  9 23:39:22 2017 P3N15
** Last update Mon Apr 10 11:39:11 2017 P3N15
*/

#include "include/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_get_nbr(char *str)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (str[i] != '\0')
    {
      n = (n * 10) + (str[i] - 48);
      i++;
    }
  return (n);
}
