/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:42:56 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/13 07:39:07 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*snew;
	int		i;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	snew = (char *)malloc(sizeof(*snew) * (len + 1));
	if (snew == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		snew[i] = s1[i];
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
