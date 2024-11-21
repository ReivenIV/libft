/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:28:15 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/21 19:40:48 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)&s1[0]);
	i = 0;
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && s1[i + j] != '\0'
			&& s1[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main() {
//     // Define colors
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

//     //Edge case 1: Identical strings
//     char haystack1[] = "hello world";
//     char needle1[] = "hello";
//     char *result1 = ft_strnstr(haystack1, needle1, sizeof(haystack1));
//     printf("1: %s%s%s\n", GREEN, result1 ? result1 : "Not found", RESET); 
// 	// output: "hello world"

//     // Edge case 2: Needle at the beginning
//     char haystack2[] = "good morning";
//     char needle2[] = "od";
//     char *result2 = ft_strnstr(haystack2, needle2, sizeof(haystack2));
//     printf("2: %s%s%s\n", GREEN, result2 ? result2 : "Not found", RESET);
// 	// output: "od morning"

//     // Edge case 3: Needle middle
//     char haystack3[] = "Proin dictum est non purus malesuada eleifend. ";
//     char needle3[] = "est";
//     char *result3 = ft_strnstr(haystack3, needle3, strlen(haystack3));
//     printf("3: %s%s%s\n", GREEN, result3 ? result3 : "Not found", RESET);
// 	// output: "est non purus malesuada eleifend."

//     // Edge case 4: Partial match but incomplete substring
//     char haystack4[] = "look for the substring";
//     char needle4[] = "sub";
// 	// Limit length to 10
//     char *result4 = ft_strnstr(haystack4, needle4, 10);
//     printf("4: %s%s%s\n", GREEN, result4 ? result4 : "Not found", RESET);
// 	// output: "Not found"

//     // Edge case 5: Zero-length needle
//     char needle5[] = "";
//     char *result5 = ft_strnstr(haystack1, needle5, sizeof(haystack1));
//     printf("5: %s%s%s\n", GREEN, result5 ? result5 : "Not found", RESET);
// 	// output: "hello world" (since empty string is found everywhere)

//     // Edge case 6: Haystack shorter than needle
//     char haystack6[] = "short";
//     char needle6[] = "longer";
//     char *result6 = ft_strnstr(haystack6, needle6, sizeof(haystack6));
//     printf("6: %s%s%s\n", GREEN, result6 ? result6 : "Not found", RESET);
// 	// output: "Not found"

//     // Edge case 7: Needle not in haystack
//     char haystack7[] = "search this text";
//     char needle7[] = "missing";
//     char *result7 = ft_strnstr(haystack7, needle7, sizeof(haystack7));
//     printf("7: %s%s%s\n", GREEN, result7 ? result7 : "Not found", RESET);
// 	// output: "Not found"

//     // Edge case 8: Needle matches only a portion 
// 	//   in haystack due to length limit
//     char haystack8[] = "substring example";
//     char needle8[] = "string";
//     char *result8 = ft_strnstr(haystack8, needle8, 8);
//     printf("8: %s%s%s\n", GREEN, result8 ? result8 : "Not found", RESET);
// 	// output: "Not found"

//     // Edge case 9: Exact match
//     char haystack9[] = "perfect match";
//     char needle9[] = "perfect match";
//     char *result9 = ft_strnstr(haystack9, needle9, sizeof(haystack9));
//     printf("9: %s%s%s\n", GREEN, result9 ? result9 : "Not found", RESET); 
// 	//output: "perfect match"

//     // Edge case 10: Empty haystack
//     char haystack10[] = "";
//     char needle10[] = "anything";
//     char *result10 = ft_strnstr(haystack10, needle10, sizeof(haystack10));
//     printf("10: %s%s%s\n", GREEN, result10 ? result10 : "Not found", RESET);
// 	// output: "Not found"

//     return 0;
// }