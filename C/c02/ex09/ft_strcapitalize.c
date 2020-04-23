/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:53:42 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/20 21:46:30 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || \
				(str[i] >= 'A' && str[i] <= 'Z') || \
					(str[i] >= '0' && str[i] <= '9'))
		{
			if (j && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!j && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}
