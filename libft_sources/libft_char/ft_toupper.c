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
** If character c is a lower-case letter, converts it in upper-case. 
** =========
** #1 : char to convert.
** =========
** Returns the converted character, 
** or the original if conversion was not possible.
*/

int	ft_toupper(int c)
{
	if (ft_islower(c) == 1)
		return (c - 32);
}
