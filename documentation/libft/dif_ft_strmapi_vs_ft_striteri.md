# Difference Between `ft_strmapi` and `ft_striteri`

| Feature                  | `ft_strmapi`                                       | `ft_striteri`                                      |
|--------------------------|---------------------------------------------------|---------------------------------------------------|
| **Return Type**          | Returns a **new string** with modified characters. | Modifies the **original string** in-place.        |
| **Function Behavior**    | Applies the function and collects results in a new string. | Applies the function directly to the input string.|
| **Function Parameters**  | The function receives `index` and `char` value.    | The function receives `index` and a `char*` (pointer to character). |
| **Memory Management**    | Allocates memory for the new string.              | No memory allocation required.                   |

### In Short:
- **`ft_strmapi`**: will create a new **copy** of src and the apply a function into each caracter.
- **`ft_striteri`**: Modifies each caracter of the strin **in the allocated memory place**.