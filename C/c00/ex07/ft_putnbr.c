/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:21:39 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/08 11:35:51 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**pos max int 2147483647
**neg max int 2147483648
*/

void	ft_printnumber(int nb)
{
	char c;

	if (nb > 10)
	{
		ft_printnumber(nb / 10);
	}
	nb = nb % 10;
	c = nb + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int n;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			n = nb * -1;
			write(1, "-", 1);
			ft_printnumber(n);
		}
		if (nb >= 0)
			ft_printnumber(nb);
	}
}
