/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 09:44:57 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/15 07:35:18 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*c1;
	char	*c2;
	size_t	i;

	if (!n)
		return (NULL);
	c1 = (char *)dst;
	c2 = (char *)src;
	i = 0;
	while (n--)
	{
		i++;
		*c1 = *c2;
		if ((unsigned char)*c2 == (unsigned char)c)
		{
			return (dst + i);
		}
		if (n)
		{
			c1++;
			c2++;
		}
	}
	return (NULL);
}
