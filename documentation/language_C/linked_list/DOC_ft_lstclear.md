### `ft_lstclear`

**Description**:  
Clears and deallocates a linked list of type `t_list`.

**Parameters**:  
- `t_list **list`: A pointer to the pointer of the first node in the list.
- `void (*del)(void *)`: A function pointer for freeing the content of each node.

**Functionality**:  
1. Iterates through the list.
2. Uses `del` to free the content of each node.
3. Frees the memory of the node itself.
4. Updates the list pointer to `NULL` to prevent dangling references.

**Purpose**:  
To safely clear a linked list, ensuring no memory leaks occur.

**Code Example**:
```c
void	ft_lstclear(t_list **list, void (*del)(void *)) {
	t_list *tmp;

	if (del == NULL || *list == NULL)
		return;

	while (*list != NULL) {
		tmp = (*list)->next;
		del((*list)->content);
		free(*list);
		*list = tmp;
	}
}
```

1. **`tmp = (*list)->next;`**
   - This saves the pointer to the next node in the list. 
   - It ensures you don't lose access to the rest of the list before freeing the current node.

2. **`del((*list)->content);`**
   - This calls the `del` function to clean up or delete the content stored in the current node (e.g., freeing dynamically allocated memory for `content`).

3. **`free(*list);`**
   - This frees the memory allocated for the current node itself, effectively removing the node.

4. **`*list = tmp;`**
   - Updates `*list` to point to the next node (stored earlier in `tmp`).
   - The current node is already freed, so this moves the loop forward to process the next node.

By the time the loop finishes, all nodes have been deleted, and `*list` is set to `NULL`, signaling that the list is now empty. 

**Use Case of ft_lstclear**:  
When managing dynamic memory for linked lists, ensuring proper cleanup is critical. `ft_lstclear` simplifies this process by abstracting the deletion logic.