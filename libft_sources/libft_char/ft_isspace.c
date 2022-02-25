/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:26:25 by mabriand          #+#    #+#             */
/*   Updated: 2020/03/02 11:27:37 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/*
**	Parameters:
**		@ int c	:	char to check.
**
**	Description:
**		Checks if 'c' is a space.
**	
**	Return values:
**		1 (true) if it is, 0 (false) else.
*/
int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}