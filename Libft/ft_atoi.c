/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:14:23 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/20 16:23:51 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	res;

	i = 0;
	neg = 1;
	while (str[i] == 32 || str[i] == 10 || str[i] == 9 || str[i] == 12 ||
						str[i] == 13 || str[i] == 11)
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	res = 0;
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10;
		res = res + (long)(str[i] - 48);
		i++;
	}
	return (neg * res);
}
