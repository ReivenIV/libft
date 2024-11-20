# `ft_substr`

### Overview
The `ft_substr` function is designed to extract a substring from a given source string `src`, starting at a specific index (`start`) and extending for a specified length (`len`). If the operation is not feasible (e.g., the source string is `NULL` or the start index is out of bounds), the function handles these cases gracefully.


```c
#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	size_t	i;
	size_t	src_len;
	char	*str;

	if (src == NULL)
		return (NULL);
	src_len = ft_strlen(src);
	// Handle the case where `start` is beyond the end of `src`
	// If `start` is greater than or equal to `src_len`,
	// there's no valid substring
	// to extract, so we return an empty string.
	if (start >= src_len)
		return (ft_strdup(""));
	// Adjust `len` if it exceeds the available characters in `src`
	// If `start + len` goes beyond the end of `src`, 
	// adjust `len` to fit within bounds.
	if (start + len > src_len)
		// handles `len`
		len = src_len - start;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && src[start + i] != '\0')
	{
		str[i] = src[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
```

---

### Function Prototype
```c
char *ft_substr(char const *src, unsigned int start, size_t len);
```

#### Parameters
1. **`src`**: The source string from which the substring is extracted.
2. **`start`**: The index in `src` where the substring begins.
3. **`len`**: The maximum length of the substring to extract.

#### Return Value
- A dynamically allocated string containing the substring.
- Returns `NULL` if memory allocation fails or if the input string is `NULL`.

---

### Implementation Details

#### 1. Input Validation
```c
if (src == NULL)
    return (NULL);
```
The function first checks if the input string is `NULL`. If true, it returns `NULL`.

---

#### 2. Handle Out-of-Bounds `start`
```c
if (start >= src_len)
    return (ft_strdup(""));
```
If the `start` index is beyond the length of `src`, no substring can be extracted, and an empty string is returned. This prevents potential buffer overflows.

---

#### 3. Adjust `len` for Boundaries
```c
if (start + len > src_len)
    len = src_len - start;
```
This ensures the substring length does not exceed the remaining characters in `src` after the `start` index.

---

#### 4. Memory Allocation
```c
str = malloc((len + 1) * sizeof(char));
if (str == NULL)
    return (NULL);
```
A buffer of size `len + 1` (to account for the null terminator) is dynamically allocated to store the resulting substring. If allocation fails, `NULL` is returned.

---

#### 5. Extract Substring
```c
while (i < len && src[start + i] != '\0')
{
    str[i] = src[start + i];
    i++;
}
str[i] = '\0';
```
The characters from `src[start]` to `src[start + len - 1]` are copied into the newly allocated string. The loop halts early if the end of `src` is reached.

---

### Use Cases
1. **Valid Substring Extraction**: Extracts a valid substring when `start` and `len` are within bounds.
2. **Start Beyond Bounds**: Returns an empty string if `start` is too large.
3. **Memory Safety**: Ensures no out-of-bounds memory access by dynamically adjusting `len`.

---

### Notes
- **Memory Management**: The caller is responsible for freeing the returned string to avoid memory leaks.
- **Error Handling**: Properly handles edge cases like empty strings, large `start` indices, or insufficient memory.
