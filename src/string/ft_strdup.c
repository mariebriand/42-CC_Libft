/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:57:14 by mabriand          #+#    #+#             */
/*   Updated: 2022/06/02 14:35:03 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	size;
	char	*s;
	char	*copy;

	i = 0;
	s = (char *)s1;
	size = ft_strlen(s);
	copy = ((char *)malloc(sizeof(*copy) * (size + 1)));
	if (copy == NULL)
		return (NULL);
	while (i < size)
	{
		copy[i] = s1[i];
		++i;
	}
	copy[i] = '\0';
	return (copy);
}
