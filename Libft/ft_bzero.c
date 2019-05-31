/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 08:37:38 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/14 08:48:59 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *cur;

	if (!n)
		return ;
	cur = (unsigned char *)s;
	while (n--)
	{
		*cur = 0;
		if (n)
			cur++;
	}
}
