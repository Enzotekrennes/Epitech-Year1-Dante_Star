/*
** basics2.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/generator
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Fri Apr 14 18:22:34 2017 P3N15
** Last update Fri Apr 14 18:44:41 2017 P3N15
*/

#include "include/my.h"

int	my_strsame(char *str, char *str2)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] != str2[i])
	return (1);
      i++;
    }
  if (str[i] != str2[i])
    return (1);
  return (0);
}
