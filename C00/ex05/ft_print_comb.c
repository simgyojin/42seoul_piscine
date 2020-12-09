/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:16:26 by gsim              #+#    #+#             */
/*   Updated: 2020/11/23 15:45:13 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char printt[3];

	printt[0] = '0';
	while (printt[0] <= '7')
	{
		printt[1] = printt[0] + 1;
		while (printt[1] <= '8')
		{
			printt[2] = printt[1] + 1;
			while (printt[2] <= '9')
			{
				write(1, printt, 3);
				if (printt[0] != '7' || printt[1] != '8' || printt[2] != '9')
				{
					write(1, ", ", 2);
				}
				++printt[2];
			}
			++printt[1];
		}
		++printt[0];
	}
}
