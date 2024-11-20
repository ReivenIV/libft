/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:36:23 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/20 13:52:05 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_strmapi : Will create a new string and attack every caracter of src
 * 				with a function as argument.
*/

#include "libft.h"

char	*ft_strmapi(char const *src, char (*f)(unsigned int, char))
{
	size_t	src_len;
	size_t	i;
	char	*dest;

	if (src == NULL || !f)
		return (NULL);
	src_len = ft_strlen(src);
	dest = malloc((src_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < src_len)
	{
		dest[i] = f(i, (char)src[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//! main to test ft_strmapi : 
// // #include <stdio.h>
// // char sample_function(unsigned int index, char c) {
// //     return c + index; // Example: add the index to the character
// // }

// // int main() {
// //     char *src = "hello";
// //     char *result = ft_strmapi(src, sample_function);

// //     if (result) {
// //         printf("Original: %s\n", src);
// //         printf("Mapped: %s\n", result);
// //         free(result); // Free the allocated memory
// //     } else {
// //         printf("Memory allocation failed.\n");
// //     }

// //     return 0;
// // }