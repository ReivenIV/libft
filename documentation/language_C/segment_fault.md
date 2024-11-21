# segmentation fault

A **segmentation fault** (commonly referred to as a **segfault**) is a specific type of error that occurs in C (and other low-level programming languages) when a program attempts to access memory it is not allowed to access. This can happen for a variety of reasons, but it typically involves improper use of pointers or memory management.

Here’s a detailed breakdown of what causes a segfault and how to handle it:

### Causes of a Segfault
1. **Accessing Invalid Memory Locations**
   - Dereferencing a NULL pointer:
     ```c
     int *ptr = NULL;
     *ptr = 10; // Causes a segfault
     ```
   - Accessing memory beyond allocated bounds:
     ```c
     int arr[5];
     arr[10] = 42; // Out-of-bounds access, may cause a segfault
     ```

2. **Using Uninitialized Pointers**
   - Using a pointer that has not been initialized to point to valid memory:
     ```c
     int *ptr;
     *ptr = 5; // Undefined behavior and potential segfault
     ```

3. **Double Free**
   - Freeing memory that has already been deallocated:
     ```c
     int *ptr = malloc(sizeof(int));
     free(ptr);
     free(ptr); // Causes a segfault
     ```

4. **Stack Overflow**
   - Occurs when a program uses more stack space than available, often caused by deep or infinite recursion:
     ```c
     void recurse() {
         recurse(); // Infinite recursion
     }
     recurse(); // Stack overflow
     ```

5. **Accessing Freed Memory (Dangling Pointer)**
   - Trying to access memory after it has been freed:
     ```c
     int *ptr = malloc(sizeof(int));
     free(ptr);
     *ptr = 10; // Causes a segfault
     ```

6. **Writing to Read-Only Memory**
   - Attempting to modify a string literal:
     ```c
     char *str = "hello";
     str[0] = 'H'; // Segfault
     ```

### Why Segfaults Happen
In C, memory is explicitly managed, and the language does not provide safeguards against invalid memory access. Unlike higher-level languages, which may throw exceptions for such errors, C relies on the programmer to handle memory correctly.

When the program tries to access restricted or unmapped memory, the operating system intervenes and terminates the program with a segmentation fault.

### Debugging Segfaults
- **Enable Debugging Tools:**
  Use `gdb` (GNU Debugger) to pinpoint the source of the segfault.
  ```bash
  gdb ./program
  run
  ```
  When a segfault occurs, use `backtrace` to see where it happened:
  ```bash
  bt
  ```

- **Sanitize Memory Usage:**
  Use tools like Valgrind to detect invalid memory accesses.
  ```bash
  valgrind ./program
  ```

- **Check Compiler Warnings:**
  Compile with warnings enabled to catch potential issues:
  ```bash
  gcc -Wall -Wextra -o program program.c
  ```

- **Use Defensive Programming:**
  Validate pointers and array indices before accessing memory:
  ```c
  if (ptr != NULL) {
      *ptr = 10;
  }
  ```

### Prevention Strategies
1. Always initialize pointers.
2. Use bounds checking for arrays.
3. Avoid using dangling pointers by setting them to `NULL` after `free`.
4. Use tools like AddressSanitizer (`-fsanitize=address`) for runtime checks.
5. Allocate sufficient memory for dynamic structures.

Understanding and avoiding segmentation faults is a crucial skill for effective C programming, as they are common sources of bugs and program crashes.