/*
** way_finder.c for dante in /home/p3n15/delivery/Epitech-Year1-Dante_star/generator
** 
** Made by P3N15
** Login   <alexandre1.lefevre@epitech.eu>
** 
** Started on  Thu Apr 13 11:29:08 2017 P3N15
** Last update Thu Apr 13 12:40:24 2017 P3N15
*/

#include "include/my.h"

char	**road_up(char **maze, int i, int n)
{
  if (n == 0 || n == 1 || maze[n - 2][i] == '*')
    return (maze);
  maze[n - 1][i] = '*';
  maze[n - 2][i] = '*';
  return (maze);
}

char	**road_down(char **maze, int i, int n)
{
  int	j;

  j = 0;
  while (maze[j] != '\0')
    j++;
  j--;
  if (n == j || n == j - 1 || maze[n + 2][i] == '*')
    return (maze);
  maze[n + 1][i] = '*';
  maze[n + 2][i] = '*';
  return (maze);
}

char	**road_left(char **maze, int i, int n)
{
  if (i == 0 || i == 1 || maze[n][i - 2] == '*')
    return (maze);
  maze[n][i - 1] = '*';
  maze[n][i - 2] = '*';
  return (maze);
}

char	**road_right(char **maze, int i, int n)
{
  int	k;

  k = 0;
  while (maze[0][k] != '\0')
    k++;
  k--;
  if (i == k || i == k - 1 || maze[n][i + 2] == '*')
    return (maze);
  maze[n][i + 1] = '*';
  maze[n][i + 2] = '*';
  return (maze);
}
