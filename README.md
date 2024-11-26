Welcome to my 42.pp student repository 2024!

This repository includes my solutions for the C programming exercises as part of the **42 student** (after piscine) program. Here, you'll find various tasks and projects I completed to deepen my understanding of low-level programming.

## About the 42 student
The **42 student** is an intensive prigram by [42 Network](https://42.fr/en/homepage) designed to teach programming, working in group, time managment, problem-solving, and algorithmic thinking with a focus on C programming.

## Contributing
This repository is for educational purposes, and I am open to suggestions or alternative solutions for any exercise. Feel free to fork the repository, submit pull requests, or open issues with comments or contact me. 

# Libft

## Summary:
This project is about coding a C library.


# Mandatory Part

- [x] libft.h
- [x] makefile 

**Program name:** `libft.a`  
**Turn in files:** `Makefile`, `libft.h`, `ft_*.c`  
**Makefile rules:** `NAME`, `all`, `clean`, `fclean`, `re`  

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
- [x] [ft_striteri](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_striteri)
- [x] [ft_putchar_fd](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_putchar_fd)
- [x] [ft_putstr_fd](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_putstr_fd)
- [x] [ft_putendl_fd](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_putendl_fd)
- [x] [ft_putnbr_fd](https://github.com/ReivenIV/42_student.pp/tree/main/1_libft#ft_putnbr_fd)


In this second part, you must develop a set of functions that are either not in the libc or are part of it but in a different form. Some of the following functions can be useful for writing the functions of Part 1.

---

<details>
<!--! pliable content -->

<summary>Functions Breakdown</summary>

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

---

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
  - `n`: The integer to output.i
  - `fd`: The file descriptor on which to write.
- **Return value**: None
- **External functions**: `write`
- **Description**: Outputs the integer `n` to the given file descriptor.

<!--! end pliable content -->
</details>

---

# Bonus Part

If you completed the mandatory part, attempt the bonus part for additional points.
Implement the following list manipulation functions:

- [x] **ft_lstnew**
- [x] **ft_lstadd_front**
- [x] **ft_lstsize**
- [x] **ft_lstlast**
- [x] **ft_lstadd_back**
- [x] **ft_lstdelone**
- [x] **ft_lstclear**
- [x] **ft_lstiter**
- [x] **ft_lstmap**

### Use the following structure to represent a node in your list:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

<details>
<!--! pliable content -->

<summary>Functions Breakdown</summary>
#### `ft_lstnew`
```c
Prototype: t_list *ft_lstnew(void *content);
```
- **Parameters**:
  - `content`: The content to create the node with.
- **Return value**: The new node.
- **External functions**: `malloc`.
- **Description**: 
  Allocates (with `malloc(3)`) and returns a new node.  
  The member variable `content` is initialized with the value of the parameter `content`.  
  The variable `next` is initialized to `NULL`.

---

#### `ft_lstadd_front`
```c
Prototype: void ft_lstadd_front(t_list **lst, t_list *new);
```
- **Parameters**:
  - `lst`: The address of a pointer to the first link of a list.
  - `new`: The address of a pointer to the node to be added to the list.
- **Return value**: None.
- **External functions**: None.
- **Description**: 
  Adds the node `new` at the beginning of the list.

---

#### `ft_lstsize`
```c
Prototype: int ft_lstsize(t_list *lst);
```
- **Parameters**:
  - `lst`: The beginning of the list.
- **Return value**: The length of the list.
- **External functions**: None.
- **Description**: 
  Counts the number of nodes in a list.

---

#### `ft_lstlast`
```c
Prototype: t_list *ft_lstlast(t_list *lst);
```
- **Parameters**:
  - `lst`: The beginning of the list.
- **Return value**: Last node of the list.
- **External functions**: None.
- **Description**: 
  Returns the last node of the list.

---

#### `ft_lstadd_back`
```c
Prototype: void ft_lstadd_back(t_list **lst, t_list *new);
```
- **Parameters**:
  - `lst`: The address of a pointer to the first link of a list.
  - `new`: The address of a pointer to the node to be added to the list.
- **Return value**: None.
- **External functions**: None.
- **Description**: 
  Adds the node `new` at the end of the list.

---

#### `ft_lstdelone`
```c
Prototype: void ft_lstdelone(t_list *lst, void (*del)(void *));
```
- **Parameters**:
  - `lst`: The node to free.
  - `del`: The address of the function used to delete the content.
- **Return value**: None.
- **External functions**: `free`.
- **Description**: 
  Takes a node as a parameter and frees the memory of the node’s content using the function `del` provided as a parameter.  
  The memory of `next` must not be freed.

---

#### `ft_lstclear`
```c
Prototype: void ft_lstclear(t_list **lst, void (*del)(void *));
```
- **Parameters**:
  - `lst`: The address of a pointer to a node.
  - `del`: The address of the function used to delete the content of the node.
- **Return value**: None.
- **External functions**: `free`.
- **Description**: 
  Deletes and frees the given node and every successor of that node, using the function `del` and `free(3)`.  
  Finally, the pointer to the list must be set to `NULL`.

---

#### `ft_lstiter`
```c
Prototype: void ft_lstiter(t_list *lst, void (*f)(void *));
```
- **Parameters**:
  - `lst`: The address of a pointer to a node.
  - `f`: The address of the function used to iterate on the list.
- **Return value**: None.
- **External functions**: None.
- **Description**: 
  Iterates the list `lst` and applies the function `f` on the content of each node.

---

#### `ft_lstmap`
```c
Prototype: t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```
- **Parameters**:
  - `lst`: The address of a pointer to a node.
  - `f`: The address of the function used to iterate on the list.
  - `del`: The address of the function used to delete the content of a node if needed.
- **Return value**: The new list. Returns `NULL` if the allocation fails.
- **External functions**: `malloc`, `free`.
- **Description**: 
  Iterates the list `lst` and applies the function `f` on the content of each node.  
  Creates a new list resulting from the successive applications of the function `f`.  
  The `del` function is used to delete the content of a node if needed.

<!--! end pliable content -->
</details>
