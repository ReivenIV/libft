# Libft

## Summary:
This project is about coding a C library.

---

# Common Instructions

- Your project must be written in C.
- Your project must be written in accordance with the Norm.
- Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc.).
- All heap-allocated memory space must be properly freed when necessary.
- If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags `-Wall`, `-Wextra`, and `-Werror`.
- Your Makefile must at least contain the rules `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- To turn in bonuses to your project, you must include a `bonus` rule in your Makefile.
- If your project allows you to use your libft, you must copy its sources and its associated Makefile in a `libft` folder.
- Submit your work to your assigned git repository. Only the work in the git repository will be graded.

---

# Mandatory Part

**Program name:** `libft.a`  
**Turn in files:** `Makefile`, `libft.h`, `ft_*.c`  
**Makefile rules:** `NAME`, `all`, `clean`, `fclean`, `re`  

## Technical Considerations
- Declaring global variables is forbidden.
- If you need helper functions to split a more complex function, define them as static functions.
- Place all your files at the root of your repository.
- Every `.c` file must compile with the flags `-Wall -Wextra -Werror`.
- Use the command `ar` to create your library.

## Libft Functions
You must redo a set of functions from the libc with the same prototypes and behaviors. Examples:

- [x] isalpha
- [x] isdigit
- [x] isalnum
- [x] isascii
- [x] isprint
- [x] strlen
- [x] memset
- [x] bzero
- [x] memcpy
- [x] memmove
- [x] strlcpy
- [x] strlcat
- [x] toupper
- [x] tolower
- [x] strchr
- [x] strrchr
- [x] strncmp
- [x] memchr
- [x] memcmp
- [x] strnstr
- [x] atoi

Use `malloc()` for:
- [x] ft_calloc
- [x] ft_strdup

---

## III.3 Part 2 - Additional Functions

<a name="test_ft_substr">ft_substr</a>
- [ ] **ft_strjoin**
- [ ] **ft_strtrim**
- [ ] **ft_split**
- [ ] **ft_itoa**
- [ ] **ft_strmapi**
- [ ] **ft_striteri**
- [ ] **ft_putchar_fd**
- [ ] **ft_putstr_fd**
- [ ] **ft_putendl_fd**
- [ ] **ft_putnbr_fd**


In this second part, you must develop a set of functions that are either not in the libc or are part of it but in a different form. Some of the following functions can be useful for writing the functions of Part 1.

---

### [ft_substr](test_ft_substr)

- **Prototype**: `char *ft_substr(char const *s, unsigned int start, size_t len);`
- **Turn in files**: -
- **Parameters**:
  - `s`: The string from which to create the substring.
  - `start`: The start index of the substring in the string `s`.
  - `len`: The maximum length of the substring.
- **Return value**: The substring, or `NULL` if the allocation fails.
- **External functions**: `malloc`
- **Description**: Allocates (with `malloc(3)`) and returns a substring from the string `s`. The substring begins at index `start` and is of maximum size `len`.

The function `ft_substr` is a classic C programming exercise that teaches how to dynamically create a substring from a given string. Here’s how it works and what you can expect from it with some examples.

### Function Breakdown

The function prototype is:
```c
char *ft_substr(char const *s, unsigned int start, size_t len);
```

- **Parameters**:
  - `s`: The original string from which the substring is created.
  - `start`: The index in the original string `s` where the substring should begin.
  - `len`: The maximum number of characters to include in the substring.

- **Return Value**: The function returns a pointer to the newly allocated substring. If the allocation fails, it returns `NULL`.

- **Behavior**:
  1. **Memory Allocation**: It dynamically allocates enough memory for the substring, which means you’ll need to free this memory when you’re done using the substring.
  2. **Copying Characters**: The function copies up to `len` characters starting from `start` in the original string `s`.
  3. **Handling Edge Cases**: If `start` is beyond the end of the string, or if `len` is too large, the function should handle these gracefully, often returning an empty string if `start` is out of bounds.

### Example Scenarios

#### Example 1
```c
char *str = "Hello, World!";
char *result = ft_substr(str, 7, 5); // start at index 7, length 5
```

- **Expected Output**: `"World"`
- **Explanation**: Starting at index 7 in `"Hello, World!"`, the substring includes up to 5 characters (`"World"`).

#### Example 2
```c
char *str = "Hello, World!";
char *result = ft_substr(str, 7, 20); // start at index 7, length 20
```

- **Expected Output**: `"World!"`
- **Explanation**: Although `len` is 20, the substring will stop at the end of the original string because there aren’t enough characters left.

#### Example 3
```c
char *str = "Hello, World!";
char *result = ft_substr(str, 50, 5); // start at index 50, length 5
```

- **Expected Output**: `""` (an empty string)
- **Explanation**: Since `start` is beyond the end of the string, the function should return an empty substring.

### Edge Cases
1. **Empty String Input**: If `s` is an empty string, `ft_substr` should return an empty string regardless of `start` or `len`.
2. **NULL Input**: If `s` is `NULL`, the function should return `NULL` to indicate an error.

This function is an excellent way to practice dynamic memory management, string manipulation, and edge case handling in C.

---

### Function: `ft_strjoin`

- **Prototype**: `char *ft_strjoin(char const *s1, char const *s2);`
- **Turn in files**: -
- **Parameters**:
  - `s1`: The prefix string.
  - `s2`: The suffix string.
- **Return value**: The new string, or `NULL` if the allocation fails.
- **External functions**: `malloc`
- **Description**: Allocates (with `malloc(3)`) and returns a new string, which is the result of the concatenation of `s1` and `s2`.

Here’s the markdown version of the additional functions described in the PDFs:

---

### Function: `ft_strtrim`

- **Prototype**: `char *ft_strtrim(char const *s1, char const *set);`
- **Parameters**:
  - `s1`: The string to be trimmed.
  - `set`: The reference set of characters to trim.
- **Return value**: The trimmed string, or `NULL` if the allocation fails.
- **External functions**: `malloc`
- **Description**: Allocates (with `malloc(3)`) and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string.

### Function: `ft_split`

- **Prototype**: `char **ft_split(char const *s, char c);`
- **Parameters**:
  - `s`: The string to be split.
  - `c`: The delimiter character.
- **Return value**: The array of new strings resulting from the split, or `NULL` if the allocation fails.
- **External functions**: `malloc`, `free`
- **Description**: Allocates (with `malloc(3)`) and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. The array ends with a `NULL` pointer.

### Function: `ft_itoa`

- **Prototype**: `char *ft_itoa(int n);`
- **Parameters**:
  - `n`: The integer to convert.
- **Return value**: The string representing the integer, or `NULL` if the allocation fails.
- **External functions**: `malloc`
- **Description**: Allocates (with `malloc(3)`) and returns a string representing the integer received as an argument. Negative numbers are handled.

---

### Function: `ft_strmapi`

- **Prototype**: `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
- **Parameters**:
  - `s`: The string on which to iterate.
  - `f`: The function to apply to each character.
