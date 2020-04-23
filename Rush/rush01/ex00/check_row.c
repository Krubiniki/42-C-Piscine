/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 20:31:40 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/13 21:21:04 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_row(char grid[4][4],int col, char **argv)
{
	int	i;
	int max;
	int sight;
	
	max = 0;
	i = 0;
	sight = 0;
	while (i < 4)
	{
		if(max < grid[i][col])
		{
			max = grid[i][col];
			sight++;
		}
		i++;
	}
	
	if(sight != argv[)
		
}
