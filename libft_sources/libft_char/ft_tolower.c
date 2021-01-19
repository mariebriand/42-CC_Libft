/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 08:37:56 by mabriand          #+#    #+#             */
/*   Updated: 2019/11/18 20:40:06 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/*
** If character c is an upper-case letter, converts it in lower-case.
** =========
** #1 : char to convert.
** =========
** Returns the converted character, 
** or the original if conversion was not possible.
*/

int	ft_tolower(int c)
{
	if (ft_isupper(c) == 1)
		return (c + 32);
}
