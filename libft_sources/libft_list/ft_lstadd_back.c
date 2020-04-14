/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 09:57:24 by mabriand          #+#    #+#             */
/*   Updated: 2019/11/28 11:51:46 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/**
 * Ajoute l’élément new à la fin de la liste.
**/

/*void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;
​
	if (alst && *alst)
	{
		tmp = *alst;
		while (tmp->next)
			tmp = tmp->next;
		if (tmp->next == NULL)
			tmp->next = new;
	}
	else if (alst)
		*alst = new;
}*/

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
}