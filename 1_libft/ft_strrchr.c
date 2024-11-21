/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:19:16 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/21 16:24:42 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* strrchr function is used to find the last occurrence of a character
* in a string. It scans the string from the end towards the beginning and
* returns a pointer to the last occurrence of the specified character.
* If the character is not found, strrchr returns NULL.
  REMINDER : is strchr but reversed.
  REMINDER : ft_strrchr("Hello World", 'W') => output: "World"
*/

#include "libft.h"

/*
* > while (i >= 0) or (i > 0) would cause an infinite loop,
*   since size_t is unsigned and cannot be negative.
* > while (i-- > 0) it works.
*/

char	*ft_strrchr(const char *src, int src_target)
{
	size_t	i;
	unsigned char target;

	target = (unsigned char)src_target;
	i = ft_strlen(src);
	if (target == '\0')
		return ((char *)&src[i]);
	while (i > 0)
	{
		i--;
		if ((unsigned char)src[i] == target)
			return ((char *)&src[i]);
	}
	return (0);
}

// #include <stdio.h>
// int main() {
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

//     // Edge case 0: char is at the beginning
//     char str0[] = "test";
//     char ch0 = 'e';
//     char *result0 = ft_strrchr(str0, ch0);
//     printf("0 output: %s%s%s\n", GREEN, result0 ? result0 : "NULL", RESET);

//     char *result10 = ft_strrchr(((void*)0), '\0');
//     printf("10 output: %s%s%s\n", GREEN, result10 ? result10 : "NULL", RESET);

    // // Edge case 1: char is at the beginning
    // char str1[] = "hello";
    // char ch1 = 'h';
    // char *result1 = ft_strrchr(str1, ch1);
    // printf("1 output: %s%s%s\n", GREEN, result1 ? result1 : "NULL", RESET);

    // // Edge case 2: char is at the end
    // char str2[] = "hello";
    // char ch2 = 'o';
    // char *result2 = ft_strrchr(str2, ch2);
    // printf("2 output: %s%s%s\n", GREEN, result2 ? result2 : "NULL", RESET);

    // // Edge case 3: Empty string
    // char str3[] = "";
    // char ch3 = 'a';
    // char *result3 = ft_strrchr(str3, ch3);
    // printf("3 output: %s%s%s\n", GREEN, result3 ? result3 : "NULL", RESET);

    // // Edge case 4: Null char search
    // char str4[] = "hello";
    // char ch4 = '\0';
    // char *result4 = ft_strrchr(str4, ch4);
    // printf("4 '\\0' Char: %s%s%s\n", GREEN, result4 ? result4 : "NULL",
	// 	RESET);

    // // Edge case 6: Multiple occurrences of char
    // char str6[] = "hello world test";
    // char ch6 = 'w';
    // char *result6 = ft_strrchr(str6, ch6);
    // printf("6 output: %s%s%s\n", GREEN, result6 ? result6 : "NULL", RESET);

//     return (0);
// }
