/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 08:37:56 by mabriand          #+#    #+#             */
/*   Updated: 2022/05/31 16:38:06 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/*
**	Parameters:
**		@ int c	:	char to check.
**
**	Description:
**		Converts 'c' into a lower-case if it is an upper-case.
**	
**	Return values:
**		The converted char (success), the original one (failure) else.
*/
int	ft_tolower(int c)
{
	if (ft_isupper(c) == 1)
		return (c + 32);
	return (c);
}
