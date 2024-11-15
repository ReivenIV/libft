/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:58:14 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/15 15:09:17 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The `atoi` function in C converts a string to an integer. 
 * It reads characters from the string until it reaches a non-numeric 
 * character, interpreting them as digits and returning the corresponding 
 * integer value.
 * 
 * // REMINDER : atoi does not handle un/overflow numbers.
 */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	power;
	int	res;

	i = 0;
	res = 0;
	power = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			power = power * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * power);
}
// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
//     // Edge cases
//     char *tests[] = {
//         "123",          
//         "-123",         
//         "   456",       
//         "  -456",       
//         "+789",         
//         "0",            
//         "-0",           
//         "2147483647",   
//         "-2147483648",  
//         "2147483648",   
//         "-2147483649",  
//         "42abc",        
//         "   +42  ",     
//         "--123",        
//         "-+123",        
//         "   ",          
//         "",             
//         "+-123", 
//        "2247483648",       
//        "999999999999999999999", // Large overflow
//        "-999999999999999999999", // Large underflow
// 	   "1",
// 	   "-1",
// 	   "+",
// 	   "-",
// 	   "1hiuhih42",
// 	   "-1hiuhih42",
// 	   "+42oihj",
// 	   "12:3"   	   
//     };
//     int i = 0;
//     while (i < 29) {
//         int res_atoi = atoi(tests[i]);
// 		int res_ft_atoi = ft_atoi(tests[i]);
//     printf("Input        : \"%s\"\nOutput_atoi   : %d", tests[i], res_atoi);
// 		printf("\nOutput_ft_atoi: %d\n\n", res_ft_atoi);
// 		printf("\nOutput_atoi: %d\n\n", res_atoi);

//         i++;
//     }

//     return 0;
// }