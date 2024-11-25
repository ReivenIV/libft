# `ft_striteri` 

## **Summary**
- The `ft_striteri` function is designed to iterate over a string and apply a user-defined function to each character.
- The use of `&src[i]` ensures that the user-defined function `f` can directly modify the characters in the original string.
- This is a versatile approach for string manipulation tasks in C.

---

## **Purpose of the Function**
The `ft_striteri` function applies a user-defined function `f` to each character in a string `src`. The function passes the index of the character (`i`) and a pointer to the character (`&src[i]`) to `f`. This allows `f` to modify the characters of the string in-place.

---

## **Code Walkthrough**
### Full Code
```c
void	ft_striteri(char *src, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!src || !f) // Validate that input string and function are not NULL
		return;

	i = 0; // Initialize loop counter
	while (src[i] != '\0') // Iterate until the end of the string
	{
		f(i, &src[i]); // Apply the function `f` to the character at index `i`
		i++;
	}
}
```
### Line-by-Line Explanation
1. **`void	ft_striteri(char *src, void (*f)(unsigned int, char*))`**
   - This is the function signature.
   - `src` is a pointer to the string on which the function will operate.
   - `f` is a pointer to a user-defined function that takes:
     - `unsigned int`: The index of the character in the string.
     - `char*`: A pointer to the character, allowing `f` to modify it.

2. **`if (!src || !f)`**
   - Validates that the input string `src` and the function `f` are not NULL.
   - If either is NULL, the function returns immediately without performing any operation.

4. **`while (src[i] != '\0')`**
   - Iterates over the string until it reaches the null-terminator (`'\0'`), marking the end of the string.

5. **`f(i, &src[i]);`**
   - Calls the function `f` with:
     - `i`: The current character's index in the string.
     - `&src[i]`: The address of the current character in the string.

---

## **Why `&src[i]` is Necessary**

- **Explanation**:  
   The function `f` expects a pointer (`char*`) to the character. The `&` operator retrieves the address of `src[i]`, which is needed because without it, you would be passing the character **value** (`char`) instead of its **address**.

- **Why it matters**:
   - Passing the address (`&src[i]`) allows the function `f` to directly modify the character in the original string, as it operates on the memory where the character is stored.
   - If you passed `src[i]` (the value) without `&`, the function would only receive a copy of the character, and changes made to it wouldn't affect the original string.

---

## **Example Use Case**

### Example Function: Modify Each Character
Here’s an example function `modify_char` to demonstrate the use of `ft_striteri`:

```c
#include <stdio.h>

void modify_char(unsigned int i, char *c)
{
	*c = *c + i; // Increment the character's value by its index
}

int main()
{
	char str[] = "abcd";

	ft_striteri(str, modify_char);

	printf("%s\n", str); // Output: "aceg"
	return 0;
}
```

### Explanation of Example
1. The `modify_char` function takes:
   - `i`: The index of the character.
   - `c`: A pointer to the character.
2. The function modifies the character in the string by adding its index (`*c = *c + i`).
3. The output string reflects the changes directly applied to `str`.

