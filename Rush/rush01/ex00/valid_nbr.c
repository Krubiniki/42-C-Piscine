/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:46:38 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/13 21:00:45 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		used_row(char grid[4][4], int row, int nbr)
{
	int col;
	
	col = 0;
	while (col < 4)
	{
		if (grid[row][col] == nbr)
			return (0);
		col++;
	}
	return (1);

}

int		used_col(char grid[4][4], int col, int nbr)
{
	int row;
	
	row = 0;
	while (row < 4)
	{
		if (grid[row][col] == nbr)
			return (0);
		row++;
	}
	return (1);
}

int		valid_nbr(char grid[4][4], int row, int col, int nbr, **argv)
{
	if((used_row(grid, row, nbr) == 1) &&
		(used_col(grid, col, nbr) == 1) &&
		(check_row(grid, col, argv) == 1) &&
		(check_col(grid, row, argv) == 1) &&
		(grid[row][col] == 0))
		return (0);

	return(1);
}
