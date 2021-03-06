/*
** my.h for  in /home/karst_j/rendu/Piscine_C_J11
** 
** Made by julien karst
** Login   <karst_j@epitech.net>
** 
** Started on  Mon Oct 20 12:37:53 2014 julien karst
** Last update Tue Nov 25 22:10:41 2014 Julien Karst
*/

#ifndef MY_H_
# define MY_H_

void	my_putchar(char c);

int	my_isneg(int nb);

int	my_put_nbr(int nb);

int	my_put_nbr_long(long int nb);

int	my_put_nbr_unsigned(unsigned int nb);

int	my_swap(int *a, int *b);

int	my_putstr(char *str);

int	my_strlen(char *str);

int	my_getnbr(char *str);

void	my_sort_int_tab(int *tab, int size);

int	my_power_rec(int nb, int power);

int	my_square_root(int nb);

int	my_is_prime(int nombre);

int	my_find_prime_sup(int nb);

char	*my_strcpy(char *dest, char *src);

char	*my_strncpy(char *dest, char *src, int nb);

char	*my_revstr(char *str);

char	*my_strstr(char *str, char *to_find);

int	my_strcmp(char *s1, char *s2);

int	my_strncmp(char *s1, char *s2, int nb);

char	*my_strupcase(char *str);

char	*my_strlowcase(char *str);

char	*my_strcapitalize(char *str);

int	my_str_isalpha(char *str);

int	my_str_isnum(char *str);

int	my_str_islower(char *str);

int	my_str_isupper(char *str);

int	my_str_isprintable(char *str);

int	my_showstr(char *str);

int	my_showmem(char *str, int size);

char	*my_strcat(char *dest, char *src);

char	*my_strncat(char *dest, char *src, int nb);

int	my_strlcat(char *dest, char *src, int size);

void    my_put_nbr_base(int nb, char *base);

void    my_put_nbr_base_long(long nb, char *base);

#endif /* MY_H_ */
