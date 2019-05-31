/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivaton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:52:07 by frivaton          #+#    #+#             */
/*   Updated: 2018/11/20 12:28:46 by frivaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		fct_count_word(const char *s, int c)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (!nb && s[i] != c)
			nb++;
		if (s[i] == c && s[i + 1] && s[i + 1] != c)
			nb++;
		i++;
	}
	return (nb);
}

static int		fct_count_letter(const char *s, int c, int *pos, int *istart)
{
	int i;
	int nb;

	i = *pos;
	nb = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		if (*istart == -1)
			*istart = i;
		i++;
		nb++;
	}
	*pos = i;
	return (nb);
}

static void		fct_free_tab(int i, char **tab)
{
	while (i >= 0)
	{
		ft_strdel(&tab[i]);
		i--;
	}
	ft_strdel(tab);
}

static void		fct_make_tab(char const *s, char c, char **tab, int nb_word)
{
	int		nb_letter;
	int		inext;
	int		istart;
	int		i;

	i = 0;
	inext = 0;
	while (i < nb_word)
	{
		istart = -1;
		nb_letter = fct_count_letter(s, c, &inext, &istart);
		if ((tab[i] = ft_strnew(nb_letter * sizeof(char))) == NULL)
		{
			fct_free_tab(i - 1, tab);
			return ;
		}
		ft_strncpy(tab[i], s + istart, nb_letter);
		i++;
	}
	tab[i] = 0;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nb_word;

	if (!s)
		return (NULL);
	nb_word = fct_count_word(s, c);
	if ((tab = (char**)ft_memalloc(sizeof(char*) * (nb_word + 1))) == NULL)
		return (NULL);
	fct_make_tab(s, c, tab, nb_word);
	return (tab);
}
