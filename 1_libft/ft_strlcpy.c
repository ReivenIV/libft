/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:12:58 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/15 14:30:24 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The `strcpy` function in C copies a null-terminated string from a source 
 * (`src`) to a destination (`dest`). Is commonly used for duplicating strings. 
 * However, `strcpy` does not check for buffer overflows,  so the destination
 * buffer must be large enough to hold the source string,
 * including the null terminator, to avoid memory errors or security
 * vulnerabilities.
 */

#include "libft.h"

size_t	ft_strlen4(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen4(src));
}

// #include <stdio.h>
// int main() {
//     const char *source = "Hello, world!";
//     char dest[20];      // Large enough buffer
//     char small_dest[6]; // Small buffer
// 	const char *RESET = "\033[0m";
// 	const char *GREEN = "\033[1;32m";

//     // Test 1: Copying with a large enough buffer
//     size_t copied1 = ft_strlcpy(dest, source, sizeof(dest));
//     printf("Test 1:\n");
//     printf("Source: %s\n", source);
//     printf("Destination (sufficient size): %s  %s %s\n", GREEN, dest, RESET);
//     printf("Characters copied: %zu\n\n", copied1);

//     // Test 2: Copying with a smaller buffer
//     size_t copied2 = ft_strlcpy(small_dest, source, sizeof(small_dest));
//     printf("Test 2:\n");
//     printf("Source: %s\n", source);
//printf("Destination (small size): %s  %s %s\n", GREEN, small_dest, RESET);
//     printf("Characters that would have been copied: %zu\n\n", copied2);

//     // Test 3: Copying with a size of 0
//     size_t copied3 = ft_strlcpy(dest, source, 0);
//     printf("Test 3:\n");
//     printf("Source: %s\n", source);
//printf("%sDestination remains unchanged as size is 0.%s\n", GREEN, RESET);
//     printf("Characters that would have been copied: %zu\n\n", copied3);

//     return 0;
// }