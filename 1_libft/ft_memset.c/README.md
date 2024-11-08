# ft_memset

The `ft_memset` function is a custom implementation of the standard C library function `memset`. It sets the first `size` bytes of the memory area pointed to by `buffer` to the specified value `simbol` (converted to an `unsigned char`). This function is commonly used for initializing or clearing memory.

## Function Prototype

```c
void *ft_memset(void *buffer, int simbol, size_t size);
```

- **`buffer`**: A pointer to the memory area to be set (its an array and we don t know the size nor the type).
- **`simbol`**: The value to fill the memory area with (cast to `unsigned char`).
- **`size`**: The number of bytes to set in the memory area.

## Code Explanation

Here’s a step-by-step breakdown of how the function works:




### 1. Cast the `buffer` Pointer
```c
p = (unsigned char*)buffer;
```
- **What is Casting?**: In C, casting is the process of converting a variable from one data type to another. In this project, we cast `buffer` (a generic `void *` pointer) to `unsigned char *`. This allows us to work with each byte individually, which is essential for setting each byte in the memory block.
- **Why Use Casting Here?**: `void *` is a generic pointer type that can point to any data type, but it can’t be directly dereferenced. By casting `buffer` to `unsigned char *`, we ensure that we can access and modify the memory block byte-by-byte, regardless of the original data type stored there.

### 2. Fill the Memory Area
```c
while(i < size)
{
    p[i] = (unsigned char)simbol;
    i++;
}
```
- **p**: A pointer to `unsigned char` that will be used to manipulate each byte of `buffer`. Casting to `unsigned char` allows the function to work with individual bytes.
- **Loop Condition**: The loop continues as long as `i` is less than `size`.
- **Setting the Byte**: Each byte in the memory area pointed to by `p` is set to the value of `simbol`, cast to `unsigned char`.
- **Increment Counter**: `i` is incremented after each byte is set, moving to the next position in the memory area.

### 3. Return the Original Buffer Pointer
```c
return (buffer);
```
- The function returns the original `buffer` pointer, allowing the caller to capture the pointer if needed or to use the function in chained expressions.
- [Why returning buffer ?](https://github.com/ReivenIV/42_student.pp/blob/main/1_libft/ft_memset.c/why_returning_buffer.md)
## Summary

- **Purpose**: `ft_memset` is used to set a block of memory to a specific value, byte by byte.
- **Returns**: The original `buffer` pointer, following the behavior of `memset`.
- **Type Casting**: Casting is used here to convert the `void *` generic pointer to an `unsigned char *` pointer, allowing for byte-level manipulation. This is essential for directly accessing and modifying each byte in the memory block.
  
This function mimics the standard `memset` behavior, making it versatile for general-purpose memory manipulation in C programs.
