/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:21:27 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/22 11:31:50 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c_to_test, const char *charset);

// validator is_charset return TRUE/FALSE = 1/0
static int	is_charset(char c_to_test, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c_to_test)
			return (1);
		i++;
	}
	return (0);
}

//* main to test is_charset;
// // int is_charset(char *charset, char c_to_test);

// // int main() {
// //     // Test cases
// //     char set1[] = "aeiou";
// //     char set2[] = "12345";
// //     char set3[] = "!@#$%";

// //     char tc1 = 'a'; // Should return 1
// //     char tc2 = 'z'; // Should return 0
// //     char tc3 = '3'; // Should return 1
// //     char tc4 = '!'; // Should return 1
// //     char tc5 = 'b'; // Should return 0

// //     printf("Testing 'a' in \"%s\": %d\n", set1, is_charset(set1, tc1));
// //     printf("Testing 'z' in \"%s\": %d\n", set1, is_charset(set1, tc2));
// //     printf("Testing '3' in \"%s\": %d\n", set2, is_charset(set2, tc3));
// //     printf("Testing '!' in \"%s\": %d\n", set3, is_charset(set3, tc4));
// //     printf("Testing 'b' in \"%s\": %d\n", set1, is_charset(set1, tc5));

// //     return 0;
// // }

char	*ft_strtrim(char const *s1, char const *charset)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	if (!charset || charset[0] == '\0')
		return (ft_strdup(s1));
	i = 0;
	k = 0;
	j = ft_strlen(s1) - 1;
	if (j <= 0)
		return (ft_strdup(""));
	while (is_charset(s1[i], charset) == 1 && s1[i] != '\0')
		i++;
	while (is_charset(s1[j], charset) == 1 && j > 0)
		j--;
	if (i > j)
		return (ft_strdup(""));
	str = malloc((j - i + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < j + 1)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}

//! main to test ft_strtrim
// #include <stdio.h>
// int main() {
//     // Define colors
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

//     // Edge case 0: Regular trimming
//     char s0[] = "teste";
//     char *result0 = ft_strtrim(s0, '\0');
//     printf("1: %s%s%s\n", GREEN, result0, RESET);
//     // Expected output : "Hello, World!"
//     free(result0);

//     // // Edge case 1: Regular trimming
//     // char s1_1[] = "?#Hello, World!#?";
//     // char set_1[] = "#?";
//     // char *result1 = ft_strtrim(s1_1, set_1);
//     // printf("1: %s%s%s\n", GREEN, result1, RESET);
//     // // Expected output : "Hello, World!"
//     // free(result1);

//     // // Edge case 2: Trimming special characters
//     // char s1_2[] = "!!!!Welcome to C!!!!";
//     // char set_2[] = "!";
//     // char *result2 = ft_strtrim(s1_2, set_2);
//     // printf("2: %s%s%s\n", GREEN, result2, RESET); 
// 	// // Expected output : "Welcome to C"
//     // free(result2);

//     // // Edge case 3: Trimming multiple characters
//     // char s1_3[] = "xx---Test---xx";
//     // char set_3[] = "x-";
//     // char *result3 = ft_strtrim(s1_3, set_3);
//     // printf("3: %s%s%s\n", GREEN, result3, RESET);
// // Expected: "Test"
//     // free(result3);

//     // // Edge case 4: No characters to trim
//     // char s1_4[] = "NoTrimHere";
//     // char set_4[] = "xyz";
//     // char *result4 = ft_strtrim(s1_4, set_4);
//     // printf("4: %s%s%s\n", GREEN, result4, RESET);
// // Expected: "NoTrimHere"
//     // free(result4);

//     // // Edge case 5: Empty string
//     // char s1_5[] = "";
//     // char set_5[] = "x ";
//     // char *result5 = ft_strtrim(s1_5, set_5);
//     // printf("5: %s%s%s\n", GREEN, result5, RESET);
// // Expected: ""
//     // free(result5);

//     // // Edge case 6: Empty set
//     // char s1_6[] = "TrimNothing";
//     // char set_6[] = "";
//     // char *result6 = ft_strtrim(s1_6, set_6);
//     // printf("6: %s%s%s\n", GREEN, result6, RESET);
// // Expected: "TrimNothing"
//     // free(result6);

//     // // Edge case 7: All characters in set
//     // char s1_7[] = "aaaa";
//     // char set_7[] = "a";
//     // char *result7 = ft_strtrim(s1_7, set_7);
//     // printf("7: %s%s%s\n", GREEN, result7, RESET);
// // Expected: ""
//     // free(result7);

//     // // Edge case 8: String contains only characters from set
//     // char s1_8[] = "xxxxxxxx";
//     // char set_8[] = "x";
//     // char *result8 = ft_strtrim(s1_8, set_8);
//     // printf("8: %s%s%s\n", GREEN, result8, RESET);
// // Expected: ""
//     // free(result8);

//     // // Edge case 9: Trimming whitespace characters
//     // char s1_9[] = " \t\n Trimmed Text \t\n ";
//     // char set_9[] = " \t\n";
//     // char *result9 = ft_strtrim(s1_9, set_9);
//     // printf("9: %s%s%s\n", GREEN, result9, RESET);
// // Expected: "Trimmed Text"
//     // free(result9);

//     // // Edge case 10: Complex trimming example
//     // char s1_10[] = "xxxx Hello, xxx  Wxxxorld! xxx";
//     // char set_10[] = "x ";
//     // char *result10 = ft_strtrim(s1_10, set_10);
//     // printf("10: %s%s%s\n", GREEN, result10, RESET);
// // Expected: "Hello, xxx  Wxxxorld!"
//     // free(result10);

//     return 0;
// }
