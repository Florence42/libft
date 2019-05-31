/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 09:05:46 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/20 12:43:52 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fct_is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static void	fct_find_arrea(char const *s, unsigned int *istart, size_t *len)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (!fct_is_space(s[i]))
			break ;
		i++;
	}
	if (!s[i])
	{
		*len = 0;
		return ;
	}
	*istart = (unsigned int)i;
	i = *len - 1;
	while (i >= 0 && fct_is_space(s[i]))
		i--;
	*len = (size_t)(i - *istart + 1);
}

char		*ft_strtrim(char const *s)
{
	char			*snew;
	size_t			len;
	unsigned int	istart;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!len)
	{
		snew = ft_strnew(len);
		return (snew);
	}
	fct_find_arrea(s, &istart, &len);
	if (!len)
	{
		snew = ft_strnew(len);
		return (snew);
	}
	return (ft_strsub(s, istart, len));
}
