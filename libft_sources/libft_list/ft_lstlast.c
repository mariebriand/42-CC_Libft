/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:41:11 by mabriand          #+#    #+#             */
/*   Updated: 2019/11/28 11:51:54 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/**
 * Renvoie le dernier élément de la liste.
**/

t_list	*ft_lstlast(t_list *lst)
{
	t_list *current_list;

	current_list = lst;
	if (current_list)
	{
		while (current_list->next)
			current_list = current_list->next;
		return (current_list);
	}
	return (NULL);
}
