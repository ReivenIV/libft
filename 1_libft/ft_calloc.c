/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:49:39 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/15 12:46:01 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t amount, size_t type_size)
{
	void	*tmp;
	size_t	i;

	i = 0;
	if (amount > (-1 / type_size) && type_size != 0)
		return (NULL);
	tmp = (void *)malloc(amount * type_size);
	if (tmp == NULL)
		return (0);
	while (i < amount)
	{
		((int *)tmp)[i] = 0;
		i++;
	}	
	return (tmp);
}
// #include <stdio.h>
// int main() {
//     const char *GREEN = "\033[1;32m";
//     const char *RED = "\033[1;31m";
//     const char *RESET = "\033[0m";

//     // Edge case 1: Allocate memory for 0 elements
// 	//* expected output = 1P:Failed 
//     int *arr1 = (int *)ft_calloc(0, sizeof(int));
//     if (arr1 == NULL) {
//         printf("1P:%sPassed%s\n", GREEN, RESET);
//     } else {
//         printf("1F:%sFailed%s\n", RED, RESET);
//     }

// // Edge case 2: Allocate a large amount of memory 
// // (possible failure if memory is insufficient)
// //* expected output = 2F: Passed, WARNING check system memory
// size_t large_size = 1000000000; 
// int *arr2 = (int *)ft_calloc(large_size, sizeof(int));
// if (arr2 == NULL) {
//     printf("2P:%sPassed for large allocation%s\n", GREEN, RESET);
// } else {
//     printf("2F:%sPassed, WARNING check system memory%s\n", RED, RESET);
//     free(arr2);
// }

//     // Edge case 4: Use calloc with size 1 (single byte allocation)
// 	//* expected output = 4P:Passed
//     char *arr4 = (char *)ft_calloc(1, sizeof(char));
//     if (arr4 != NULL && *arr4 == 0) {
//         printf("4P:%sPassed%s\n", GREEN, RESET);
//     } else {
//         printf("4F:%sFailed%s\n", RED, RESET);
//     }
//     free(arr4);

//     // Edge case 5: Allocate memory for different data types
// 	//* expected output = 5P:Passed
//     double *arr5 = (double *)ft_calloc(3, sizeof(double));
//     int all_zeros = 1;
//     for (int i = 0; i < 3; i++) {
//         if (arr5[i] != 0.0) {
//             all_zeros = 0;
//             break;
//         }
//     }
//     if (all_zeros) {
//         printf("5P:%sPassed%s\n", GREEN, RESET);
//     } else {
//         printf("5F:%sFailed%s\n", RED, RESET);
//     }
//     free(arr5);

//     // Edge case 3: Check if calloc initializes memory to zero
// 	//* expected output = 3P:Passed
//     int *arr3 = (int *)ft_calloc(5, sizeof(int));
//     int initialized = 1;
//     for (int i = 0; i < 5; i++) {
//         if (arr3[i] != 0) {
//             initialized = 0;
//             break;
//         }
//     }
//     if (initialized) {
//         printf("3P:%sPassed memory initialized%s\n", GREEN, RESET);
//     } else {
//         printf("3F:%sFailed Memory not initialized%s\n", RED, RESET);
//     }
//     free(arr3);

//     return 0;
// }