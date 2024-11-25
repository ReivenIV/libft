/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:54:24 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/25 10:48:33 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Will create a new element in the "list linked" 
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
