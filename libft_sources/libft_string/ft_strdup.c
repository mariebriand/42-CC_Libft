/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:57:14 by mabriand          #+#    #+#             */
/*   Updated: 2022/02/25 17:37:11 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/*
**	Parameters:
**		@ const char *s1	:	string to duplicate.
**
**	Description:
**		Duplicates 's1' by allocating a new string identical to 's1' and copying
**		in it its content.
**	
**	Return values:
**		'copy' i.e. the duplicate. 
*/
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
