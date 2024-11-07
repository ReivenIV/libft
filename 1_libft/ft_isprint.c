/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:08:44 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/07 16:15:50 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* The isprint function in C checks if a given character is a printable ASCII 
* character, meaning it has a visible representation. 
* This includes spaces, letters, digits, punctuation marks, 
* and special symbols within the ASCII range from 32 to 126.

* When you pass a character to isprint, it:
* Returns a non-zero (true) value if the character is printable.
* Returns 0 (false) if the character is not printable,
* such as control characters (e.g., newline, tab, etc.).
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	char test_chars[] = {'a', 'z', 'A', 'Z', '0', '9', '-', '[', '%', '"', '(',
		')', '\n', '\t', '\0', 127};

	printf("Testing isprint:\n");
	for (int i = 0; i < 16; i++)
	{
		printf("isprint(%c): %d\n", test_chars[i], isprint(test_chars[i]));
	}

	printf("\nTesting ft_isprint:\n");
	for (int i = 0; i < 16; i++)
	{
		printf("ft_isprint(%c): %d\n", test_chars[i],
				ft_isprint(test_chars[i]));
	}
	return (0);
}*/