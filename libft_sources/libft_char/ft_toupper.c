/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 08:36:16 by mabriand          #+#    #+#             */
/*   Updated: 2019/11/18 20:40:17 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/*
**	Parameters:
**		@ int c	:	char to check.
**
**	Description:
**		Converts 'c' into an upper-case if it is a lower-case.
**	
**	Return values:
**		The converted char (success), the original one (failure) else.
*/
int	ft_toupper(int c)
{
	if (ft_islower(c) == 1)
		return (c - 32);
	return (c);
}
