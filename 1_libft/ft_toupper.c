/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:19:30 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/08 15:32:59 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//* These functions convert lowercase letters to uppercase.

char	ft_toupper(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		return (str - 32);
	}
	return (str);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int main(void) {
//     // Array of test cases
//     char test_strings[][50] = {
//         "Hello, World!",                       
//         "Beej's Guide to Network Programming", 
//         "c programming language",              
//         "1234 abc ABC!",                       
//         "test_upper_case",                     
//         "",                                    
//         "ALL CAPS HERE\n",                     
//         "singlelowercase",                     
//         "MiXeD CaSe and Numbers 123",          
//         "test",                                
//         "mixed789WORDS789together"             
//     };

//     // Iterate through the array and test each string
//     int num_tests = sizeof(test_strings) / sizeof(test_strings[0]);
//     for (int i = 0; i < num_tests; i++) {
//         // Print original string
//         printf("Original:    %s\n", test_strings[i]);

//         // Test toupper (from <ctype.h>) character by character
//         char test_toupper[50];
//         strcpy(test_toupper, test_strings[i]);
//         for (int j = 0; test_toupper[j] != '\0'; j++) {
//             test_toupper[j] = toupper((unsigned char)test_toupper[j]);
//         }
//         printf("toupper:     %s\n", test_toupper);

//         // Test ft_toupper
//         char test_ft_toupper[50];
//         strcpy(test_ft_toupper, test_strings[i]);
//         for (int j = 0; test_ft_toupper[j] != '\0'; j++) {
//             test_ft_toupper[j] = ft_toupper(test_ft_toupper[j]);
//         }
//         printf("ft_toupper:  %s\n\n", test_ft_toupper);
//     }

//     return 0;
// }