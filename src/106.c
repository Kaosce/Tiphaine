/*
** 106.c for 106 in /home/TiphaineLaurent/106bombyx
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Mon Feb  6 10:28:19 2017 Tiphaine LAURENT
** Last update Thu May 25 15:30:44 2017 Tiphaine LAURENT
*/

#include "b106.h"

double		get_q(char **av, double k)
{
  double	x2;
  double	x1;
  double	q;

  x1 = atof(av[1]);
  x2 = k * x1 * ((1000 - x1) / 1000);
  q = pow((x2 / x1), (1 / (2 - 1)));
  return (q);
}

int		b106(int ac, char **av)
{
  double	xi;
  double	k;
  double	q;
  int		i;
  int		i0;
  int		i1;

  xi = atof(av[1]);
  if (ac == 3)
    {
      i = 1;
      k = atof(av[2]);
      printf("%d %.2f\n", i, xi);
      while (i < 100)
	{
	  xi = k * xi * ((1000 - xi) / 1000);
	  printf("%d %.2f\n", i + 1, xi);
	  i += 1;
	}
    }
  if (ac == 4)
    {
      k = 1.0;
      while (k <= 4.0)
	{
	  i = 1;
	  q = get_q(av, k);
	  i0 = atoi(av[2]);
	  i1 = atoi(av[3]);
	  while (i < i1)
	    {
	      xi = k * xi * ((1000 - xi) / 1000);
	      if (i >= i0)
		printf("%.2f %.2f\n", k, xi);
	      i += 1;
	    }
	  k += 0.01;
	}
    }
  return (0);
}

int		main(int ac, char **av)
{
  if (ac > 1)
    b106(ac, av);
  return (0);
}
