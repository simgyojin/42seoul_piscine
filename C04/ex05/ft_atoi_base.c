/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:35:38 by gsim              #+#    #+#             */
/*   Updated: 2020/12/09 11:57:21 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_base(char *base)
{
	int	i;
	int	z;
	int	l;

	if (base[0] == '\0' || base[0] == '\0')
		return (0);
	l = 0;
	while (base[l])
		l++;
	z = l - 1;
	while (z >= 0)
	{
		if (base[z] == '+' || base[z] == '-')
			return (0);
		i = z - 1;
		while (i >= 0)
		{
			if (base[i] == base[z])
				return (0);
			i--;
		}
		z--;
	}
	return (l);
}

int		contains(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int l;
	int	z;
	int	minus;
	int	result;

	if (!(l = is_base(base)))
		return (0);
	z = 0;
	minus = 1;
	i = 0;
	while (str[i] != 0 && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1 * minus;
		i++;
	}
	while ((result = contains(base, *str)) > -1)
	{
		z = z * l + result;
		str++;
	}
	return (z * result);
}
