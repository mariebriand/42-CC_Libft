/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:08:36 by mabriand          #+#    #+#             */
/*   Updated: 2022/05/31 16:38:17 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/*
**	Parameters:
**		@ int c	:	char to check.
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
