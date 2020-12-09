/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:43:56 by gsim              #+#    #+#             */
/*   Updated: 2020/11/25 20:05:24 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	get_len(const char *lstr)
{
	unsigned int	count;

	count = 0;
	while (lstr[count] != '\0')
	{
		count++;
	}
	return (count);
}

void			ft_putstr(char *str)
{
	int				len;

	len = get_len(str);
	write(1, &*str, len);
}
