/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 08:17:53 by mabriand          #+#    #+#             */
/*   Updated: 2022/02/25 17:33:20 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/*
**	Parameters:
**		@ char *dst	:	destination string.
**		@ char *src	:	source string.
**
**	Description:
**		Copies the string pointed by 'src' (including the final '\0') in the one
**		pointed by 'dst'. Both must not overlap and 'dst' must be large enough to
**	
**	Return values:
**		'dst' i.e. the destination string, copy of 'src'.
*/
char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (dst);
}
