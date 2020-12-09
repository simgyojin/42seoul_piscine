/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:42:50 by gsim              #+#    #+#             */
/*   Updated: 2020/12/06 17:30:06 by gsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*i_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

unsigned int		get_n_len(char *ss, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && ss && ss[i])
		i++;
	return (i);
}

unsigned int		get_len(char *ss)
{
	int			i;

	i = 0;
	while (ss && ss[i])
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	i_size;

	dst_len = get_n_len(dest, size);
	src_len = get_len(src);
	i_size = size - dst_len;
	dest += dst_len;
	if (i_size > 0)
	{
		i_strncpy(dest, src, i_size);
		dest[i_size - 1] = '\0';
	}
	return (dst_len + src_len);
}
