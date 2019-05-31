/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:12:07 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/20 08:50:01 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		determine_length(int res)
{
	int		row;

	if (!res)
		return (1);
	row = 0;
	row = (res < 0) ? row + 1 : row;
	while (res)
	{
		res = res / 10;
		row++;
	}
	return (row);
}

char			*ft_itoa(int n)
{
	int		row;
	int		res;
	int		mod;
	char	*sval;

	if (n == I_INT_MIN)
		return (ft_strdup(S_INT_MIN));
	row = determine_length(n);
	if ((sval = ft_strnew(row * sizeof(char))) == NULL)
		return (NULL);
	if (n < 0)
		sval[0] = '-';
	row--;
	res = (n < 0) ? -n : n;
	while (res >= 10)
	{
		mod = res % 10;
		sval[row] = '0' + mod;
		res = res / 10;
		row--;
	}
	sval[row] = '0' + res;
	return (sval);
}
