/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:12:18 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/08 11:24:57 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_printnbr(char *comb)
{
	comb[0] = comb[0] + '0';
	comb[1] = comb[1] + '0';
	comb[2] = comb[2] + '0';
	comb[3] = comb[3] + '0';
	comb[4] = comb[4] + '0';
	comb[5] = comb[5] + '0';
	comb[6] = comb[6] + '0';
	comb[7] = comb[7] + '0';
	comb[8] = comb[8] + '0';
	comb[9] = comb[9] + '0';

	write(1, &comb[0], 1);
	write(1, &comb[1], 1);
	write(1, &comb[2], 1);
	write(1, &comb[3], 1);
	write(1, &comb[4], 1);
	write(1, &comb[5], 1);
	write(1, &comb[6], 1);
	write(1, &comb[7], 1);
	write(1, &comb[8], 1);
	write(1, &comb[9], 1);
	write(1, " ," , 2);


}

void ft_print_combn (int n)
{
	char comb[n];
	
	comb[0] = 0;
	while (comb[0] < '9')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] < '9')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] < '9')
			{
				comb[3] = comb[2] +1;
				while (comb[3] < '9')
				{
					comb[4] = comb[3] + 1;
					while (comb[4] < '9')
					{
						comb[5] = comb[4] + 1;
						while (comb[5] < '9')
						{
							comb[6] = comb[5] + 1;
							while (comb[6] < '9')
							{
								comb[7] = comb[8] + 1;
								while (comb[7] < '9')
								{
									comb[8] = comb[7] + 1;
									while (comb[8] < '9')
									{
										comb[9] = comb[8] + 1;
										while (comb[9] < '9')
										{
											ft_printnbr(comb);
											comb[9]++;	
										}
										comb[8]++;
									}
									comb[7]++;
								}	
								comb[6]++;
							}
							comb[5]++;
						}
						comb[4]++;
					}
					comb[3]++;
				}
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}


}

void ft_checknbr (int n)
{
	if(0 < n && n < 10)
	{
	//	write(1, "Número compatível!", 20);
		ft_print_combn(n);
	}
	else
	{
		write(1, "Número incompatível, favor utilizar um de 1 a 9.", 51);
	}
}

int main (void)
{
	ft_checknbr(9);
	return (0);
}
