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
** Check if c is a whitespace
** =========
** #1 : the char to check.
** =========
** Returns 1 if TRUE, 0 if FALSE.
*/

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' ||c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}