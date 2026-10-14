/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesmet <adesmet@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:20:10 by adesmet           #+#    #+#             */
/*   Updated: 2026/10/12 17:32:08 by adesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(2, str, i);
}

int	ft_display_file(char *fileName)
{
	int		fd;
	int		size;
	char	buf[1024];

	fd = open(fileName, O_RDONLY);
	if (fd < 0)
		return (-1);
	size = read(fd, buf, 1024);
	while (size > 0)
	{
		write(1, buf, size);
		size = read(fd, buf, 1024);
	}
	close(fd);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_error("File name missing.\n");
		return (1);
	}
	if (ac > 2)
	{
		ft_error("Too many arguments.\n");
		return (1);
	}
	if (ft_display_file(av[1]) < 0)
	{
		ft_error("Cannot read file.\n");
		return (1);
	}
	return (0);
}
