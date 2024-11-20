/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:30:32 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/20 17:22:28 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// for more information about ft_substr check the readme section.
// https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_substr

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	size_t	i;
	size_t	src_len;
	char	*str;

	if (src == NULL)
		return (NULL);
	src_len = ft_strlen(src);
	if (start >= src_len)
		return (ft_strdup(""));
	if (start + len > src_len)
		len = src_len - start;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && src[start + i] != '\0')
	{
		str[i] = src[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int main() {
//     // Define colors
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

//     // Edge case 1: Normal case
//     char str1[] = "Hello, World!";
//     char *result1 = ft_substr(str1, 7, 5);  // Start at index 7, length 5
//     printf("1: %s%s%s\n", GREEN, result1, RESET); // Expected: "World"
//     free(result1);

//     // Edge case 2: Length exceeds string bounds
//     char *result2 = ft_substr(str1, 7, 20); // Start at index 7, length 20
//     printf("2: %s%s%s\n", GREEN, result2, RESET); // Expected: "World!"
//     free(result2);

//     // Edge case 3: Start beyond the end of the string
//     char *result3 = ft_substr(str1, 50, 5); // Start at index 50, length 5
//     printf("3: %s%s%s\n", GREEN, result3, RESET); // Expected: ""
//     free(result3);

//     // Edge case 4: Empty string input
//     char str2[] = "";
//     char *result4 = ft_substr(str2, 0, 5); // Empty input
//     printf("4: %s%s%s\n", GREEN, result4, RESET); // Expected: ""
//     free(result4);

//     // Edge case 5: Start index is 0, length is 0
//     char *result5 = ft_substr(str1, 0, 0); // Start at 0, length 0
//     printf("5: %s%s%s\n", GREEN, result5, RESET); // Expected: ""
//     free(result5);

//     // Edge case 6: Full string (length equals the full length of the string)
//     char *result6 = ft_substr(str1, 0, strlen(str1)); // Full length
// 	// Expected: "Hello, World!"
//     printf("6: %s%s%s\n", GREEN, result6, RESET);
//     free(result6);

//     // Edge case 7: NULL input
//     char *result7 = ft_substr(NULL, 5, 5); // Null input
//     if (result7 == NULL) {
//         printf("7: %sNULL%s\n", GREEN, RESET); // Expected: "NULL"
//     } else {
//         free(result7);
//     }

//     // Edge case 8: Start at the last character
// 	// Start at last char
//     char *result8 = ft_substr(str1, strlen(str1) - 1, 5);
// 	// Expected: "!"
//     printf("8: %s%s%s\n", GREEN, result8, RESET);
//     free(result8);

//     return 0;
// }