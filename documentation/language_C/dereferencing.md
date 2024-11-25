"Dereferencing" in programming, especially in C, means accessing the value stored at the memory location that a pointer is pointing to. It is essentially "following the pointer" to its target.

### Example:
Let's break it down step by step:

1. **Pointer Variable:** A pointer stores the memory address of another variable.
2. **Dereferencing:** Using the `*` operator, you can access the value at the memory address stored in the pointer.

---

### Example Code

```c
#include <stdio.h>

int main()
{
    int num = 42;        // A variable
    int *ptr = &num;     // A pointer pointing to the address of num

    printf("Value of num: %d\n", num);       // Directly accessing num
    printf("Value of num using pointer: %d\n", *ptr); // Dereferencing ptr

    return 0;
}
```

---

### What Happens in Memory:
- `num` contains the value `42`.
- `ptr` stores the memory address of `num`.
- `*ptr` accesses the value stored at the memory address in `ptr` (which is `42`).

---

### Output
```
Value of num: 42
Value of num using pointer: 42
```

---

### Key Points:
- `&` (Address-of): Gets the memory address of a variable.
- `*` (Dereference): Accesses the value at a memory address.

---

### Visualization
```plaintext
Variable:    num
Value:       42
Address:     0x1234

Pointer:     ptr
Value:       0x1234 (address of num)
Dereference: *ptr -> 42 (value at address 0x1234)
``` 

### Why Use Dereferencing?
1. To access or modify the value stored at the address a pointer is pointing to.
2. It enables dynamic memory access and manipulation, a core feature of C programming.