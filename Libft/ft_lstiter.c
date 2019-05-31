/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 11:52:47 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/21 12:08:18 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *t_tmp;

	t_tmp = lst;
	while (t_tmp != NULL)
	{
		f(t_tmp);
		t_tmp = t_tmp->next;
	}
}
