/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 09:22:29 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/21 11:19:41 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *t_tmp;

	t_tmp = *alst;
	if (t_tmp == NULL)
		return ;
	del(t_tmp->content, t_tmp->content_size);
	free(*alst);
	*alst = NULL;
}
