/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:43:04 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/20 17:01:27 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *src, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!src || !f)
		return;
	i = 0;
	while (src[i] != '\0')
	{
		f(i, &src[i]);
		i++;
	}
}

//! main to test ft_striteri
// // #include <stdio.h>
// // void modify_char(unsigned int i, char *c)
// // {
// // 	*c = *c + i; // Example: increment character by its index
// // }

// // int main()
// // {
// // 	char str[] = "abcd";

// // 	ft_striteri(str, modify_char);

// // 	printf("%s\n", str); // Output: "aceg"
// // 	return 0;
// // }