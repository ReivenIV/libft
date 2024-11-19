/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:23:17 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/19 12:23:17 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char *ft_itoa(int n)

static int  n_len(long n);
static char	*new_str(long n_len);




static char	*new_str(long n_len)
{
	char	*tmp;

	tmp = malloc((n_len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}


// We count how many numbers we have in n (necesary for malloc)
static int	n_len(long n)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
//! test n_len function
// // #include <stdio.h>
// // int main() {
// //     // Test cases
// //     long test_numbers[] = {0, 1, -1, 123, -123, 987654321, -987654321};
// //     int num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);

// //     // Run test cases
// //     for (int i = 0; i < num_tests; i++) {
// //         long n = test_numbers[i];
// //         printf("n: %ld, n_len: %d\n", n, n_len(n));
// //     }

// //     return 0;
// // }