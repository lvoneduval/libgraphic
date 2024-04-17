# print_matrix4
Prints the elements of a 4x4 matrix to the standard output with a specified label. This function is designed to aid in debugging and visualizing matrix values during development, especially for transformations in 3D graphics.

### Parameters
- `t_matrix4 m`: The matrix to be printed.
- `char *name`: A label for the matrix to provide context in the output.

### Function Details
This function displays the contents of a 4x4 matrix with each element formatted to two decimal places. It organizes the matrix elements in a visually comprehensible form, enhancing readability for debugging and analysis.

### Example Usage
```c
t_matrix4 transformationMatrix = {
    {1.0, 0.0, 0.0, 0.0},
    {0.0, 1.0, 0.0, 0.0},
    {0.0, 0.0, 1.0, 0.0},
    {0.0, 0.0, 0.0, 1.0}
};
print_matrix4(transformationMatrix, "Identity Matrix");
```

### Printed Output Format
The matrix is printed with its name at the top, followed by the matrix elements arranged in a typical 4x4 grid:
- Each row of the matrix is printed on a new line.
- Elements are separated by spaces and enclosed in vertical bars to denote matrix boundaries.

### Notes:
- **Formatting**: Each element is formatted to show up to two decimal places, aligning numbers for clarity.
- **Use Case**: Ideal for checking the results of matrix operations, transformations in 3D space, or simply verifying matrix data during algorithm development.

## Related Documentation
- [debug-doc](./debug-doc.md)
- [t_matrix4](../matrix/matrix4/t_matrix4.md)

### Return to the home page of the documentation
[home](../home.md)