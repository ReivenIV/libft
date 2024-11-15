/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:07:53 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/15 13:36:42 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * strdup will duplicate a string using malloc.
*/

#include "libft.h"

int	ft_strlen2(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(const char *str)
{
	int		i;
	int		str_len;
	char	*dup;

	if (str == NULL)
		return (NULL);
	i = 0;
	str_len = ft_strlen2(str);
	dup = (char *)malloc(str_len * sizeof(char) + 1);
	if (dup == NULL)
		return (NULL);
	while (i < str_len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);	
}

// #include <stdio.h>

// int main() {
//     const char *GREEN = "\033[1;32m";
//     const char *RESET = "\033[0m";

//     // Edge case 1: Normal string
//     const char *str1 = "Hello, world!";
//     char *dup1 = ft_strdup(str1);
//     printf("1: %s%s%s\n", GREEN, dup1, RESET);
//     free(dup1);

//     // Edge case 2: Empty string
//     const char *str2 = "";
//     char *dup2 = ft_strdup(str2);
//     printf("2: %s%s%s\n", GREEN, dup2, RESET);
//     free(dup2);

//     // Edge case 3: String with special characters
//     const char *str3 = "123!@#$$%^^&*()";
//     char *dup3 = ft_strdup(str3);
//     printf("3: %s%s%s\n", GREEN, dup3, RESET);
//     free(dup3);

//     // Edge case 5: String with newline characters
//     const char *str5 = "Hello world\n\n";
//     char *dup5 = ft_strdup(str5);
//     printf("5: %s%s%s\n", GREEN, dup5, RESET);
//     free(dup5);
	
//     return 0;
// }