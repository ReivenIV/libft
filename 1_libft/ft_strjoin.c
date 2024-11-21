/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:51:36 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/21 11:24:45 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// * Will join 2 strings.

#include "libft.h"

char	*ft_strjoin(char const *src1, char const *src2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!src1)
		src1 = "";
	if (!src2)
		src2 = "";
	str = malloc((ft_strlen(src1) + ft_strlen(src2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (src1[i] != '\0')
	{
		str[i] = src1[i];
		i++;
	}
	while (src2[j] != '\0')
	{
		str[i + j] = src2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
// #include <stdio.h>
// int main() {
//     // Define colors for output formatting
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

//     // Test 1: Normal concatenation of two non-empty strings
//     char *result1 = ft_strjoin("Hello, ", "world!");
//     printf("Test 1: %s%s%s\n", GREEN, result1 ? result1 : "NULL", RESET);
//     free(result1);  

//     // Test 2: Concatenation with an empty second string
//     char *result2 = ft_strjoin("Hello, world!", "");
//     printf("Test 2: %s%s%s\n", GREEN, result2 ? result2 : "NULL", RESET);
//     free(result2);

//     // Test 3: Concatenation with an empty first string
//     char *result3 = ft_strjoin("", "Hello, world!");
//     printf("Test 3: %s%s%s\n", GREEN, result3 ? result3 : "NULL", RESET);
//     free(result3);

//     // Test 4: Concatenation of two empty strings
//     char *result4 = ft_strjoin("", "");
//     printf("Test 4: %s%s%s\n", GREEN, result4 ? result4 : "NULL", RESET);
//     free(result4);

//     // Test 5: Concatenation where one of the inputs is NULL (edge case)
//     char *result5 = ft_strjoin(NULL, "Hello, world!");
//     printf("Test 5: %s%s%s\n", GREEN, result5 ? result5 : "NULL", RESET);
//     free(result5);

//     // Test 6: Concatenation where both inputs are NULL (edge case)
//     char *result6 = ft_strjoin(NULL, NULL);
//     printf("Test 6: %s%s%s\n", GREEN, result6 ? result6 : "NULL", RESET);
//     free(result6);

//     return 0;
// }