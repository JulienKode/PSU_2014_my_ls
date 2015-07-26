/*
** my_strcat.c for my_strcat in /home/karst_j/rendu/Piscine_C_J07
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Tue Oct  7 20:00:12 2014 julien karst
** Last update Tue Oct  7 20:20:39 2014 julien karst
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	c;

  i = 0;
  c = 0;
  while (dest[i] != '\0')
    i++;
  while (src[c] != '\0')
    {
      dest[i] = src[c];
      i++;
      c++;
    }
  dest[i] = 0;
  return (dest);
}
