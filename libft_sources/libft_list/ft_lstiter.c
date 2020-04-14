/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:08:00 by mabriand          #+#    #+#             */
/*   Updated: 2019/11/28 11:51:53 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/**
 * Itère sur la list lst et applique la fonction f au
 * contenu chaque élément.
**/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr_list;

	ptr_list = lst;
	if (!lst)
		return ;
	while (ptr_list)
	{
		f(ptr_list->content);
		ptr_list = ptr_list->next;
	}
}
