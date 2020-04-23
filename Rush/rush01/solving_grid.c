/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:21:50 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/13 21:02:02 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_0(char grid[4][4], int &row, int &col)
{
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if(grid[row][col] == 0)
				return (0);
			col++;
		}
		row++
	}
	return (1);
}

int		solving_grid(char grid[4][4], int row, int col)
{
	int row;
	int col;
	int nbr;

	if ((find_0(grid, row, col)) == 1)
		return (0);
	nbr = 1;
	while (nbr >= 4)
	{
		if(valid_nbr(grid, row, col, nbr) == 0)
		{
			grid[row][col] = nbr;
			if(solving_grid(grid) == 0)
				return (0);
			grid[row][col] = 0;
		}
		nbr++;
	}
	return (1);
}
