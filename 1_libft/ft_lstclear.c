/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:31:18 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/25 14:34:21 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_lstclear: will apply "del" and free every obj or node from a given list
 * 
 * for dif between **list vs *list vs list chec :
  	documentation/language_C/linked_list/DOC_ft_lstadd_back.md
 * 
 * doc of the function here:
	documentation/language_C/linked_list/DOC_ft_lstclear.md
*/

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*tmp;

	if (del == NULL || *list == NULL)
		return ;
	while (*list != NULL)
	{
		tmp = (*list)->next;
		del((*list)->content);
		free(*list);
		*list = tmp;
	}
}
