/*
** basic.c for sic in /home/ludovic.porokhov/delivery/Sem 2/prog/Epitech-Year1-Dante_Star/solve
** 
** Made by Ludovic POROKHOV
** Login   <ludovic.porokhov@epitech.net>
** 
** Started on  Tue Apr 11 16:13:49 2017 Ludovic POROKHOV
** Last update Wed Apr 12 19:12:43 2017 Ludovic POROKHOV
*/

#include "include/my.h"

void	my_putstr(char *str)
{
  write(1, str, strlen(str));
}

void	my_puttab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i++]);
      my_putstr("\n");
    }
}

void	my_putlab(char **tab)
{
  int	i;
  int	j;

  i = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == 'D')
	    printf("*");
	  else 
	    printf("%c", tab[i][j]);
	  j++;
	}
      printf("\n");
      i++;
    }
}

int     howmanylines(char *str)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	j++;;
      i++;
    }
}

int	tab_line(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    i++;
  return (i);
}
