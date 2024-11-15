/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:33:22 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/15 15:08:52 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The memcpy function in C is used to copy a specified number of bytes 
 * from one memory location to another. 
 * memcpy is commonly used when you need to copy blocks of raw data, 
 * like arrays, structs, or memory buffers, without altering 
 * the content or type of data​​.
 
 * Keep in mind that memcpy does not handle overlapping memory regions
 * well "memmove" is used in such cases.
 */

#include "libft.h"

void	*ft_memcpy(void *str_dest, const void *str_src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*src;

	if (str_dest == NULL && str_dest == NULL)
		return (NULL);
	i = 0;
	dest = (unsigned char *)str_dest;
	src = (unsigned const char *)str_src;
	while (i < n)
	{
		dest[i] = src[i];
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