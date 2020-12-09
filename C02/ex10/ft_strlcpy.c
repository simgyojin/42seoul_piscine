/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:51:43 by gsim              #+#    #+#             */
/*   Updated: 2020/12/02 13:28:54 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*im;
	const char		*stmp;
	unsigned int	n;

	im = dest;
	stmp = src;
	n = size;
	if (n != 0)
	{
		while (--n != 0)
		{
			if ((*im++ = *stmp++) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*im = '\0';
		while (*stmp++)
			;
	}
	return (stmp - src - 1);
}
