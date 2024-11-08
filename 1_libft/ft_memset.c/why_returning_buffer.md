# Why We Return `buffer` and Not `p` ?

In the code:
```c
p = (unsigned char *)buffer;
```
we’re setting `p` to point to the same memory location as `buffer`. This means `p` and `buffer` are two pointers to the same memory address. Because of this, modifying the memory that `p` points to also modifies the memory `buffer` points to, as they are just two names for the same address.

The convention in `memset` and functions like it is to return the original pointer that was passed in—here, `buffer`—so that the function’s return value matches the input pointer. Returning `buffer` keeps this convention, making it more intuitive for someone reading the code or using this function, as it mimics the standard `memset` function.

### Why `buffer` and `p` Are Linked

When we do:
```c
p = (unsigned char *)buffer;
```
we’re not copying the data; we’re simply setting `p` to the same address as `buffer`. Now, any changes to `*p` will reflect in `*buffer` as well because they both point to the same memory location. This line doesn’t modify the contents of `buffer`; it simply assigns `p` to the same address.

### When Is `buffer`’s Memory Modified?

The actual modification of the memory occurs in the `while` loop:
```c
while (i < size) {
    p[i] = (unsigned char)simbol;
    i++;
}
```
Each iteration of this loop modifies one byte at the memory address `buffer` points to (using `p[i]`), so the changes are applied directly to the memory location referred to by both `p` and `buffer`.

### Can We Return `p` Instead of `buffer`?

Technically, yes, returning `p` would still give the caller a pointer to the same memory area. However, `p` has been incremented in the `while` loop if we used `pointer arithmetic` (e.g., `*p++`), so returning `p` could result in a pointer that’s offset from the start of `buffer`.

### Summary

- **Returning `buffer`**: Maintains the convention and provides the caller with the original pointer passed to the function.
- **Memory Modification**: Happens in the `while` loop where we modify each byte at the memory location `p` (and thus `buffer`) points to.
- **Why `p` and `buffer` are linked**: `p` and `buffer` are initially set to the same memory address, so changes to `*p` affect `buffer`’s memory directly.

This approach ensures `ft_memset` behaves like `memset`, modifying `buffer` and returning it without altering the original pointer location.