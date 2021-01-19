/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:43:04 by mabriand          #+#    #+#             */
/*   Updated: 2019/12/04 14:11:24 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/*
** Converts the initial portion of the string
** pointed to by str to int representation.
** =======
** #1: pointer to string
** =======
** Retturns the conversion result as an int.
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
			minus = -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		nbr = (nbr * 10) + str[i] - 48;
		i++;
	}
	return (nbr * minus);
}
