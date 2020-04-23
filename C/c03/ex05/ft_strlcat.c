/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:28:53 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/21 09:10:17 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dlen;
	unsigned int i;

	i = 0;
	dlen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (i < size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}
