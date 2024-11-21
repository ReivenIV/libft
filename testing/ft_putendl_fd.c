/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:03:06 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/21 10:10:31 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *src, int fd)
{

	if (!src || fd < 0)
		return ;
	write(fd, src, ft_strlen(src));
	write(fd, '\n', 1);
		
}