/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:14:25 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/15 12:50:01 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * strchr will output the pointer of the string related to a target.
 * ft_strchr("hello", 'e') // output : "ello"
 * ft_strchr("hello", 'o') // output : "o"
 * ft_strchr("hello", '\0') // output : '\0'
 * ft_strchr("hello", 'z') // output : NULL
*/

#include "libft.h"

char	*ft_strchr(const char *src, int target)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)src;
	while (str[i] != '\0')
	{
		if (str[i] == target)
			return (&str[i]);
		i++;
	}
	if (target == '\0')
		return (&str[i]);
	return (NULL);
}
// #include <stdio.h>
// int main() {
//     // Define colors
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

//     // Edge case 1: char is at the beginning
//     char str1[] = "hello";
//     char ch1 = 'h';
//     char *result1 = ft_strchr(str1, ch1);
//     printf("output: %s%s%s\n", GREEN, result1 ? result1 : "NULL", RESET);

//     // Edge case 2: char is at the end
//     char str2[] = "hello";
//     char ch2 = 'o';
//     char *result2 = ft_strchr(str2, ch2);
//  	printf("output: %s%s%s\n", GREEN, result2 ? result2 : "NULL", RESET);

//     // Edge case 3: char does not exist in the string
//     char str3[] = "hello";
//     char ch3 = 'x';
//     char *result3 = ft_strchr(str3, ch3);
//  	printf("output: %s%s%s\n", GREEN, result3 ? result3 : "NULL", RESET);

//     // Edge case 4: Empty string
//     char str4[] = "";
//     char ch4 = 'a';
//     char *result4 = ft_strchr(str4, ch4);
//  	printf("output: %s%s%s\n", GREEN, result4 ? result4 : "NULL", RESET);

//     // Edge case 5: Null char search
// 	char str5[] = "hello";
// 	char ch5 = '\0';
// 	char *result5 = ft_strchr(str5, ch5);
// 	printf("output: %s%s%s\n", GREEN, result5 ? result5 : "NULL", RESET);

// 	return (0);
// }