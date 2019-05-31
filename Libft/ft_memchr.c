/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 11:49:44 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/15 07:32:32 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*c1;
	int		i;

	if (!n)
		return (NULL);
	c1 = (char *)s;
	i = 0;
	while (n--)
	{
		if ((unsigned char)*c1 == (unsigned char)c)
		{
			return (c1);
		}
		i++;
		if (n)
			c1++;
	}
	return (NULL);
}
