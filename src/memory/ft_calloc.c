/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:49:15 by mabriand          #+#    #+#             */
/*   Updated: 2022/06/02 14:32:07 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	
	mem = malloc(size * count);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, 0, size * count);
	return (mem);
}
