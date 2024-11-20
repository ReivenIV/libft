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

- [x] libft.h
- [x] makefile 

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

- [x] [ft_substr](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_substr)
- [x] [ft_strjoin](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_strjoin)
- [x] [ft_strtrim](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_strtrim)
- [x] [ft_split](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_split)
- [x] [ft_itoa](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_itoa)
- [x] [ft_strmapi](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_strmapi)
- [ ] [ft_striteri](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_striteri)
- [ ] [ft_putchar_fd](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_putchar_fd)
- [ ] [ft_putstr_fd](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_putstr_fd)
- [ ] [ft_putendl_fd](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_putendl_fd)
- [ ] [ft_putnbr_fd](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_putnbr_fd)


In this second part, you must develop a set of functions that are either not in the libc or are part of it but in a different form. Some of the following functions can be useful for writing the functions of Part 1.

---

# ft_substr

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




-------

# ft_strjoin

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

# ft_strtrim

- **Prototype**: `char *ft_strtrim(char const *s1, char const *set);`
- **Parameters**:
  - `s1`: The string to be trimmed.
  - `set`: The reference set of characters to trim.
- **Return value**: The trimmed string, or `NULL` if the allocation fails.
- **External functions**: `malloc`
- **Description**: Allocates (with `malloc(3)`) and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string.

# ft_split

- **Prototype**: `char **ft_split(char const *s, char c);`
- **Parameters**:
  - `s`: The string to be split.
  - `c`: The delimiter character.
- **Return value**: The array of new strings resulting from the split, or `NULL` if the allocation fails.
- **External functions**: `malloc`, `free`
- **Description**: Allocates (with `malloc(3)`) and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. The array ends with a `NULL` pointer.

# ft_itoa

- **Prototype**: `char *ft_itoa(int n);`
- **Parameters**:
  - `n`: The integer to convert.
- **Return value**: The string representing the integer, or `NULL` if the allocation fails.
- **External functions**: `malloc`
- **Description**: Allocates (with `malloc(3)`) and returns a string representing the integer received as an argument. Negative numbers are handled.

---

# ft_strmapi

- **Prototype**: `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
- **Parameters**:
  - `s`: The string on which to iterate.
  - `f`: The function to apply to each character.
- **Return value**: The string created from the successive applications of `f`, or `NULL` if the allocation fails.
- **External functions**: `malloc`
- **Description**: Applies the function `f` to each character of the string `s`, passing its index as the first argument and the character itself as the second. A new string is created (using `malloc(3)`) to collect the results.

# ft_striteri

- **Prototype**: `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
- **Parameters**:
  - `s`: The string on which to iterate.
  - `f`: The function to apply to each character.
- **Return value**: None
- **External functions**: None
- **Description**: Applies the function `f` on each character of the string passed as an argument, passing its index as the first argument. Each character is passed by address to `f` to be modified if necessary.

# ft_putchar_fd

- **Prototype**: `void ft_putchar_fd(char c, int fd);`
- **Parameters**:
  - `c`: The character to output.
  - `fd`: The file descriptor on which to write.
- **Return value**: None
- **External functions**: `write`
- **Description**: Outputs the character `c` to the given file descriptor.

---

# ft_putstr_fd

- **Prototype**: `void ft_putstr_fd(char *s, int fd);`
- **Parameters**:
  - `s`: The string to output.
  - `fd`: The file descriptor on which to write.
- **Return value**: None
- **External functions**: `write`
- **Description**: Outputs the string `s` to the given file descriptor.

# ft_putendl_fd

- **Prototype**: `void ft_putendl_fd(char *s, int fd);`
- **Parameters**:
  - `s`: The string to output.
  - `fd`: The file descriptor on which to write.
- **Return value**: None
- **External functions**: `write`
- **Description**: Outputs the string `s` to the given file descriptor, followed by a newline.

# ft_putnbr_fd

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

