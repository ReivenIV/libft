/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:39:04 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/21 15:27:01 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//*	These functions convert uppercase letters to lowercase.

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void) {
// int test_strings[][50] = {
// 		"HELLO, WORLD!",                      
// 		"C NETWORK PROGRAMMING",              
// 		"MIXED Case EXAMPLE 123!",            
// 		"CONVERT THIS TO LOWER",              
// 		"RANDOM_TEXT_HERE!",                  
// 		"SIMPLE LOWER TEST",                  
// 		"ALL CAPS LINE",                    
// 		"MIXEDlowerANDUPPER",                 
// 		"RandomIZED cAsE FoR TESTING",        
// 		"TESTINGSTRING123",                   
// 		"COMPLEX789CASE789HERE",
// 		"\200"              
// };

//     // Iterate through the array and test each string
// 		int num_tests = sizeof(test_strings) / sizeof(test_strings[0]);
// 		for (int i = 0; i < num_tests; i++) {
//         // Print original string
//         printf("Original:    %i\n", test_strings[i]);

//         // Test tolower (from <ctype.h>) intacter by intacter
//         int test_tolower[50];
//         strcpy(test_tolower, test_strings[i]);
//         for (int j = 0; test_tolower[j] != '\0'; j++) {
//             test_tolower[j] = tolower((unsigned int)test_tolower[j]);
//         }
//         printf("tolower:     %i\n", test_tolower);

//         // Test ft_tolower
//         int test_ft_tolower[50];
//         strcpy(test_ft_tolower, test_strings[i]);
//         for (int j = 0; test_ft_tolower[j] != '\0'; j++) {
//             test_ft_tolower[j] = ft_tolower(test_ft_tolower[j]);
//         }
//         printf("ft_tolower:  %i\n\n", test_ft_tolower);
//     }

//     return 0;
// }