/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:29:59 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/10 08:53:30 by mkrubini         ###   ########.fr       */
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

int		ft_str_is_alpha(char *str)
{
	int i;
	int length;

	i = 0;
	length = ft_strlen(str);
	while (i < length)
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}
