/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:23:26 by mabriand          #+#    #+#             */
/*   Updated: 2022/06/02 14:30:54 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*first;
	t_list		*map;

	if (lst == NULL)
		return (NULL);
	if (!(map = ft_lstnew(f(lst))))
		return (NULL);
	first = map;
	while (lst != NULL)
	{
		if (lst->next != NULL)
		{
			if (!(map->next = ft_lstnew((*f)(lst->next))))
			{
				ft_lstclear(&first, del);
				return (0);
			}
			map = map->next;
		}
		lst = lst->next;
	}
	map = 0;
	return (first);
}
