/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:43:04 by mabriand          #+#    #+#             */
/*   Updated: 2022/05/31 16:44:32 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/*
**	Parameters:
**		@ const char	*str	:	the string in ascii to convert into an int
**
**	Description:
**		Ignores all white spaces, then takes an initial + or - (depending on how
**		many minuses were found) and finally, interprets the following digits as
**		a numerical value.
**	
**	Return values:
**		The int resulting from the conversion.
*/
int	ft_atoi(const char *str)
{
	int i;
	int minus;
	int nbr;

	i = 0;
	minus = 1;
	nbr = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		nbr = (nbr * 10) + str[i] - 48;
		i++;
	}
	return (nbr * minus);
}
