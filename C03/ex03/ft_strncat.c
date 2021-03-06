/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:24:22 by gsim              #+#    #+#             */
/*   Updated: 2020/12/06 18:58:12 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0' && nb > 0)
	{
		dest[i++] = *src;
		src++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
