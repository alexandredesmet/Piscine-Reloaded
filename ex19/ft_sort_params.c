/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:43:56 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/12 14:49:51 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_sort_char_tab(char **tab, int size)
{
	int	i;
	int	j;

	i = 2;
	while (i < size)
	{
		j = i;
		while (j > 1 && ft_strcmp(tab[j], tab[j - 1]) < 0)
		{
			ft_swap(&tab[j], &tab[j - 1]);
			j--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
		return (1);
	ft_sort_char_tab(av, ac);
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}

/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
