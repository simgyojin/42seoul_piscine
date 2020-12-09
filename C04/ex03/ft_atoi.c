/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:12:32 by gsim              #+#    #+#             */
/*   Updated: 2020/12/09 11:19:12 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus;
	int	i;
	int result;

	result = 0;
	minus = 1;
	i = 0;
	while (str[i] != 0 && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] != 0 && !(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				minus = -1 * minus;
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result += str[i] - '0';
		i++;
	}
	return (minus * result);
}
