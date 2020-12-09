/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:01:07 by gsim              #+#    #+#             */
/*   Updated: 2020/11/25 16:16:06 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void return_write(char *ch, int n)
{
	char rw[n+1];
	char temp[n];
	int count;
	int ti;

	if (rw[0] != '1')
	{
		ti = 0;
		rw[n+1] = '0';
		while (ti <= n)
		{
			temp[ti] = '0';
			rw[ti] = '0';
			ti++;
		}
		count = 0;
		while (count <= n)
		{
			rw[count+1] = ch[count]+1;
			ti = count;
			while (ti <= 10)
			{
				rw[count] = rw[count]+1;
				temp[count-1] = rw[count];
				write(1, rw, n+1);
				write(1, ", ", 2);
				ti++;
			}
			count++;
		}
		
	}
}
	


void ft_print_combn(int n)
{
	char result[n];
	int count;

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
