/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:36:52 by gsim              #+#    #+#             */
/*   Updated: 2020/12/06 15:30:49 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lower(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'A' && str[i] >= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	lower(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9'))
			;
		else
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
