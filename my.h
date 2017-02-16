/*
** my.h for my in /home/TiphaineLaurent/Library
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed Jan  4 12:37:56 2017 Tiphaine LAURENT
** Last update Fri Feb  3 14:49:39 2017 Tiphaine LAURENT
*/

#ifndef MY_H_
# define MY_H_

#include <unistd.h>
#include <stdlib.h>

void		my_putchar(char);
int		is_alpha(char);
int		is_digit(char);
int		is_nbr(char *);
int		my_isneg(int);
int		my_swap(int *, int *);
int		my_putstr(char *);
int		my_putnbr(int);
char		*base_me(int, int);
int		my_strlen(char *);
int		my_getnbr(char *);
int		my_power_rec(int, int);
int		my_sqrt(int);
int		my_is_prime(int);
int		my_strcpy(char *, char *);
int		my_strncpy(char *, char *, int);
int		my_strcmp(char *, char *);
int		my_strncmp(char *, char *, int);
char		*my_epure_str(char *, char);
char		*my_strcat(char *, char *);
int		my_tablen(char **);
char		**my_str_to_wordtab(char *, char);
char		*my_revstr(char *);

#endif /* !MY_H_ */
