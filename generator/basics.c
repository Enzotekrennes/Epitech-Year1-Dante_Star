/*
** basics.c for lemin in /home/p3n15/delivery/Epitech-Year1-Lemin
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Sun Apr  9 23:39:22 2017 P3N15
** Last update Thu May 11 20:13:36 2017 P3N15
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

void	my_puttab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      my_putstr(tab[i]);
      i++;
      if (tab[i] != '\0')
	my_putchar('\n');
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

int	my_get_nbr(char *str)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 47 || str[i] >= 58)
	return (-1);
      n = (10 * n) + (str[i] - 48);
      i++;
    }
  return (n);
}
