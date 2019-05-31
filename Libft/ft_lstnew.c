/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 08:46:26 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/21 09:21:57 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list *t_new;

	if ((t_new = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		t_new->content = NULL;
		t_new->content_size = 0;
	}
	else
	{
		if ((t_new->content = (void *)malloc(sizeof(size_t) * content_size))
																	== NULL)
		{
			free(t_new);
			return (NULL);
		}
		ft_memcpy(t_new->content, content, content_size);
		t_new->content_size = content_size;
	}
	t_new->next = NULL;
	return (t_new);
}
