
# `ft_itoa` Implementation

## Overview
The `ft_itoa` function converts an integer (`int`) into its string representation (`char *`). This implementation is modular, memory-safe, and capable of handling edge cases, such as the smallest possible integer (`INT_MIN`) and zero.

---

## Functionality

### Main Function: `ft_itoa`
```c
char *ft_itoa(int src_n);
```
- **Purpose**: Converts an integer to a string representation.
- **Parameters**:
  - `src_n` (int): The integer to convert.
- **Return Value**:
  - A dynamically allocated string containing the integer’s string representation.
  - `NULL` if memory allocation fails.

---

### Helper Functions

#### 1. `count_n`
```c
// Counts the number of digits in a number for memory allocation.
static int count_n(long n) {
    long count = 0;

    if (n == 0) 
        return 1; // A single digit for zero.
    
    if (n < 0) {
        count++;  // Include space for the negative sign.
        n = -n;   // Work with the absolute value.
    }

    while (n > 0) {
        n /= 10;   // Remove one digit per iteration.
        count++;
    }
    return count;  // Return the total number of characters needed.
}
```

#### 2. `create_str`
```c
// Allocates memory for the string representation of the number.
static char *create_str(long src_n, long n_len) {
    char *tmp;

    if (src_n == -2147483648) // Special case for INT_MIN.
        return ft_strdup("-2147483648");

    tmp = malloc((n_len + 1) * sizeof(char)); // Allocate memory for string.
    if (tmp == NULL) 
        return NULL; // Return NULL if allocation fails.
    
    if (src_n == 0) 
        tmp[0] = '0'; // Directly assign '0' for the number zero.

    tmp[n_len] = '\0'; // Ensure the string is null-terminated.
    return tmp;
}
```

---

## Core Logic: `ft_itoa`
```c
// Converts an integer into its string representation.
char *ft_itoa(int src_n) {
    long n = src_n;                 // Use long to avoid overflow with INT_MIN.
    long n_len = count_n(n);        // Get the number of characters needed.
    char *res = create_str(n, n_len); // Allocate memory for the result.

    if (res == NULL) 
        return NULL; // Handle memory allocation failure.

    if (n == 0) 
        return res;  // Return directly for zero.

    if (n < 0) {
        n = -n;      // Convert to positive for digit extraction.
        res[0] = '-'; // Add the negative sign at the start.
    }

    long i = n_len - 1; // Start populating from the last character.
    while (n > 0) {
        res[i--] = (n % 10) + '0'; // Extract the last digit and convert to char.
        n /= 10;                   // Remove the last digit.
    }

    return res; // Return the constructed string.
}
```

---

## Test Cases
The implementation has been tested with a variety of inputs to ensure robustness:

```c
#include <stdio.h>

int main() {
    int test_cases[] = {456, -77, 800, 8989, 7410, 0, -2147483648, 2147483647};
    size_t num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (size_t i = 0; i < num_cases; i++) {
        char *result = ft_itoa(test_cases[i]); // Call ft_itoa for each test case.
        if (result) {
            printf("ft_itoa(%d) = \"%s\"\n", test_cases[i], result); // Print result.
            free(result); // Free the allocated memory.
        } else {
            printf("ft_itoa(%d) = (null)\n", test_cases[i]); // Handle NULL cases.
        }
    }
    return 0;
}
```

### Expected Outputs
```text
ft_itoa(456) = "456"
ft_itoa(-77) = "-77"
ft_itoa(800) = "800"
ft_itoa(8989) = "8989"
ft_itoa(7410) = "7410"
ft_itoa(0) = "0"
ft_itoa(-2147483648) = "-2147483648"
ft_itoa(2147483647) = "2147483647"
```

## Conclusion
This implementation of `ft_itoa` is efficient, robust, and well-tested, making it suitable for use in a wide variety of applications.
