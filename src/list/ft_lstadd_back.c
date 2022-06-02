/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 09:57:24 by mabriand          #+#    #+#             */
/*   Updated: 2022/06/02 14:29:24 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (*alst != NULL)
	{
		while ((*alst)->next != NULL)
			(*alst) = (*alst)->next;
		(*alst)->next = new;
	}
	else
		(*alst) = new;
	return ;
}