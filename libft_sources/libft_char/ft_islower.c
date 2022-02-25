/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:18:51 by mabriand          #+#    #+#             */
/*   Updated: 2019/11/18 17:48:14 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/*
**	Parameters:
**		@ int c	:	char to check.
**
**	Description:
**		Checks if 'c' is a lower-case (between 'a' and 'z' in the ascii table).
**	
**	Return values:
**		1 (true) if it is, 0 (false) else.
*/
int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
