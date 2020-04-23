/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 10:44:04 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/13 21:04:15 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**reset_grid(char **grid)
{
	int row;
	int column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			grid[row][column] = 0;
			column++;
		}
		row++;
	}
	return (grid);
}
