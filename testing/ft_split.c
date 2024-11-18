/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:09 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/18 15:29:09 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *src, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	
	while (src[i] != '\0')
	{
		while (src[i] != '\0' && is_charset(src[i], charset))
			i++;
		if (src[i] != '\0')
		{
			count++;
			while (src[i] != '\0' && !is_charset(src[i], charset))
				i++;
		}
	}
	return (count);
}

char	*ft_strndup(char *src, int start, int end)
{
	int		i;
	char	*dest;

	if (src == NULL || start > end || start < 0)
		return (NULL);
	dest = malloc((end - start + 2) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;	
	while (i < (end - start + 1))
	{
		dest[i] = src[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// ! to test ft_strndup :: 
// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <string.h>

// // char *ft_strndup(char *src, int start, int end);

// // int main() {
// //     char *source = "Hello, World!";
// //     char *substring;

// //     // Test 1: Normal case
// //     substring = ft_strndup(source, 7, 11); // Expected: "World"
// //     if (substring) {
// //         printf("Test 1: %s\n", substring);
// //         free(substring);
// //     } else {
// //         printf("Test 1: Failed\n");
// //     }

// //     // Test 2: Out of bounds end index
// //     substring = ft_strndup(source, 7, 20); // Expected: NULL
// //     if (substring) {
// //         printf("Test 2: %s\n", substring);
// //         free(substring);
// //     } else {
// //         printf("Test 2: Failed (NULL returned)\n");
// //     }

// //     // Test 3: start > end
// //     substring = ft_strndup(source, 11, 7); // Expected: NULL
// //     if (substring) {
// //         printf("Test 3: %s\n", substring);
// //         free(substring);
// //     } else {
// //         printf("Test 3: Failed (NULL returned)\n");
// //     }

// //     // Test 4: Null source
// //     substring = ft_strndup(NULL, 0, 5); // Expected: NULL
// //     if (substring) {
// //         printf("Test 4: %s\n", substring);
// //         free(substring);
// //     } else {
// //         printf("Test 4: Failed (NULL returned)\n");
// //     }

// //     // Test 5: Entire string
// //     substring = ft_strndup(source, 0, (int)strlen(source) - 1); // Expected: "Hello, World!"
// //     if (substring) {
// //         printf("Test 5: %s\n", substring);
// //         free(substring);
// //     } else {
// //         printf("Test 5: Failed\n");
// //     }

// //     return 0;
// // }

int	splitter(char **dest, char *src, char *charset)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = 0;
	j = 0;
	if (dest == NULL || src == NULL || charset == NULL)
		return (0);
	while (src[i] != '\0')
	{
		while (src[i] != '\0' && is_charset(src[i], charset))
			i++;
		if (src[i] != '\0')
		{
			start = i;
			while (src[i] != '\0' && !is_charset(src[i], charset))
				i++;
			end = i - 1;
			dest[j] = ft_strndup(src, start, end);
			j++;
		}
	}
	dest[j] = NULL;
	return (j);
}
//!  Main function to test splitter
// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <string.h>
// // int main() {
// //     char *str = "Hello, World! Welcome to C programming.";
// //     char *charset = " ,!.";
// //     char *dest[10]; // Preallocate space for substrings


// //     // // 1 Output the results
// //     int count = splitter(dest, str, charset);
// //     printf("Number of substrings: %d\n", count);
// //     for (int i = 0; i < count; i++) {
// //         printf("Substring %d: %s\n", i + 1, dest[i]);
// //         free(dest[i]); // Free allocated memory
// //     }

// //     // Test edge cases
// //     printf("\n--- Edge Case Testing ---\n");

// //     // Empty string
// //     char *empty_str = "";
// //     count = splitter(dest, empty_str, charset);
// //     printf("Empty string test, substrings: %d\n", count);

// //     // String without delimiters
// //     char *no_delim_str = "NoDelimitersHere";
// //     count = splitter(dest, no_delim_str, charset);
// //     printf("No delimiters test, substrings: %d\n", count);
// //     for (int i = 0; i < count; i++) {
// //         printf("Substring %d: %s\n", i + 1, dest[i]);
// //         free(dest[i]);
// //     }

// //     // Only delimiters
// //     char *only_delim_str = " ,!.";
// //     count = splitter(dest, only_delim_str, charset);
// //     printf("Only delimiters test, substrings: %d\n", count);

// //     return 0;
// // }

char	**ft_split(const char *src, char *charset) {
	char	**dest;
	int		src_count_words;

	if (src == NULL || charset == NULL)
		return (NULL);
	src_count_words = count_words((char *)src, charset);
	dest = malloc((src_count_words + 1) * sizeof(char *));
	if (dest == NULL)
		return (NULL);
	if (src_count_words == 0)
	{
		dest[0] = NULL;
		return (dest);
	}
	splitter(dest, (char *)src, charset);
	return (dest);
}

//!  Main function to test ft_split
// // #include <stdio.h>
// // int main(void)
// // {
// //     char src[] = ",:;test,patate;;ananas,.,.salade,;:";
// //     char charset[] = ",:;.";
// //     char **result = ft_split(src, charset);
// //     int i = 0;

// //     printf("Word count: %d\n", count_words(src, charset));
// //     while (i < 5)
// //     {
// //         printf("res[%d] :: %s\n", i, result[i]);
// //         free(result[i]);
// //         i++;
// //     }
// //     free(result);
// //     return (0);
// // }