/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 09:58:45 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/18 21:01:26 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_checkbase(char *base);
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j]);
				return (-1);
		}
		if (base[i] == '-' || base[i] == '+' || base[i] == 127 || base[i] < 32)
		i++;
	}
	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putchar(int nbr, char *base);
{
	write(1, &base[nbr], 1);
}

void	ft_conversionbase(int nbr, char *base)
{
	if (nbr < ft_checkbase(base))
		ft_putchar(nbr % 10,base);
	nbr = nbr % 10;
	ft_putchar(nbr);
	ft_conversionbase(nbr / 10, base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int x;

	x = nbr;
	ft_checkbase(base);
	if(x < 0)
	{
		write(1, "-", 1);
		x = x * -1;
		ft_putchar(x, base);
	}
	else
	{
		ft_putnbr_base(x, base);
	}
}
