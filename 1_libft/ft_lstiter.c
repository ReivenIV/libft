/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:24:10 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/25 14:33:02 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Will apply "f" function to every list->content of the list. 
*/

#include "libft.h"

void	ft_lstiter(t_list *list, void (*f)(void *))
{
	if (list == NULL || f == NULL)
		return ;
	while (list != NULL)
	{
		f(list->content);
		list = list->next;
	}
}
