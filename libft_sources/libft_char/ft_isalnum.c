/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:26:55 by mabriand          #+#    #+#             */
/*   Updated: 2019/11/18 19:34:45 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/*
**	Parameters:
**		@ int c	: char to check.
**
**	Description:
**		Checks if 'c' is an ahpabetical character or a digit.
**	
**	Return values:
**		1 (true) if is, 0 (false) else.
*/
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
