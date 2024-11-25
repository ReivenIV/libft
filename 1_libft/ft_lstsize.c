/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:49:27 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/25 10:55:36 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Will count the amount of objs in a list. we could call these function
 * list_len
*/

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int		count;
	t_list	*tmp;

	count = 0;
	if (list == NULL)
		return (count);
	tmp = list;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
