# ft_lstadd_back

Here is an easy-to-understand, step-by-step explanation of ft_lstadd_back:

```c
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    last = *lst; // Step 1: Initialize 'last' to point to the first element in the list.
    if (lst == NULL || new == NULL) // Step 2: Check if the input list or new node is NULL.
        return; // If any is NULL, exit the function.
    if (*lst == NULL) // Step 3: Check if the list is empty.
    {
        *lst = new; // If it's empty, set 'new' as the first element of the list.
        return; // Then exit the function.
    }
    while (last->next != NULL) // Step 4: Traverse to the last node of the list.
        last = last->next; // Move to the next node.
    last->next = new; // Step 5: Add the 'new' node at the end of the list.
}
```

### Step-by-Step Walkthrough:
1. **What the Code Does**:
   - It adds a new node (`new`) to the end of a singly linked list.

2. **Input Parameters**:
   - `t_list **lst`: A pointer to the pointer of the first node of the list. This allows modifying the list itself.
   - `t_list *new`: A pointer to the node that you want to add to the list.

3. **Checking for Null Inputs**:
   - If `lst` or `new` is `NULL`, the function does nothing (`return` immediately). This avoids undefined behavior when the inputs are invalid.

4. **If the List Is Empty**:
   - If the list pointed to by `*lst` is empty (`*lst == NULL`), make `new` the first node.

5. **Traverse the List**:
   - If the list is not empty, use a pointer (`last`) to move through the list until you reach the last node (`last->next == NULL`).

6. **Attach the New Node**:
   - Set the `next` pointer of the last node to `new`, effectively appending `new` to the end.

### Why Use Double Pointer (`t_list **lst`)?
This is needed to handle cases where the list is empty (`*lst == NULL`). A double pointer allows the function to directly modify the original list pointer so that it points to the new node.

---
# **list vs *list vs list

### JSON Example (Refined)

```json
{
    "list": {
        "node_1": {
            "node_address": "0x10",
            "content": 100,
            "content_address": "0x15",
            "next_node_address": "0x20"
        },
        "node_2": {
            "node_address": "0x20",
            "content": 200,
            "content_address": "0x25",
            "next_node_address": "0x30"
        },
        "node_3": {
            "node_address": "0x30",
            "content": 300,
            "content_address": "0x35",
            "next_node_address": "NULL"
        }
    }
}
```

### Explanation in C Terms

Let’s associate your JSON to pointers in C:

1. **`list`**: A **pointer** that holds the address of the head node (e.g., `node_1`).
   - Value: `list = 0x10` (memory address of `node_1`).
   - In code: `t_list *list = &node_1;`

2. **`*list`**: Dereferencing `list` gives the **head node structure itself**.  
   - Value: `*list = { node_address: 0x10, content: 100, next_node_address: 0x20 }`.
   - In code: You can access properties, e.g., `(*list).content = 100` or `list->content = 100`.

3. **`**list`**: A **pointer to the pointer to the head node**. Useful when modifying the list itself (e.g., changing `list` to point to a new head).  
   - Value: `**list = 0x10`, which still refers to the head node’s address indirectly.
   - In code: `t_list **list = &pointer_to_node1;`

---

### Corrected Node Interpretation (Refined)
Here’s how the values align with your JSON:

| Pointer Reference | Refers to                        | Example Value  |
|--------------------|----------------------------------|----------------|
| **`**list`**      | Address of the pointer `list`.   | Address of `0x10` |
| **`*list`**       | Node structure at `list`.        | `{node_1 details}` |
| **`list`**        | Address of the head node (`node_1`). | `0x10` |

---

### Why It's Useful?

- **`list`**: Keeps track of the start of the list.
- **`*list`**: Lets you access or modify the first node's content or its `next` pointer.
- **`**list`**: Enables altering the pointer `list` itself, such as inserting or removing the head node.

### Example C Code Matching Your JSON
```c
#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct s_list {
    int content;
    struct s_list *next;
} t_list;

int main() {
    // Create nodes
    t_list node1 = {100, NULL};
    t_list node2 = {200, NULL};
    t_list node3 = {300, NULL};

    // Link nodes
    node1.next = &node2;
    node2.next = &node3;

    // Pointer to the head of the list
    t_list *list = &node1;

    // Demonstrating the pointers
    printf("list (address of node1): %p\n", (void *)list);         // list = 0x10
    printf("*list (content of node1): %d\n", list->content);       // *list = 100
    printf("**list (head address indirectly): %p\n", (void *)&list); // **list = Pointer to 0x10

    return 0;
}
```