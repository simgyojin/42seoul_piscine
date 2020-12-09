/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:28:01 by gsim              #+#    #+#             */
/*   Updated: 2020/12/09 19:30:50 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_interative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power < 1)
		return (1);
	result = nb;
	while (power >= 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
