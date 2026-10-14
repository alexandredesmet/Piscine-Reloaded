/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:50:16 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/12 17:06:01 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}

/*
#include <stdio.h>

int	ft_is_upper_case(char *str)
{
	if (str[0] >= 'A' && str[0] <= 'Z')
		return (1);
	return (0);
}

int	main(void)
{
	char	*tab[5] = {"Bonjour", "hello", "Monde", "test", 0};
	int		result;

	result = ft_count_if(tab, ft_is_upper_case);
	printf("%d\n", result);
	return (0);
}
*/
