/*
** main.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/breadth
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Sat Apr 15 16:59:52 2017 P3N15
** Last update Fri May 12 18:18:05 2017 P3N15
*/

#include "include/my.h"


int	main(int ac, char **av)
{
  struct stat	sb;
  char		*file;
  char		**maze;
  int		x;
  int		y;

  if ((x = open(av[1], O_RDONLY)) == - 1 || ac != 2)
    return (84);
  stat(av[1], &sb);
  if ((file = malloc(sizeof(char) * (sb.st_size + 1))) == NULL)
    return (84);
  x = read(x, file, sb.st_size);
  file[x] = '\0';
  maze = malloc_maze(file);
  maze = get_maze_tab(maze, file);
  x = get_maze_x(maze);
  y = get_maze_y(maze);
  x = maze_breadth_solver(maze, int_tab_creator(maze, x, y), x, y);
  while (maze[x] != '\0')
    free(maze[x++]);
  free(maze);
  free(file);
  return (0);
}

void    my_putlab(char **tab)
{
  int   i;
  int   j;

  i = 0;
  while (tab[i] != '\0')
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
