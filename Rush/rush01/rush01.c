/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 11:11:00 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/13 21:01:28 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**reset_grid(char **grid); // jogar no header
void	print_grid(char **grid);

int		input_check(int argc, char **argv, int k)
{
	if (argc != 2)
		return (1);

	k = 0;
	while (argv[1][k] != '\0')
	{
		if ((argv[1][k] != '1') && (argv[1][k] != '2') &&
			(argv[1][k] != '3') && (argv[1][k] != '4'))
			return (1);
		k++;
		if (argv[1][k] != '\0')
		{
			if (argv[1][k] != ' ')
				return (1);
			k++;
		}
	}
	if (k != 31)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		check;
	int		i;
	char	**grid;

	check = input_check(argc, argv, i);
	if (check == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = -1;
	grid = malloc(4 * sizeof(char *));
	while (i++ < 3)
	{
		grid[i] = malloc(4 * sizeof(char));
	}
	grid = reset_grid(grid);
	print_grid(grid);
	return (0);
}
