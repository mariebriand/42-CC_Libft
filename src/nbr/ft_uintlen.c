/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 14:22:03 by mabriand          #+#    #+#             */
/*   Updated: 2022/05/31 17:06:57 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/*
** Calcule la longueur d'un entier n,
** de type unsigned int.
** =========
** #1 : un entier n.
** =========
** Retourne la longueur de n.
*/

size_t	ft_uintlen(unsigned int n)
{
	int	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}
