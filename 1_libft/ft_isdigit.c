/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:26:38 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/07 15:57:37 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// * The isdigit function in C is used to check if a given character is a decimal digit (0 to 9). 

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	char	test_chars[] = {'a', 'Z', '1', '$', '-', '9'};
    for (int i = 0; i < 6; i++) {
        printf("isdigit(%c): %d\n", test_chars[i], isdigit(test_chars[i]));
    }
        for (int i = 0; i < 6; i++) {
        printf("ft_isdigit(%c): %d\n", test_chars[i],
		ft_isdigit(test_chars[i]));
    }
    return (0);
}*/