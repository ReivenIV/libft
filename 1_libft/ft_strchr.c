/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:14:25 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/22 13:13:44 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * strchr will output the pointer of the string related to a target.
 * ft_strchr("hello", 'e') // output : "ello"
 * ft_strchr("hello", 'o') // output : "o"
 * ft_strchr("hello", '\0') // output : '\0'
 * ft_strchr("hello", 'z') // output : NULL
*/
// L33 we use unsigned char in case target is bigger than ASCII.255 

#include "libft.h"

char	*ft_strchr(const char *src, int target)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == (unsigned char)target)
			return ((char *)&src[i]);
		i++;
	}
	if (src[i] == (unsigned char)target)
		return ((char *)&src[i]);
	return (NULL);
}
// #include <stdio.h>
// int main() {
//     // Define colors
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

//     // Edge case 1: char is at the beginning
//     char *result1 = ft_strchr("hello", 'h');
//     printf("1 output: %s%s%s\n", GREEN, result1 ? result1 : "NULL", RESET);
// 	// expected output :: "hello"

//     // Edge case 2: char is at the end
//     char *result2 = ft_strchr("hello", 'o');
//  	printf("2 output: %s%s%s\n", GREEN, result2 ? result2 : "NULL", RESET);
// 	// expected output :: "hello"

//     // Edge case 3: char does not exist in the string
//     char *result3 = ft_strchr("hello", 'x');
//  	printf("3 output: %s%s%s\n", GREEN, result3 ? result3 : "NULL", RESET);
// 	// expected output :: NULL

//     // Edge case 4: Empty string
//     char *result4 = ft_strchr("", 'a');
//  	printf("4 output: %s%s%s\n", GREEN, result4 ? result4 : "NULL", RESET);
// 	// expected output :: NULL

//     // Edge case 5: Null char search
// 	char *result5 = ft_strchr("hello", '\0');
// 	printf("5 output: %s%s%s\n", GREEN, result5 ? result5 : "NULL", RESET);
// 	// expected output :: NULL

//     // Edge case 6: Null char search
// 	char *result6 = ft_strchr("hello", '\200');
// 	printf("6 output: %s%s%s\n", GREEN, result6 ? result6 : "NULL", RESET);
// 	// expected output :: NULL

// 	return (0);
// }