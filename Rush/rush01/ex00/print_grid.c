/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:24:30 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/13 21:03:03 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_grid(char **grid)
{
	int row;
	int column;

	row = 0;
	column = 0;
	while (row != 4)
	{
		while (column != 4)
		{
			grid[row][column] = grid [row][column] + '0';
			write(1, &grid[row][column], 1);
			if (column < 3)
			{
				write(1, " ", 1);
			}
			column++;
		}
		column = 0;
		write(1, "\n", 1);
		row++;
	}
}
