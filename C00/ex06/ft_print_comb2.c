/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bry.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 00:10:27 by gsim              #+#    #+#             */
/*   Updated: 2020/11/25 14:06:13 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mkif(char *darn)
{
	char	ll[5];

	ll[0] = darn[0];
	ll[1] = darn[1];
	ll[2] = darn[2];
	ll[3] = darn[3];
	ll[4] = darn[4];
	if (ll[0] != ll[3] || ll[1] != ll[4])
	{
		write(1, ll, 5);
		if (ll[0] != '9' || ll[1] != '8' || ll[3] != '9' || ll[4] != '9')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	char	llist[5];

	llist[2] = ' ';
	while (llist[0] <= '9')
	{
		llist[1] = '0';
		while (llist[1] <= '8')
		{
			llist[3] = '0';
			while (llist[3] <= '9')
			{
				llist[4] = '0';
				while (llist[4] <= '9')
				{
					mkif(llist);
					llist[4]++;
				}
				llist[3]++;
			}
			llist[1]++;
		}
		llist[0]++;
	}
}
