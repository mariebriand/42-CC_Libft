/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:23:26 by mabriand          #+#    #+#             */
/*   Updated: 2019/11/28 11:51:55 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/**
 * Itère sur la liste lst et applique la fonction f au
 * contenu de chaque élément. Crée une nouvelle liste
 * résultant des applications successives de f. la
 * fonction del est la pour detruire le contenu d'un
 * element si necessaire.
 * Retourne la nouvelle liste ou NULL si l’allocation échoue.
**/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*ret;

	new = NULL;
	ret = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if (!(new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, new);
		lst = lst->next;
	}
	return (ret);
}
