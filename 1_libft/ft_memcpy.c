/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:33:22 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/21 18:15:12 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * `memcpy` : will copy a specified number of bytes 
 * from one memory location to another. 
 * memcpy is commonly used when you need to copy blocks of raw data, 
 * like arrays, structs, or memory buffers, without altering 
 * the content or type of data​​.
 
 * Keep in mind that memcpy does not handle overlapping memory regions
 * well "memmove" is used in such cases.
 */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src && n > 0)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// int main() {
//     // Source data
//     char src[] = "Hello, World!";
//     char dest[20];

//     // Using memcpy to copy data
//     ft_memcpy(dest, src, strlen(src) + 1);

//     // Define ANSI color codes
//     const char *GREEN = "\033[1;32m";
//     const char *RED = "\033[1;31m";
//     const char *RESET = "\033[0m";

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);

//     if (strcmp(src, dest) == 0) {
// 	printf("\n%smemcpy test passed:%s all good\n", GREEN, RESET);
//     } else {
// 	printf("%smemcpy test failed\n", RED);
//     }

//     return 0;
// }