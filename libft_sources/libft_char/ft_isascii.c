/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:25:03 by mabriand          #+#    #+#             */
/*   Updated: 2019/11/18 17:47:57 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/*
**	Parameters:
**		@ int c	:	char to check.
**
**	Description:
**		Checks if 'c' is an ascii character (between 0 and 127).
**	
**	Return values:
**		1 (true) if it is, 0 (false) else.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
