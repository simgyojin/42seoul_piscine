/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:20:40 by gsim              #+#    #+#             */
/*   Updated: 2020/12/09 11:35:17 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int nbrr[100];
	int	i;

	i = 0;
	base_size = 0;
	if (is_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[base_size])
			base_size++;
		while (nbr)
		{
			nbrr[i] = nbr % base_size;
			nbr = nbr / base_size;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbrr[i]]);
	}
}
