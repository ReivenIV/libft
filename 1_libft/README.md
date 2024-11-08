# Libft
**Your very first own library**

## Summary:
This project is about coding a C library.

**Version:** 16.1

---

# Chapter II: Common Instructions

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

# Chapter III: Mandatory Part

**Program name:** `libft.a`  
**Turn in files:** `Makefile`, `libft.h`, `ft_*.c`  
**Makefile rules:** `NAME`, `all`, `clean`, `fclean`, `re`  
**Description:** Write your own library: a collection of functions that will be a useful tool for your cursus.

## III.1 Technical Considerations
- Declaring global variables is forbidden.
- If you need helper functions to split a more complex function, define them as static functions.
- Place all your files at the root of your repository.
- Every `.c` file must compile with the flags `-Wall -Wextra -Werror`.
- Use the command `ar` to create your library.

## III.2 Part 1 - Libc Functions
You must redo a set of functions from the libc with the same prototypes and behaviors. Examples:

- [x] isalpha
- [x] isdigit
- [x] isalnum
- [x] isascii
- [x] isprint
- [x] strlen
- [x] memset
- [ ] bzero
- [ ] memcpy
- [ ] memmove
- [ ] strlcpy
- [ ] strlcat
- [x] toupper
- [x] tolower
- [ ] strchr
- [ ] strrchr
- [ ] strncmp
- [ ] memchr
- [ ] memcmp
- [ ] strnstr
- [ ] atoi

Use `malloc()` for:
- [ ] ft_calloc 
- [ ] ft_strdup

---

## III.3 Part 2 - Additional Functions
Implement additional useful functions. Examples:

- **ft_substr**  
  **Prototype:** `char *ft_substr(char const *s, unsigned int start, size_t len);`

- **ft_strjoin**  
  **Prototype:** `char *ft_strjoin(char const *s1, char const *s2);`

- **ft_split**  
  **Prototype:** `char **ft_split(char const *s, char c);`

---

# Chapter IV: Bonus Part

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

- **ft_lstnew**
- **ft_lstadd_front**
- **ft_lstsize**
- **ft_lstlast**
- **ft_lstadd_back**
- **ft_lstdelone**
- **ft_lstclear**
- **ft_lstiter**
- **ft_lstmap**

---