/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:40:03 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/15 12:49:23 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main() {
//     // Define colors
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

//     // Edge case 1: Identical memory blocks
//     char block1[] = "hello";
//     char block2[] = "hello";
// 	int result1 = ft_memcmp(block1, block2, sizeof(block1));	
//     printf("1: %s%d%s\n", GREEN, result1, RESET); // 0

//     // Edge case 2: Different memory blocks 
// 	// (difference at the beginning)
//     char block3[] = "world";
//     char block4[] = "hello";
//     int result2 = ft_memcmp(block3, block4, sizeof(block3));
//     printf("2: %s%d%s\n", GREEN, result2, RESET); // 15

//     // Edge case 3: Different memory blocks 
// 	// (difference at the end)
//     char block5[] = "hellp";
//     int result3 = ft_memcmp(block1, block5, sizeof(block1));
//     printf("3: %s%d%s\n", GREEN, result3, RESET); // -1 

//     // Edge case 4: Partial comparison 
// 	// (first few bytes are identical)
// 	// Comparing only the first 3 bytes
//     int result4 = ft_memcmp(block1, block3, 3); 
//     printf("4: %s%d%s\n", GREEN, result4, RESET); // -15

//     // Edge case 5: Empty comparison (zero-length)
//     int result5 = ft_memcmp(block1, block3, 0);
//     printf("5: %s%d%s\n", GREEN, result5, RESET); // 0

//     // Edge case 6: Completely different blocks
//     char block6[] = "abcde";
//     char block7[] = "vwxyz";
//     int result6 = ft_memcmp(block6, block7, sizeof(block6));
//     printf("6: %s%d%s\n", GREEN, result6, RESET); // -21

// 	// Edge case 7: n is larger than the length of the strings
// 	// REMINDER : edge case not being handled by ft_memcmp
//     char block8[] = "test";
//     char block9[] = "test";
//     // Here, n is intentionally larger than the length of 
// 	// `block8` and `block9` This simulates an out-of-bounds comparison
//     // Length is set to 10, while the strings are only 5 bytes including '\0'
//     int result = ft_memcmp(block8, block9, 10);
//     printf("7 oversized n: %s%d%s\n", GREEN, result, RESET);

//     return 0;
// }
