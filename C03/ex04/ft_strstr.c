/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:29:57 by gsim              #+#    #+#             */
/*   Updated: 2020/12/06 18:58:42 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int k;

	if (to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
				return (str + i);
			k++;
		}
		i++;
	}
	return (0);
}
