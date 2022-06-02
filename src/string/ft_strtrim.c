/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:59:24 by mabriand          #+#    #+#             */
/*   Updated: 2022/06/02 14:35:38 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*trimedstr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	len = ft_strlen((char *)s1 + start);
	if (len != 0)
		while (s1[start + len - 1]
				&& ft_strchr(set, s1[start + len - 1]) != NULL)
			len--;
	if ((trimedstr = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	trimedstr = ft_strncpy(trimedstr, (char *)s1 + start, len);
	trimedstr[len] = '\0';
	return (trimedstr);
}
