/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:13:35 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/25 13:19:37 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Takes a node as a parameter and frees the memory of the
 *  node’s content using the function `del` 
*/

#include "libft.h"

void	ft_lstdelone(t_list *node, void (*del)(void *))
{
	if (del == NULL)
		return ;
	(*del)(node->content);
	free(node);
}
