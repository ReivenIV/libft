/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:52:54 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/08 17:54:45 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
* ft_bzero is like memset it used to set a block of memory to a 
* specific value, byte by byte. The only difference is 
*/
#include <stddef.h>

void	*ft_bzero(void *buffer, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) buffer;
	i = 0;
	while (i < size)
	{
		p[i] = 0;
		i++;
	}
	return (buffer);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     // Edge case 1: Zero size
//     unsigned char buffer1[3];
//     ft_bzero(buffer1, sizeof(buffer1));  // No change expected
//     printf("test 1 :\n");
//     for (int i = 0; i < 3; i++) {
//         printf("%d ", buffer1[i]);
//     }

//     // Edge case 2: Size matches buffer length
//     unsigned char buffer2[5];
//     ft_bzero(buffer2, sizeof(buffer2));  // Entire buffer should be '0'
//     printf("\ntest 2:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", buffer2[i]);
//     }
//     printf("\n\n");

//    return 0;
// }
