/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 08:52:52 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/14 09:39:00 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *c1;
	char *c2;

	if (!n || dst == src)
		return (dst);
	c1 = (char *)dst;
	c2 = (char *)src;
	while (n--)
	{
		*c1 = *c2;
		if (n)
		{
			c1++;
			c2++;
		}
	}
	return (dst);
}
