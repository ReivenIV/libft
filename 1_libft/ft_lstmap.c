/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:08:53 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/25 15:31:22 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (list == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (list != NULL)
	{
		new_obj = ft_lstnew(f(list->content));
		list = list->next;
		ft_lstadd_back(&new_list, new_obj);
	}
	return (new_list);
}
