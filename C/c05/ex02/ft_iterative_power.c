/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:16:21 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/22 22:16:41 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (nb <= 0)
		return (0);
	if (power < 0)
		return (0);
	while (power != 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
