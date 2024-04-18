# ft_vector3_add
Adds two 3D vectors component-wise, resulting in a new vector that represents the vector sum of the inputs. This operation is fundamental in vector calculus, often used in physics for adding forces or in computer graphics for combining translations.

### Parameters
- `t_vector3 v1`: The first vector operand.
- `t_vector3 v2`: The second vector operand.

### Function Details
This function calculates the sum of two vectors `v1` and `v2` by adding their corresponding components:
- **X Component**: `v1.x + v2.x`
- **Y Component**: `v1.y + v2.y`
- **Z Component**: `v1.z + v2.z`

### Returns
- `t_vector3`: The resulting vector from the addition, having components `(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z)`.

### Example Usage
```c
t_vector3 vectorA = {1.0, 2.0, 3.0};
t_vector3 vectorB = {4.0, 5.0, 6.0};
t_vector3 resultVector = ft_vector3_add(vectorA, vectorB);
// resultVector will have {5.0, 7.0, 9.0}
```

### Notes:
- **Usage in Simulations**: Commonly used in simulations and animations where vectors represent directions or forces, and their cumulative effects need to be calculated.
- **Associative and Commutative**: Vector addition is both associative and commutative, properties that can be utilized to optimize calculations involving multiple vector additions.

## Related Documentation
- [t_vector3](./t_vector3.md) - Provides details on the 3D vector structure and its operations.
- [vector-md](../vector-doc.md) - Provides details vectors structures.

### Return to the home page of the documentation
[Home](../../home.md)
