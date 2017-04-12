/*
** create_lab.c for create map in /home/ludovic.porokhov/delivery/Sem 2/prog/Epitech-Year1-Dante_Star/solve
** 
** Made by Ludovic POROKHOV
** Login   <ludovic.porokhov@epitech.net>
** 
** Started on  Wed Apr 12 14:55:08 2017 Ludovic POROKHOV
** Last update Wed Apr 12 19:09:11 2017 Ludovic POROKHOV
*/

#include "include/my.h"

char	**make_tab(char *file, int lines)
{
  char	**laby;
  int	i;
  int	k;
  int	j;
  int	len;

  i = 0;
  j = 0;
  laby = malloc(sizeof(char *) * (lines + 1));
  while (file[i])
    {
      len = linelen(file + i);
      laby[j] = malloc(sizeof(char) * len);
      k = 0;
      while (file[i] != '\n' && file[i] != '\0')
	{
	  laby[j][k] = file[i];
	  k++;
	  i++;
	}
      laby[j][k] = '\0';
      i++;
      j++;
    }
  laby[j] = NULL;
  return (laby);
}

int	linelen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\n' && str[i] != '\0')
    i++;
  return (i);
}

int	how_many_lines(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 1;
  while (str[i])
    {
      if (str[i] == '\n')
	j++;
      i++;
    }
  return (j);
}

char    *file_reader(char *filename)
{
  char  *file;
  int   fd;
  int   gotten;

  if ((fd = open(filename, O_RDONLY)) == -1)
    return (NULL);
  if ((file = malloc(7000)) == NULL)
    return (NULL);
  while ((gotten = read(fd, file, 7000)) > 0)
    file[gotten] = '\0';
  return (file);
}

char    **labyrinthe(char *filename)
{
  char  **laby;
  char  *file;
  int   lines;
  int   i;

  if ((file = file_reader(filename)) == NULL)
    return (NULL);
  lines = how_many_lines(file);
  laby = make_tab(file, lines);
  return (laby);
}
