/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:27:18 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/15 16:37:23 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *pt;

	if (!size)
		return (NULL);
	if ((pt = (void *)malloc(sizeof(void) * size)) == NULL)
		return (NULL);
	ft_memset(pt, 0, size);
	return (pt);
}
