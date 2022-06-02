/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 19:47:11 by mabriand          #+#    #+#             */
/*   Updated: 2022/06/02 14:34:44 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static void	ft_free_split(char **tab, size_t index)
{
	size_t i;

	i = 0;
	if (index > 0)
		index--;
	while (i < index)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	tab = NULL;
	return ;
}

static char	**ft_createsplit(const char *s, char c, char **newtab)
{
	size_t	i;
	size_t	start;
	size_t	index;

	i = 0;
	index = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			++i;
		else
		{
			start = 0;
			while (s[i + start] != c && s[i + start] != '\0')
				++start;
			newtab[++index] = ft_substr(s, i, start);
			if (newtab[index] == NULL)
			{
				ft_free_split(newtab, index);
				break ;
			}
			i += start;
		}
	}
	return (newtab);
}

static int	ft_countword(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			++i;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				++i;
			++count;
		}
	}
	return (count);
}

char		**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	len;

	tab = NULL;
	if (s != NULL)
	{
		len = ft_countword(s, c);
		tab = (char **)malloc(sizeof(*tab) * (len + 1));
		if (tab != NULL)
		{
			tab[len] = NULL;
			tab = ft_createsplit(s, c, tab);
		}
	}
	return (tab);
}
