/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_hexintlen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 14:23:24 by mabriand          #+#    #+#             */
/*   Updated: 2022/06/02 14:33:25 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_long_hexintlen(unsigned long int n)
{
	int	i;

	i = 1;
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}
