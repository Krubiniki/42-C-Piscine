/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:37:26 by mkrubini          #+#    #+#             */
/*   Updated: 2020/01/20 20:29:41 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		j++;
		i++;
	}
	return (i);
}

int		ft_str_is_printable(char *str)
{
	int i;
	int length;

	i = 0;
	length = ft_strlen(str);
	while (i < length)
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
