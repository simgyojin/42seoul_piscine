/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 23:02:03 by gsim              #+#    #+#             */
/*   Updated: 2020/11/24 01:09:43 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		get_len(int input)
{
	int		count;

	count = 0;
	while (input >= 10)
	{
		input = input / 10;
		count++;
	}
	return (count);
}

int		get_num(int len)
{
	int		result;
	int		count;

	result = 1;
	count = 1;
	while (count <= len)
	{
		result = result * 10;
		count++;
	}
	return (result);
}

int		get_putnbr(int nb)
{
	int		num_temp;
	int		int_temp;

	num_temp = nb;
	while (num_temp >= 10)
	{
		num_temp = num_temp / 10;
	}
	int_temp = num_temp * get_num(get_len(nb));
	return (int_temp);
}

void	ft_putnbr(int nb)
{
	int		count;
	int		int_temp;
	char	ch_temp;
	char	result[500];

	count = 0;
	while (nb >= 1)
	{
		int_temp = nb;
		while (int_temp >= 10)
		{
			int_temp = int_temp / 10;
		}
		ch_temp = int_temp + '0';
		result[count] = ch_temp;
		nb = nb - get_putnbr(nb);
		count++;
	}
	write(1, result, 256);
}
