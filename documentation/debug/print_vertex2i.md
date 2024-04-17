# print_vertex2i
Prints the coordinates of a 2D integer vertex to the standard output, formatted with specified precision. This utility is particularly useful for debugging purposes, allowing developers to quickly inspect the values of vertex coordinates in computational geometry or graphics programming.

### Parameters
- `t_vertex2i v`: The 2D vertex with integer coordinates to print.

### Function Details
This function outputs the x and y coordinates of a 2D vertex using the global constant `FLOAT_PRECISION` to determine the number of decimal places displayed. It formats the output to enhance readability and consistency in debugging logs.

### Example Usage
```c
t_vertex2i point = {120, 340};
print_vertex2i(point);
```

### Output Format
The vertex is printed in a curly-braced, space-separated format:
- **Precision**: The number of decimals is controlled by `FLOAT_PRECISION`.

### Notes:
- **Precision Control**: The function uses the `FLOAT_PRECISION` constant to format numerical output, which can be adjusted as needed to match the detail level required for specific debugging or presentation needs.
- **Integer Precision**: Despite `FLOAT_PRECISION` being used for formatting, coordinates are integer values; the precision setting is more about consistent visual presentation rather than numerical accuracy.
- **Use Case**: Useful in applications where vertex positions are critical, such as in rendering calculations, collision detection, or mesh construction diagnostics.

## Related Documentation
- [debug-doc](./debug-doc.md)
- [t_vertex2i](../vertex/vertex2i/t_vertex2i.md)

### Return to the home page of the documentation
[Home](../home.md)
