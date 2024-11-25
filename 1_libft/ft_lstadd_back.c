/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:49:12 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/25 13:09:41 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Will add a node (or object) at the end of the linked list. 
 * for explanation about the differences of **list, *list, list please check : 
 * documentation/language_C/linked_list/DOC_ft_lstadd_back.md
*/

#include "libft.h"

void ft_lstadd_back(t_list **list, t_list *new_obj)
{
	t_list	*last_obj;

	if (list == NULL || new_obj == NULL)
		return ;
	if (*list == NULL)
	{
		*list = new_obj;
		return ;
	}
	last_obj = *list;
	while (last_obj->next != NULL)
		last_obj = last_obj->next;
	last_obj->next = new_obj;
}
