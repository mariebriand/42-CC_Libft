/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:38:55 by mabriand          #+#    #+#             */
/*   Updated: 2022/06/02 14:30:30 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst != NULL && new != NULL)
		new->next = *alst;
	*alst = new;
	return ;
}