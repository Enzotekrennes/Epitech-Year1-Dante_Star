/*
** basic.c for sic in /home/ludovic.porokhov/delivery/Sem 2/prog/Epitech-Year1-Dante_Star/solve
** 
** Made by Ludovic POROKHOV
** Login   <ludovic.porokhov@epitech.net>
** 
** Started on  Tue Apr 11 16:13:49 2017 Ludovic POROKHOV
** Last update Sat May 13 18:07:09 2017 Ludovic POROKHOV
*/

#include "include/my.h"

void	my_putstr(char *str)
{
  write(1, str, strlen(str));
}

void	my_putmatrix(t_tile **matrix, int xmax, int ymax)
{
  int	i;
  int	j;

  j = 0;
  while (j != ymax)
    {
      i = 0;
      while (i != xmax)
	{
	  printf("%i", matrix[j][i].type);
	  i++;
	}
      j++;
      printf("\n");
    }
}

void	my_putlab(char **tab)
{
  int	i;
  int	j;

  i = 0;
  //system("@cls||clear");
  //usleep(30000);
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == 'D')
	    printf("\x1B[31m█\x1B[0m");
	  else if (tab[i][j] == 'o')
	    printf("\x1B[32m█\x1B[0m");
	  else if (tab[i][j] == '*')
	    printf("\x1B[34m█\x1B[0m");
	  else if (tab[i][j] == 'X')
	    printf("\x1B[37m█\x1B[0m");
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
