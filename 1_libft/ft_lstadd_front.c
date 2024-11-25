/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:13:44 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/25 10:48:24 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_lstadd_front : adds a new node to the beginning of a linked list.
 * This operation is commonly used in linked list implementations 
 * to quickly add elements to the front of the list

 * **a_list = or adresse list of objects.
 * *new_obj = a new object we want to introduce into the list of objs.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **a_list, t_list *new_obj)
{
	if (a_list && new_obj)
	{
		new_obj->next = *a_list;
		*a_list = new_obj;
	}
}
