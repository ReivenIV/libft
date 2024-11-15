/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:19:16 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/15 14:54:42 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* strrchr function is used to find the last occurrence of a character
* in a string. It scans the string from the end towards the beginning and
* returns a pointer to the last occurrence of the specified character.
* If the character is not found, strrchr returns NULL.
  REMINDER : is strchr but reversed.
*/

#include "libft.h"

size_t	ft_strlen7(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/*
* > while (i >= 0) or (i > 0) would cause an infinite loop,
*   since size_t is unsigned and cannot be negative.
* > while (i-- > 0) it works.
*/

char	*ft_strrchr(const char *src, int target)
{
	size_t	i;
	char	*str;

	str = (char *)src;
	i = ft_strlen7(str);
	if (target == '\0')
		return (&str[i]);
	while (i-- > 0)
	{
		if (str[i] == target)
			return (&str[i]);
	}
	return (0);
}

// #include <stdio.h>
// int main() {
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

//     // Edge case 1: char is at the beginning
//     char str1[] = "hello";
//     char ch1 = 'h';
//     char *result1 = ft_strrchr(str1, ch1);
//     printf("1 output: %s%s%s\n", GREEN, result1 ? result1 : "NULL", RESET);

//     // Edge case 2: char is at the end
//     char str2[] = "hello";
//     char ch2 = 'o';
//     char *result2 = ft_strrchr(str2, ch2);
//     printf("2 output: %s%s%s\n", GREEN, result2 ? result2 : "NULL", RESET);

//     // Edge case 3: char does not exist in the string
//     char str3[] = "hello";
//     char ch3 = 'x';
//     char *result3 = ft_strrchr(str3, ch3);
//     printf("3 output: %s%s%s\n", GREEN, result3 ? result3 : "NULL", RESET);

//     // Edge case 4: Empty string
//     char str4[] = "";
//     char ch4 = 'a';
//     char *result4 = ft_strrchr(str4, ch4);
//     printf("4 output: %s%s%s\n", GREEN, result4 ? result4 : "NULL", RESET);

//     // Edge case 5: Null char search
//     char str5[] = "hello";
//     char ch5 = '\0';
//     char *result5 = ft_strrchr(str5, ch5);
//     printf("5 '\\0' Char: %s%s%s\n", GREEN, result5 ? result5 : "NULL",
// 		RESET);

//     // Edge case 6: Multiple occurrences of char
//     char str6[] = "hello world test";
//     char ch6 = 'w';
//     char *result6 = ft_strrchr(str6, ch6);
//     printf("6 output: %s%s%s\n", GREEN, result6 ? result6 : "NULL", RESET);

//     return (0);
// }
