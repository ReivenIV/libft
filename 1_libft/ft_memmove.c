/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:03:25 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/11 15:09:49 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  *  memmove is a function used to copy a specified number of bytes
  *  from one memory area to another. The main advantage of `memmove` over
  *  similar functions, like `memcpy`, is that it can handle overlapping
  *  memory areas safely. When the source and destination regions overlap,
  *  `memmove` ensures the data is correctly copied by managing the order of
  *  operations internally. This prevents unintended data corruption that
  *  might occur if a simple copy is used on overlapping areas.
  * 
  *  REMINDER : If DEST is greater than SRC, you should copy backward
  *  from the end
*/

#include <string.h>

void	*ft_memmove(void *str_dest, const void *str_src, size_t size)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*src;

	if (str_src == NULL && str_dest == NULL)
		return (NULL);
	i = 0;
	dest = (unsigned char *)str_dest;
	src = (unsigned const char *)str_src;
	if (dest > src)
		while (size-- > 0)
			dest[size] = src[size];
	else
	{
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// int main() {
//     // Original src setup
//     char src[] = "Hello, World!";
// 	char dest[20];
// 	const char *RESET = "\033[0m";
// 	const char *GREEN = "\033[1;32m";
//     printf("Original src: %s\n", src);

// 	// ex: 1
//     ft_memmove(dest, src + 2, 3); // output : "llo"
//     printf("\n> ex 1: %s  %s %s\n", GREEN, dest, RESET);

//     // Reset src / dest
//     strcpy(src, "Hello, World!");
//     strcpy(dest, "");

// 	// ex: 2
//     ft_memmove(dest, src + 7, 3); // output : "Wor"
//     printf("\n> ex 2: %s  %s %s\n", GREEN, dest, RESET);

//     // wdo Reset src / dest
//     strcpy(src, "Hello, World!");
//     strcpy(dest, "");

// 	// ex: 3
//     ft_memmove(dest, src + 2, 3); // output : "llo"
//     printf("\n> ex 3: %s  %s %s\n", GREEN, dest, RESET);

//     // wdo Reset src / dest
//     strcpy(src, "Hello, World!");
//     strcpy(dest, "");

// 	// ex: 4
//     ft_memmove(src + 2, src, 4); // output : "HeHeHe World!"
//     printf("\n> ex 4: %s  %s %s\n", GREEN, src, RESET);

// 	// wdo Reset src / dest
//     strcpy(src, "Hello, World!");
//     strcpy(dest, "");

// 	// ex: 5
//     ft_memmove(src + 7, src, 5); // output : "Hello, Hello!"
//     printf("\n> ex 5: %s  %s %s\n", GREEN, src, RESET);

// 	// wdo Reset src / dest
//     strcpy(src, "Hello, World!");
//     strcpy(dest, "");

// 	// ex: 6
//     ft_memmove(src-1, src + 6, 5); // output : "World, World!"
//     printf("\n> ex 6: %s  %s %s\n", GREEN, src, RESET);
//     return 0;
// }