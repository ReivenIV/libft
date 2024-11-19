
# ft_split
## Detailed C Code Explanation with Comments

ft_split is designed to split a string into an array of strings based on a specified character delimiter.

## Helper Functions

### `is_charset`
This function checks if a given character `c` matches the specified `charset`.

```c
int is_charset(char c, char charset) {
    // Return 1 if the character matches the charset, otherwise 0
    return (charset == c) ? 1 : 0;
}
```

### `count_words`
Counts the number of words in `src` that are separated by `charset` (only one character).

```c
int count_words(const char *src, char charset) {
    size_t i = 0;
    size_t count = 0;
    
    // Iterate over the entire string
    while (src[i] != '\0') {
        // Skip the delimiter characters
        while (src[i] != '\0' && is_charset(src[i], charset))
            i++;
        // Check if we're at the start of a word
        if (src[i] != '\0') {
            count++; // Increment word count
            // Skip to the end of the word
            while (src[i] != '\0' && !is_charset(src[i], charset))
                i++;
        }
    }
    return count; // Return the total number of words
}
```

### `ft_strndup`
Duplicates a portion of the string `src` from index `start` to `end`.

```c
char *ft_strndup(const char *src, size_t start, size_t end) {
    size_t i = 0;
    // Allocate memory for new string with extra space for null terminator
    char *dest = malloc((end - start + 2) * sizeof(char));
    if (dest == NULL)
        return NULL; // Return NULL if memory allocation fails
    
    // Copy characters from src to dest
    while (i < (end - start + 1)) {
        dest[i] = src[i + start];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the new string
    return dest;
}
```

## Core Function

### `splitter`
Splits the source string into an array of strings based on the delimiter.

```c
int splitter(char **dest, const char *src, char charset) {
    size_t i = 0, j = 0, start, end;
    
    // Iterate through the src string
    while (src[i] != '\0') {
        // Skip delimiter characters
        while (src[i] != '\0' && is_charset(src[i], charset))
            i++;
        // Check if start of a new word
        if (src[i] != '\0') {
            start = i;
            // Find end of the word
            while (src[i] != '\0' && !is_charset(src[i], charset))
                i++;
            end = i - 1;
            // Duplicate the word and save to dest array
            dest[j++] = ft_strndup(src, start, end);
        }
    }
    dest[j] = NULL; // Null-terminate the array of words
    return j; // Return the number of words
}
```

### `ft_split`
Main function to set up the environment and call other functions to perform the split.

```c
char **ft_split(const char *src, char charset) {
    char **dest;
    // Count the number of words to determine the size of the dest array
    int src_count_words = count_words(src, charset);
    // Allocate memory for the array of pointers to the words
    dest = malloc((src_count_words + 1) * sizeof(char *));
    if (dest == NULL)
        return NULL; // Return NULL if memory allocation fails
    
    if (src_count_words == 0) {
        dest[0] = NULL; // Handle empty result case
        return dest;
    }
    // Use splitter to fill dest array with words from src
    splitter(dest, src, charset);
    return dest; // Return the array of words
}
```

## Example Usage

```c
#include <stdio.h>

int main() {
    char **result = ft_split("hello#world", '#');
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }
    /*
        expect output : 
        result = [
            "hello",
            "world"
            '\0' // will add an extra null terminator sub-string to say "its the end of the array"
        ]
    */
    // Remember to free memory here
    return 0;

}
```