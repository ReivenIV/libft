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

#include "libft.h"
static int  count_n(long n);
static char	*create_str(long src_n, long n_len);

char	*ft_itoa(int src_n)
{
	long	i;
	long	n;
	char	*res;
	long	n_len;

	n = src_n;
	n_len = count_n(n);
	res = create_str(n, n_len);
	if (res == NULL)
		return (NULL);
	if (n == 0)
		return (res);
	if (n < 0)
	{
		n = n * -1;
		res[0] = '-';
	}
	i = n_len - 1;
	while (n > 0)
	{
		res[i] = ((n % 10) + 48);
		n = n / 10;
		i--;
	}
	return (res);
}

//! test *ft_itoa function
// // #include <stdio.h>
// // int main()
// // {
// //     int test_cases[] = {456, -77, 800, 8989, 7410, 0, -2147483648, 2147483647};
// //     size_t num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

// //     for (size_t i = 0; i < num_cases; i++)
// //     {
// //         char *result = ft_itoa(test_cases[i]);
// //         if (result)
// //         {
// //             printf("ft_itoa(%d) = \"%s\"\n", test_cases[i], result);
// //             free(result);
// //         }
// //         else
// //         {
// //             printf("ft_itoa(%d) = (null)\n", test_cases[i]);
// //         }
// //     }
// //     return 0;
// // }
//! --

static char	*create_str(long src_n, long n_len)
{
	char	*tmp;

	if (src_n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmp = malloc((n_len + 1) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	if (src_n == 0)
		tmp[0] = '0';
	tmp[n_len] = '\0';
	return (tmp);
}
//! test *create_str function
// // #include <stdio.h>
// // int main() {
// //     long length = 10; // Example length
// //     char *result = create_str(length);

// //     if (result == NULL) {
// //         printf("Memory allocation failed.\n");
// //         return 1; // Exit with error code
// //     }

// //     printf("New string initialized with: '%s'\n", result);
// //     free(result);
// //     return 0;
// // }
//! ---

// We count how many numbers we have in n (necesary for malloc)
static int	count_n(long n)
{
	long count;

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
//! ---