- **Return value**: The string created from the successive applications of `f`, or `NULL` if the allocation fails.
- **External functions**: `malloc`
- **Description**: Applies the function `f` to each character of the string `s`, passing its index as the first argument and the character itself as the second. A new string is created (using `malloc(3)`) to collect the results.

### Function: `ft_striteri`

- **Prototype**: `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
- **Parameters**:
  - `s`: The string on which to iterate.
  - `f`: The function to apply to each character.
- **Return value**: None
- **External functions**: None
- **Description**: Applies the function `f` on each character of the string passed as an argument, passing its index as the first argument. Each character is passed by address to `f` to be modified if necessary.

### Function: `ft_putchar_fd`

- **Prototype**: `void ft_putchar_fd(char c, int fd);`
- **Parameters**:
  - `c`: The character to output.
  - `fd`: The file descriptor on which to write.
- **Return value**: None
- **External functions**: `write`
- **Description**: Outputs the character `c` to the given file descriptor.

---

### Function: `ft_putstr_fd`

- **Prototype**: `void ft_putstr_fd(char *s, int fd);`
- **Parameters**:
  - `s`: The string to output.
  - `fd`: The file descriptor on which to write.
- **Return value**: None
- **External functions**: `write`
- **Description**: Outputs the string `s` to the given file descriptor.

### Function: `ft_putendl_fd`

- **Prototype**: `void ft_putendl_fd(char *s, int fd);`
- **Parameters**:
  - `s`: The string to output.
  - `fd`: The file descriptor on which to write.
- **Return value**: None
- **External functions**: `write`
- **Description**: Outputs the string `s` to the given file descriptor, followed by a newline.

### Function: `ft_putnbr_fd`

- **Prototype**: `void ft_putnbr_fd(int n, int fd);`
- **Parameters**:
  - `n`: The integer to output.
  - `fd`: The file descriptor on which to write.
- **Return value**: None
- **External functions**: `write`
- **Description**: Outputs the integer `n` to the given file descriptor.

---

# Bonus Part

If you completed the mandatory part, attempt the bonus part for additional points.

Use the following structure to represent a node in your list:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

Implement the following list manipulation functions:

- [ ] **ft_lstnew**
- [ ] **ft_lstadd_front**
- [ ] **ft_lstsize**
- [ ] **ft_lstlast**
- [ ] **ft_lstadd_back**
- [ ] **ft_lstdelone**
- [ ] **ft_lstclear**
- [ ] **ft_lstiter**
- [ ] **ft_lstmap**

