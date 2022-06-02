/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:43:20 by mabriand          #+#    #+#             */
/*   Updated: 2022/06/02 14:32:14 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void	*p;

	p = ft_memchr(src, c, n);
	if (p == NULL)
	{
		ft_memcpy(dst, src, n);
		return (NULL);
	}
	ft_memcpy(dst, src, p - src + 1);
	return (dst + (p - src + 1));
}
