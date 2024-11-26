/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:00:49 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/26 12:23:12 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* The isalpha function in C is used to check whether a given character is 
* an alphabetic letter, meaning it belongs to the set 
* of uppercase (A-Z) or lowercase (a-z) letters. 

* - Returns a non-zero (true) value if the character is alphabetic.

* This function is commonly used in programs that need to validate input
* or distinguish letters from other characters. 
* It helps ensure that data contains expected types of characters,
* such as checking if a user entered only letters in a name field.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
//#include <stdio.h>

int	main(void)
{
	char	test_chars[] = {'a', 'Z', '1', '$', '-'};
    for (int i = 0; i < 5; i++) {
//  printf("isalpha(%c): %d\n", test_chars[i], isalpha(test_chars[i]));
    }
        for (int i = 0; i < 5; i++) {
//        printf("ft_isalpha(%c): %d\n", test_chars[i],
		ft_isalpha(test_chars[i]));
    }
    return (0);
}
*/