/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:17:47 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/09 09:55:29 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int invtab[size];
	int count;

	count = size;
	while (count != 0)
	{
		invtab[count - 1] = tab[size - count];
		count--;
	}
	count = 0;
	while (count != size)
	{
		tab[count] = invtab[count];
		count++;
	}
}
