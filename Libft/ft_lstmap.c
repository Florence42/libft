/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:08:49 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/21 15:33:03 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fct_clean(t_list *t_new)
{
	t_list *t_tmp;

	while (t_new)
	{
		t_tmp = t_new->next;
		free(t_new->content);
		free(t_new);
		t_new = t_tmp;
	}
	free(t_new);
	t_new = NULL;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *t_new;
	t_list *t_tmp;

	if (lst == NULL)
		return (NULL);
	t_new = f(lst);
	if (t_new == NULL)
		return (NULL);
	t_tmp = t_new;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if ((t_tmp->next = f(lst)) == NULL)
		{
			fct_clean(t_new);
			return (NULL);
		}
		t_tmp = t_tmp->next;
	}
	return (t_new);
}
