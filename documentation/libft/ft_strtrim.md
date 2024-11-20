# `ft_strtrim`

The function `ft_strtrim` removes all occurrences of characters in `charset` from the beginning and end of the input string `s1`. It trims the string by skipping over unwanted characters from both ends until it reaches valid content.
exemple 

```c
//  usage exemple 
    char s1[] = "?#Hello, World!#?";
    char set[] = "#?";
    char *res = ft_strtrim(s1_1, set_1); // expected output of res : "Hello, World!"
```


## Code Breakdown

### Helper Function: `is_charset`

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

This function checks if a character `c_to_test` or "caracter to be tested" belongs to the set of characters defined in `charset`. It returns `1` (true) if the character is found, and `0` (false) otherwise.

---

### `ft_strtrim`

```c
char	*ft_strtrim(char const *s1, char const *charset)
{
	int	i;
	int	j;
	int	k;
	char	*str;
	
	if (!charset || charset[0] == '\0')
		return (ft_strdup(s1));
	i = 0;
	k = 0;
	j =  ft_strlen(s1) - 1;	
	// Find coordinates for start (i) and end (j) with is_charset. 
	while (is_charset(s1[i], charset) == 1 && s1[i] != '\0')
		i++;
	while (is_charset(s1[j], charset) == 1 && s1[j] > 0)
		j--;
	if (i > j)
		return (strdup(""));
	// Amount of characters needed for malloc: j - i + 2.
	str = malloc((j - i + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	// Add data to str.
	while (i <= j)
	{
		str[k] = s1[i];
		k++;
		i++;	
	}
	str[k] = '\0';		
	return (str);
}
```

---

### Explanation of Key Sections

1. **`j = ft_strlen(s1) - 1;`**
   - **Why `-1`?**
     - `ft_strlen(s1)` returns the total number of characters in `s1`. However, strings in C are **zero-indexed**, meaning the last valid index of the string is `ft_strlen(s1) - 1`. If you don't subtract `1`, `j` will point to the null terminator (`\0`), causing the logic to fail.

   - **What happens without `-1`?**
     - Without `-1`, the loop `while (is_charset(s1[j], charset) == 1 && s1[j] > 0)` would either skip characters incorrectly or access out-of-bound memory.

2. **Trimming Logic**
   - Start at the first character (`i = 0`) and move forward while `s1[i]` is in `charset`.
   - Start at the last character (`j`) and move backward while `s1[j]` is in `charset`.
   - If all characters are part of `charset` (`i > j`), return an empty string.

3. **Memory Allocation**
   - The new string size is `(j - i + 2)`, where:
     - `j - i + 1` is the number of valid characters.
     - `+1` accounts for the null terminator (`\0`).

4. **Copying Data**
   - Using a `while` loop, the valid portion of `s1` (from `i` to `j`) is copied into the newly allocated memory.

---

### Example Usage

```c
#include <stdio.h>

int main(void)
{
    char *s1 = "  ---Hello World---  ";
    char *charset = " -";
    char *trimmed = ft_strtrim(s1, charset);
    
    printf("Original: '%s'\n", s1);
    printf("Trimmed: '%s'\n", trimmed);
    
    free(trimmed);
    return 0;
}
```

**Output:**

```
Original: '  ---Hello World---  '
Trimmed: 'Hello World'
```

This demonstrates how `ft_strtrim` removes unwanted characters from both ends of the string based on `charset`.