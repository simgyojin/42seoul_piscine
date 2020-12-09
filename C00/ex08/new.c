/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:17:42 by gsim              #+#    #+#             */
/*   Updated: 2020/11/25 16:39:07 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	return_write(char *ch, int n)
{
	char	rw[n];
	int		count;
	int		ti;

	ch[n+1] = '0';
	if (ch[0] == '0')
	{
		ti = 0;
		while (ti <= n)
		{
			rw[ti] = '0';
			ti++;
		}
		count = n;
		while (count >= 0)
		{
			rw[count] = ch[count+1]+1;
			write(1, rw, n);
			write(1, ", ", 2);
			count--;
		}
	}
}


void	ft_print_combn(int n)
{
	char	result[n];
	int		count;

	count = 0;
	while (count <= n)
	{
		result[count] = '0';
		count++;
	}
	return_write(result, n);
}

int main()
{
	ft_print_combn(2);
}
