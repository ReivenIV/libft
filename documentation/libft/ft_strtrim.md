
# Understanding `ft_strtrim`

The function `ft_strtrim` is used to remove all leading and trailing characters from a given string (`s1`) that belong to a specified set of characters (`charset`). The cleaned-up string is returned as a new dynamically allocated string.

---

## Summary

The function `ft_strtrim` is a tool to clean up a string by removing unwanted leading and trailing characters defined in `charset`. The logic ensures correctness by carefully handling string indices and edge cases.

---
## How `ft_strtrim` Works

1. **Validation of Input**:
   - If `charset` is `NULL` or empty, the function simply duplicates the string `s1` since there are no characters to trim.

2. **(cordinates) Find Start (`i`) and End (`j`)**:
   - Start (`i`): Index of the first character in `s1` that is *not* in `charset`.
   - End (`j`): Index of the last character in `s1` that is *not* in `charset`.

3. **Memory Allocation**:
   - The size of the trimmed string is determined as `(j - i + 2)`:
     - `+1` for the null terminator.
     - `+1` because `j` is inclusive.

4. **Copy Relevant Characters**:
   - Characters between `i` and `j` (inclusive) are copied into the new string.

5. **Edge Cases**:
   - If all characters in `s1` are part of `charset`, the function returns an empty string.

---

## Code Explanation

### `is_charset`
The helper function checks if a character `c_to_test` belongs to the `charset`.

```c
static int	is_charset(char c_to_test, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c_to_test)
			return (1);
		i++;
	}
	return (0);
}
```
- Returns `1` if the character exists in `charset`, otherwise `0`.

---

### Why `j = ft_strlen(s1) - 1;`

- **`ft_strlen(s1)`** gives the total number of characters in `s1`, but indices in strings start from `0`. 
- Subtracting `1` ensures `j` points to the last valid character in `s1`.
- Without `-1`, `j` would point one position past the last character, causing undefined behavior.

---

### Why `while (i < j + 1)`

- The loop runs from `i` to `j`, inclusive.
- Without `+1`, the loop would stop before copying the last character, resulting in the last character being omitted from the trimmed string.

---

### Full Code with Explanation

```c
#include "libft.h"

static int	is_charset(char c_to_test, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c_to_test)
			return (1); // Character is in charset = TRUE
		i++;
	}
	return (0); // Character is not in charset = FALSE
}

char	*ft_strtrim(char const *s1, char const *charset)
{
	size_t	i; // Start index
	size_t	j; // End index
	size_t	k; // Index for new string
	char	*str; // Trimmed string
	
	if (!charset || charset[0] == '\0') // If charset is empty or falsy
		return (ft_strdup(s1));
	
	i = 0;
	k = 0;
	j = ft_strlen(s1) - 1; // Last index of s1 ()
	
	// Find start index (i)
	while (is_charset(s1[i], charset) == 1 && s1[i] != '\0')
		i++;
	
	// Find end index (j)
	while (is_charset(s1[j], charset) == 1 && s1[j] > 0)
		j--;
	
	// If all characters are in charset, return empty string
	if (i > j)
		return (strdup(""));

	// Allocate memory for trimmed string
	str = malloc((j - i + 2) * sizeof(char)); // +2 for null terminator and inclusiveness
	if (str == NULL)
		return (NULL);
	
	// Copy characters between i and j into str
	while (i < j + 1) // Include the character at index j
	{
		str[k] = s1[i];
		i++;	
		k++;
	}
	str[k] = '\0'; // Null terminate the string
	return (str);
}
```
---


