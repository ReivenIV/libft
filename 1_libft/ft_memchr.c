/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:43:30 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/21 18:32:09 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 'memchr' : function  scans  the  initial "AMOUNT" bytes of the memory area
 * pointed to by "SRC" for the first instance of "C" or "CHAR".
 * Both "C" or "CHAR" and the  bytes  of the memory area pointed to by
 * "SRC" are interpreted as unsigned char.
 * 
 * 'memchr' return a pointer to the matching byte or NULL if the character
 * does not occur in the given memory area.
 * 
 * 'memchr' is generally used for arbitrary memory blocks, not necessarily
 * strings. Thus, the function should only loop up to amount
 * bytes without checking for \0.

REMINDER : check dif_between_memchr_&strchr.md
*/

#include "libft.h"

// target = c = char. 
void	*ft_memchr(const void *src, int target, size_t amount)
{
	size_t			i;
	unsigned char	*str;

	if (!amount)
		return (NULL);
	str = (unsigned char *)src;
	i = 0;
	while (i < amount)
	{
		if (str[i] == (unsigned char)target)
			return (&str[i]);
		i++;
	}
	if (target == '\0' && str[i] == '\0')
		return (&str[i]);
	return (NULL);
}

// #include <stdio.h>
// int main() {
//     // Define colors
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

//     // Edge case 1: Byte value is at the beginning
//     char str1[] = "hello";
//     char value1 = 'h';
//     char *result1 = ft_memchr(str1, value1, sizeof(str1));
//     printf("1 ex: %s%s%s\n", GREEN, result1 ? result1 : "NULL", RESET);

//     // Edge case 2: Byte value is at the end
//     char str2[] = "hello";
//     char value2 = 'o';
//     char *result2 = ft_memchr(str2, value2, sizeof(str2));
//     printf("2 ex: %s%s%s\n", GREEN, result2 ? result2 : "NULL", RESET);

//     // Edge case 3: Byte value does not exist in the memory block
//     char str3[] = "hello";
//     char value3 = 'x';
//     char *result3 = ft_memchr(str3, value3, sizeof(str3));
//     printf("3 ex: %s%s%s\n", GREEN, result3 ? result3 : "NULL", RESET);

//     // Edge case 4: Empty memory block
//     char str4[] = "";
//     char value4 = 'a';
//     char *result4 = ft_memchr(str4, value4, sizeof(str4));
//     printf("4 ex: %s%s%s\n", GREEN, result4 ? result4 : "NULL", RESET);

//     // Edge case 5: Search for null character
//     char str5[] = "hello";
//     char value5 = '\0';
//     char *result5 = ft_memchr(str5, value5, sizeof(str5));
//     printf("5 \\0: %s%s%s\n", GREEN, result5 ? result5 : "NULL", RESET);

//     // Edge case 6: Large block with character not in the beginning or end
//     char str6[] = "abcdefg";
//     char value6 = 'd';
//     char *result6 = ft_memchr(str6, value6, sizeof(str6));
//     printf("6 ex: %s%s%s\n", GREEN, result6 ? result6 : "NULL", RESET);

// 	// Edge case 7: Memory with embedded null bytes
// 	char str7[] = "\0abc\0def";
// 	char value7 = '\0';
// 	char *result7 = ft_memchr(str7, value7, sizeof(str7));
// 	printf("7 Embedded \\0: %s%s%s\n", GREEN,
// 		result7 ? "Found" : "NULL", RESET);

//     return 0;
// }
