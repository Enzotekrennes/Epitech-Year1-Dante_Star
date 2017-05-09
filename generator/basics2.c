/*
** basics2.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/generator
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Fri Apr 14 18:22:34 2017 P3N15
** Last update Thu Apr 27 16:15:49 2017 P3N15
*/

#include "include/my.h"

char	**maze_odd_x(char **maze, int x)
{
  int	i;

  i = 0;
  while (maze[i] != '\0')
    {
      if (((rand() % 2) != 0) && (maze[i][x - 1] == '*')
	  && ((i % 2) == 0) && (i != x - 1))
	maze[i][x] = '*';
      i++;
    }
  return (maze);
}

char	**maze_odd_y(char **maze, int y)
{
  int	i;

  i = 0;
  while (maze[0][i] != '\0')
    {
      if (((rand() % 2) != 0) && (maze[y - 1][i] == '*')
	  && ((i % 2) == 0) && (i != y - 1))
	maze[y][i] = '*';
      i++;
    }
  return (maze);
}

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

void    my_putlab(char **tab)
{
  int   i;
  int   j;

  i = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == '*')
	    printf("\x1B[30m█\x1B[0m");
	  else if (tab[i][j] == 'X')
	    printf("\x1B[31m█\x1B[0m");
	  else if (tab[i][j] == 'o')
	    printf("\x1B[32m█\x1B[0m");
	  
	  j++;
	}
      printf("\n");
      i++;
    }
}

void	clrscr()
{
  system("clear");
}
