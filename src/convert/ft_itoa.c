/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 09:56:08 by mabriand          #+#    #+#             */
/*   Updated: 2022/06/02 14:29:00 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_itoa(int n)
{
	long	tmp;
	char	*str;
	size_t	len;

	tmp = (long)n;
	str = NULL;
	len = ft_intlen(tmp) + (n < 0 ? 1 : 0);
	if (n < 0)
		tmp *= -1;
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
		if (n < 0)
			str[0] = '-';
	}
	return (str);
}

/*
** /!\ Once 'str' has been used, it must be freed or it can cause leaks.
*/