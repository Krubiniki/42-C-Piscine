/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:06:17 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/20 19:17:39 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_how_muchlow(int numbers)
{
	if (numbers == 1)
		return (1);
	if (numbers == 2)
		return (2);
	if (numbers == 3)
		return (3);
	if (numbers >= 4 && numbers <= 6)
		return (4);
	if (numbers >= 7 && numbers <= 9)
		return (5);
	if (numbers == 10 && numbers <= 12)
		return (6);
	return (0);
}

int		ft_how_much(char *result)
{
	int i;

	i = 0;
	while (result[i] != '\n')
		i++;
	result[i] = '\0';
	i = 0;
	while (result[i] != ':')
		i++;
	i = i + 2;
	while (result[i] != '\0')
	{
		write(1, &result[i], 1);
		i++;
	}
	return (0);
}

int		ft_get_number(char *input, char *dict)
{
	int i;
	int j;

	i = 0;
	while (dict[i] != '\0')
	{
		j = 0;
		while ((dict[i + j] == input[j]) && (dict[i + j] != '\0'))
		{
			if (input[j + 1] == '\0')
				ft_how_much(&dict[i]);
			j++;
		}
		i++;
	}
	return (0);
}
