/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:49:37 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/08 13:04:41 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memset(void *buffer, int simbol, size_t size)
{
    unsigned char *p;
    size_t i;
    
    p = (unsigned char*)buffer;
    i = 0;

    while(i < size)
    {
        p[i] = (unsigned char)simbol;
        i++;
    }
    return (buffer);
}

#include <stdio.h>
#include <string.h>

int main() {    
    // Example 1: Initialize an integer array to zero
    int arr[10];
    ft_memset(arr, 0, sizeof(arr)); // Set all bytes in `arr` to 0
    printf("Example 1 - Integer array initialized to zero:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    
    printf("\n\n");
    

    // Example 2: Set a character array to a specific character
    char str[20];
    ft_memset(str, '*', sizeof(str) - 1); // Fill with '*'
    str[sizeof(str) - 1] = '\0';       // Null-terminate the string
    printf("Example 2 - Character array filled with '*':\n");
    printf("%s\n\n", str); // output : *******************



    // Example 3: Reset part of an array
    int partial_reset[10];
    for (int i = 0; i < 10; i++) {
        partial_reset[i] = i + 1; // Initialize with values 1 to 10
    }
    ft_memset(partial_reset + 5, 0, 5 * sizeof(int)); // Reset second half to 0    
    printf("Example 3 - Partially reset array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", partial_reset[i]); // output :1 2 3 4 5 0 0 0 0 0 
    }

    
    printf("\n\n");


    // Example 4: Fill an array with -1
    int fill_neg[5];
    ft_memset(fill_neg, -1, sizeof(fill_neg)); // Sets each byte to 0xFF (all bits 1)
    printf("Example 4 - Array filled with -1:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", fill_neg[i]); // output: -1 -1 -1 -1 -1
    }

    
    printf("\n");

    return 0;
}
