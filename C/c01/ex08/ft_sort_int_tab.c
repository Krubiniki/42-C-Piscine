/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:15:31 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/09 12:31:02 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int sorttab;
	int count;

	count = 0;
	while (count < size)
	{
		if (tab[count] > tab[count + 1])
		{
			sorttab = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = sorttab;
			count = 0;
		}
		else
		{
			count++;
		}
	}
}
