/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:52:58 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/11 12:58:53 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* The isascii function in C checks if a given character is part of 
* the standard ASCII character set. 
* ASCII includes characters with values from 0 to 127,
* covering control characters, digits, uppercase and lowercase letters,
* and basic punctuation.

* When you pass a character to isascii, it:
*   Returns a non-zero (true) value if the character’s 
*		ASCII value is between 0 and 127.
*   Returns 0 (false) if the character is outside the ASCII range,
*   which can include extended characters or special symbols 
*		in non-ASCII encodings.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	test_chars[] = {'a', 'z', 'A', 'Z', '0', '9', '-', 
//'[', '%', '£', 'ñ', 'ü'};

//     for (int i = 0; i < 12; i++) {
//         printf("isascii(%c): %d\n", test_chars[i], isascii(test_chars[i]));
//     }
//         for (int i = 0; i < 12; i++) {
//         printf("ft_isascii(%c): %d\n", test_chars[i],
// 		ft_isascii(test_chars[i]));
//     }
//     return (0);
// }