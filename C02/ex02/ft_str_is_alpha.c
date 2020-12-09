/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:56:32 by gsim              #+#    #+#             */
/*   Updated: 2020/12/02 17:43:56 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		temp;

	i = 0;
	temp = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			temp = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			temp = 1;
		else
		{
			temp = 0;
			return (temp);
		}
		i++;
	}
	return (temp);
}
