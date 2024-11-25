/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:14:02 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/25 15:55:07 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * `strlcat` appends a source string to a destination string,
 * ensuring the total length doesn’t exceed a specified buffer size. 
 * It also guarantees null-termination if space allows and returns the 
 * length of the destination string plus the source string length.

  REMINDER : size idealy is len_dest + len_src. 
  REMINDER : strlcat will transfer data to dest until size-1 (for '\0') 
 */

#include "libft.h"

//* L37 If size <= end_dest, return size + src_len immediately without copying
//* L39 Append characters from src to dest as long as there's space

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	while (src[i] != '\0' && len_dest + i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

// #include <stdio.h>
// int main() {
// 	const char *GREEN = "\033[1;32m";
// 	const char *RESET = "\033[0m"; 

//     // Test Case 1: Normal concatenation
//     char dest1[50] = "Hello, ";
//     char src1[] = "world!";
//     size_t result1 = ft_strlcat(dest1, src1, 50);
//     printf("Test 1 - Normal Concatenation:\n");
//     printf("Resulting string: %s%s%s\n", GREEN, dest1, RESET);
//printf("Length returned by ft_strlcat: %s%zu%s\n\n", GREEN, result1, RESET);

//     // Test Case 2: Destination buffer too small
//     char dest2[10] = "Hello, ";
//     char src2[] = "world!";
//     size_t size2 = sizeof(dest2);
//     ft_strlcat(dest2, src2, size2);
//     printf("Test 2 - Destination Buffer Too Small:\n");
//     printf("Resulting string: %s%s%s\n", GREEN, dest2, RESET);

//     // Test Case 3: Empty destination string
//     char dest3[20] = "";
//     char src3[] = "Hello!";
//     size_t size3 = sizeof(dest3);
//     ft_strlcat(dest3, src3, size3);
//     printf("Test 3 - Empty Destination String:\n");
//     printf("Resulting string: %s%s%s\n", GREEN, dest3, RESET);

//     // Test Case 4: Size parameter is 0
//     char dest4[20] = "Hello, ";
//     char src4[] = "world!";
//     size_t size4 = 0;
//     ft_strlcat(dest4, src4, size4);
//     printf("Test 4 - Size Parameter is 0:\n");
//     printf("Resulting string: %s%s%s\n", GREEN, dest4, RESET);

//     // Test Case 5: Source string is empty
//     char dest5[20] = "Hello, ";
//     char src5[] = "";
//     size_t size5 = sizeof(dest5);
//     ft_strlcat(dest5, src5, size5);
//     printf("Test 5 - Source String is Empty:\n");
//     printf("Resulting string: %s%s%s\n", GREEN, dest5, RESET);

//     // Test Case 6: Destination buffer has no space left
//     char dest6[13] = "Hello, world";
//     char src6[] = "!";
//     size_t size6 = sizeof(dest6);
//     ft_strlcat(dest6, src6, size6);
//     printf("Test 6 - Destination Buffer Has No Space Left:\n");
//     printf("Resulting string: %s%s%s\n", GREEN, dest6, RESET);

//     return 0;
// }