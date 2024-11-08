/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:43:11 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/08 15:35:28 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// * The isalnum function in C checks if a given character is alphanumeric, meaning 
// * it’s either a letter (uppercase or lowercase) or a digit (0 to 9).

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	test_chars[] = {'a', 'z', 'A', 'Z', '0', '9', '-', '[', '%'};
//     for (int i = 0; i < 9; i++) {
//         printf("isalnum(%c): %d\n", test_chars[i], isalnum(test_chars[i]));
//     }
//         for (int i = 0; i < 9; i++) {
//         printf("ft_isalnum(%c): %d\n", test_chars[i],
// 		ft_isalnum(test_chars[i]));
//     }
//     return (0);
// }