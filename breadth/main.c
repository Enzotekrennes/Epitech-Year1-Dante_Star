/*
** main.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/breadth
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Sat Apr 15 16:59:52 2017 P3N15
** Last update Sat Apr 29 14:55:52 2017 P3N15
*/

#include "include/my.h"


int	main(int ac, char **av)
{
  struct stat	sb;
  char		*file;
  char		**maze;
  int		fd;
  int		x;
  int		y;

  if (ac != 2)
    return (0);
  if ((fd = open(av[1], O_RDONLY)) == - 1)
    return (0);
  stat(av[1], &sb);
  file = malloc(sizeof(char) * sb.st_size);
  fd = read(fd, file, sb.st_size);
  file[fd] = '\0';
  maze = malloc_maze(file);
  maze = get_maze_tab(maze, file);
  maze[0][0] = 'o';
  x = get_maze_x(maze);
  y = get_maze_y(maze);
  maze_breadth_solver(maze, x, y);
  return (0);
}
