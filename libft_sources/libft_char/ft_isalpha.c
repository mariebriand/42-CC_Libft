/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:08:36 by mabriand          #+#    #+#             */
/*   Updated: 2019/11/18 19:34:38 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/*
**	Parameters:
**		@ int c	: char to check.
**
**	Description:
**		Checks if 'c' is alphabetical (a lower-case or an upper-case). 
**	
**	Return values:
**		1 (true) if is, 0 (false) else.
*/
int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
