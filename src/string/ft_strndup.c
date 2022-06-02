/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:13:43 by mabriand          #+#    #+#             */
/*   Updated: 2022/06/02 14:35:29 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strndup(char *s1, size_t size)
{
	size_t	i;
	char	*copy;

	i = 0;
	copy = ((char *)malloc(sizeof(*copy) * (size + 1)));
	if (copy == NULL)
		return (NULL);
	while (i < size)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
