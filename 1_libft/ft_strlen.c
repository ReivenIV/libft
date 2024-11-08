/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:45:20 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/08 15:34:08 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	test[] = "takin";;
// 	int		test2;

// 	test2 = 0;	
// 	printf("%d", ft_strlen(test));
// 	return (0);
// }