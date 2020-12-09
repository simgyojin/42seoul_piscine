/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 20:12:20 by gsim              #+#    #+#             */
/*   Updated: 2020/11/30 11:21:16 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	itemp;
	int	stemp;
	int	count;

	stemp = size * size;
	count = 0;
	while (count <= stemp)
	{
		if (tab[count] >= tab[count + 1])
		{
			itemp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = itemp;
		}
		if (count == size)
		{
			count = 0;
		}
		count++;
	}
}
