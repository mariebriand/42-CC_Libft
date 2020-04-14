/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabriand <mabriand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:17:15 by mabriand          #+#    #+#             */
/*   Updated: 2019/11/28 11:51:57 by mabriand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft_header/libft.h"

/**
 * Alloue (avec malloc(3)) et renvoie un nouvel
 * élément. la variable content est initialisée à
 * l’aide de la valeur du paramètre content.
 * La variable ’next’ est initialisée à NULL.
**/

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	if (!(newlist = malloc(sizeof(t_list))))
		return (NULL);
	if (newlist)
	{
		newlist->content = content;
		newlist->next = NULL;
	}
	return (newlist);
}
