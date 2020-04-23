/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 04:27:43 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/08 15:02:35 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int fst, int snd)
{
	char f1;
	char f2;
	char s1;
	char s2;

	f1 = fst / 10 + '0';
	f2 = fst % 10 + '0';
	s1 = snd / 10 + '0';
	s2 = snd % 10 + '0';
	if (fst != 98)
	{
		write(1, &f1, 1);
		write(1, &f2, 1);
		write(1, " ", 1);
		write(1, &s1, 1);
		write(1, &s2, 1);
		write(1, ", ", 2);
	}
	else
	{
		write(1, "98 99", 5);
	}
}

void	ft_print_comb2(void)
{
	int fst;
	int snd;

	fst = 0;
	snd = 0;
	while (fst < 99)
	{
		snd = fst + 1;
		while (snd <= 99)
		{
			ft_putchar(fst, snd);
			snd++;
		}
		snd = 0;
		fst++;
	}
}

int main() {ft_print_comb2();}
