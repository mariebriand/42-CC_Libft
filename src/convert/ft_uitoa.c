/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 15:14:18 by mabriand          #+#    #+#             */
/*   Updated: 2020/01/23 14:32:41 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/*
** Allocate (with malloc(3)) and converts the unsigned int
** reveived as an argument to a string representation.
** =======
** #1 : integer to convert.
** =======
** Returns the string representing n or NULL if it fails.
*/

char				*ft_uitoa(unsigned int n)
{
	unsigned long	tmp;
	char			*str;
	size_t			len;

	tmp = (unsigned long)n;
	str = NULL;
	len = ft_uintlen(tmp);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str != NULL)
	{
		str[len] = '\0';
		while (len > 0)
		{
			str[len - 1] = (tmp % 10) + '0';
			len--;
			tmp /= 10;
		}
	}
	return (str);
}

/*
** Once str has been used, it must be freed or it can cause leaks.
*/