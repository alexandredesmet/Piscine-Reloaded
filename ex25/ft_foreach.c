/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:44:18 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/12 15:48:20 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (!tab || !f)
		return ;
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <unistd.h>

void	ft_print_digit(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	tab[6] = {1, 2, 3, 4, 5, 6};

	ft_foreach(tab, 6, ft_print_digit);
}
*/
