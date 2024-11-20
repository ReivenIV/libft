/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:36:23 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/20 10:36:23 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

static size_t	ft_strlen(char *str)
{
	size_t  count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
char	*ft_strmapi(char const *src, char (*f)(unsigned int, char))
{
	if (src == NULL || !f)
		return (NULL);
	
}
