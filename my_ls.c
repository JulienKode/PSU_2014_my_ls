/*
** my_ls.c for  in /home/karst_j/rendu/PSU_2014_my_ls
** 
** Made by Julien Karst
** Login   <karst_j@epitech.net>
** 
** Started on  Wed Nov 26 08:13:02 2014 Julien Karst
** Last update Sat Nov 29 23:27:25 2014 Julien Karst
*/

#include "my_ls.h"

int	my_ls_base(char **argv, int ac)
{
  DIR		*dirp;
  struct dirent	*entry;
  int		i;

  i = 1;
  if (ac == 1)
    argv[i] = ".";
  while (argv[i] != NULL)
    {
      if (ac >= 3)
	my_printf("%s:\n", argv[i]);
      if ((dirp = opendir(argv[i])) == NULL)
	{
	  my_printf("erreur");
	  return (1);
	}
      while ((entry = readdir(dirp)) != NULL)
	{
	  if (entry->d_name[0] != '.')
	    my_printf("%s  ", entry->d_name);
	}
      my_printf (i < (ac - 1) ? "\n\n" : "\n");
      closedir(dirp);
      i++;
    }
}
