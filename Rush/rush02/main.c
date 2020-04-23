/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 16:56:11 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/20 19:15:05 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "merder.h"

int		ft_check_openread(int fd)
{
	if (fd < 0)
	{
		write(1, "Error\n", 6);
		return (2);
	}
	return (0);
}

int		ft_checkinput(char **argv)
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		check;
	char	buffer[1000];

	if (argc != 2 || !(argv[1]) || argv[1][0] == '\0')
	{
		write(1, "Error\n", 6);
		return (1);
	}
	check = ft_checkinput(argv);
	if (check == 1)
		return (1);
	fd = open("numbers.dict", O_RDONLY);
	check = ft_check_openread(fd);
	if (check == 2)
		return (2);
	read(fd, &buffer, 1000);
	check = ft_check_openread(fd);
	if (check == 2)
		return (2);
	ft_get_number(argv[1], buffer);
}
