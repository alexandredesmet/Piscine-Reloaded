/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:01:11 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/12 15:16:14 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*arr;
	int	n;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	arr = (int *)malloc(range * sizeof(int));
	if (!arr)
		return (0);
	i = 0 ;
	n = min;
	while (i < range)
	{
		arr[i] = n;
		i++;
		n++;
	}
	return (arr);
}
/*
#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	int r;
	int *t;

	i = 0;
	if(ac != 3)
		return 1;
	r = atoi(av[2])-atoi(av[1]);
	t = ft_range(atoi(av[1]),atoi(av[2]));
	while(i < r)
	{
		printf("%d, ", t[i]);
		i++;
	}
	return 1;

}*/
