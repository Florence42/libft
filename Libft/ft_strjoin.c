/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 08:59:09 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/20 12:40:32 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *snew;

	if (!(s1 && s2))
		return (NULL);
	snew = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (snew == NULL)
		return (snew);
	ft_strcat(snew, s1);
	ft_strcat(snew, s2);
	return (snew);
}
