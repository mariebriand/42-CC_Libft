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
** Check if c is alphabetical
** =========
** #1 : the char to check.
** =========
** Returns 1 if TRUE, 0 if FALSE.
*/

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
