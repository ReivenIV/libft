/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:01:11 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/15 15:05:20 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * strncmp function in C compares up to a specified number 
 * of characters between two strings.
 * 
 * Returns 0 if the first n characters of both strings are equal.
 * Returns a positive value if the first differing character has
 * 		a greater ASCII value in str1.
 * Returns a negative value if the first differing character has
 * 		a greater ASCII value in str2
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
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
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

// 	// R = real function.
//     // Edge case 1: Strings are identical
//     const char str1[] = "hello";
//     const char str2[] = "hello";
//     printf("1 : %s%d%s\n", GREEN, ft_strncmp(str1, str2, 5), RESET);
//     printf("1R: %s%d%s\n\n", GREEN, strncmp(str1, str2, 5), RESET);

//     // Edge case 2: mismatch last char.
//     const char str3[] = "hello";
//     const char str4[] = "hellx";
//     printf("2 : %s%d%s\n", GREEN, ft_strncmp(str3, str4, 5), RESET);
//     printf("2R: %s%d%s\n\n", GREEN, strncmp(str3, str4, 5), RESET);

//     // Edge case 3: One string is empty
//     const char str7[] = "";
//     const char str8[] = "hello";
// 	// Compare an empty string with a non-empty string
//     printf("3 : %s%d%s\n", GREEN, ft_strncmp(str7, str8, 5), RESET);
//     printf("3R: %s%d%s\n\n", GREEN, strncmp(str7, str8, 5), RESET);

//     // Edge case 3: One string is empty
//     const char str75[] = "Hello";
//     const char str85[] = "Hell";
// 	// Compare an empty string with a non-empty string
//     printf("3 : %s%d%s\n", GREEN, ft_strncmp(str75, str85, 5), RESET);
//     printf("3R: %s%d%s\n\n", GREEN, strncmp(str75, str85, 5), RESET);

//     // Edge case 4: Both strings are empty
//     const char str9[] = "";
//     const char str10[] = "";
// 	// Compare two empty strings
//     printf("4 : %s%d%s\n", GREEN, ft_strncmp(str9, str10, 5), RESET);
//     printf("4R: %s%d%s\n\n", GREEN, strncmp(str9, str10, 5), RESET);	

//     // Edge case 5: n is 0, should return 0 (no comparison needed)
//     const char str11[] = "hello";
//     const char str12[] = "world";
//     printf("5 (n = 0): %s%d%s\n", GREEN, ft_strncmp(str11, str12, 0), RESET);
//     printf("5R (n = 0): %s%d%s\n\n", GREEN, strncmp(str11, str12, 0), RESET);

//     // Edge case 6: Compare only part of the string that matches
//     const char str13[] = "hello world";
//     const char str14[] = "hello there";
// 	// Only first 5 chars should match
//     printf("6 : %s%d%s\n", GREEN, ft_strncmp(str13, str14, 5), RESET);
//     printf("6R: %s%d%s\n", GREEN, strncmp(str13, str14, 5), RESET);

//     return 0;
// }