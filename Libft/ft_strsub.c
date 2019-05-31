/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 08:23:35 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/21 16:34:35 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *snew;

	if (!s)
		return (NULL);
	snew = ft_strnew(len);
	if (snew == NULL)
		return (NULL);
	ft_strncpy(snew, s + start, len);
	return (snew);
}
