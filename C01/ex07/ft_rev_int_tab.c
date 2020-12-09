/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 19:00:46 by gsim              #+#    #+#             */
/*   Updated: 2020/11/30 11:20:35 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		itemp;
	int		count;

	count = 0;
	size = size - 1;
	while (count <= size / 2)
	{
		itemp = tab[size - count];
		tab[size - count] = tab[count];
		tab[count] = itemp;
		count++;
	}
}
