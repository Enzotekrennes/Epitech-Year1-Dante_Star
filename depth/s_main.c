/*
** s_main.c for main in /home/ludovic.porokhov/delivery/Sem 2/prog/Epitech-Year1-Dante_Star/solve
** 
** Made by Ludovic POROKHOV
** Login   <ludovic.porokhov@epitech.net>
** 
** Started on  Tue Apr 11 16:13:59 2017 Ludovic POROKHOV
<<<<<<< HEAD
** Last update Tue May  9 14:26:25 2017 Ludovic POROKHOV
=======
** Last update Thu Apr 13 10:50:21 2017 P3N15
>>>>>>> 62b1443fd154ff94bc1a379637f0d3594c2e5580
*/

#include "include/my.h"

void	solver(t_laby ia)
{
  int	line;
  int	col;

  line = tab_line(ia.lab);
  col = linelen(ia.lab[0]);
  printf("%i %i\n", line, col);
  if ((ia.lab = solving(ia, col, line)) == NULL)
    {
      printf("no solution found\n");
      return ;
    }
  my_putlab(ia.lab);
  my_putstr("\n");
}

char	**solving(t_laby ia, int xmax, int ymax)
{
  int	check;
  
  ia.x = 0;
  ia.y = 0;
  ia.lab[ia.y][ia.x] = 'o';
  while (ia.x != xmax - 1 || ia.y != ymax - 1)
    {
      check = checkmove(ia, xmax, ymax);
      if (check == 0)
	ia = forward(ia, xmax, ymax);
      else if (check == 84)
	ia = backward(ia, xmax, ymax);
      //else if (check == 42)
      //ia = (ia, xmax, ymax);
      else
	return (NULL);
      my_putlab(ia.lab);
      ia.lab[ia.y][ia.x] = 'o';
    }
  return (ia.lab);
}

int	main(int ac, char **av)
{
  t_laby	ia;

  if (ac != 2)
    return (84);
  if ((ia.lab = labyrinthe(av[1])) == NULL)
    return (84);
  solver(ia);
  return (0);
}
