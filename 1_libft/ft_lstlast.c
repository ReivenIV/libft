/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:57:37 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/25 11:16:27 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Will search and return the last object of a list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *list)
{
	if (list == NULL)
		return (NULL);
	while (list != NULL)
	{
		if (list->next == NULL)
			return (list);
		list = list->next;
	}
	return (NULL);
}
