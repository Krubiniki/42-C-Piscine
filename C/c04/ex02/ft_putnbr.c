/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 21:00:16 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/22 10:54:13 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(long int nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	long x;

	x = nb;
	if (x < 0)
	{
		x = x * -1;
		write(1, "-", 1);
	}
	if (x > 9)
		ft_putnbr(x / 10);
	ft_putchar(x % 10 + '0');
}
