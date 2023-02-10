/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:46:12 by mabriand          #+#    #+#             */
/*   Updated: 2023/02/10 12:16:51 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	pos;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	pos = 0;
	while (haystack[pos] != '\0' && (size_t)pos < len)
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (needle[i] != '\0' &&
			haystack[pos + i] == needle[i] && (size_t)(pos + i) < len)
				++i;
			if (needle[i] == '\0')
				return ((char *)haystack + pos);
		}
		++pos;
	}
	return (NULL);
}
