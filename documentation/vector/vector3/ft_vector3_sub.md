# ft_vector3_sub
Calculates the subtraction of one 3D vector from another, resulting in a new vector that represents the vector difference of the inputs. This operation is fundamental in vector calculus, often used in physics for calculating displacements or in computer graphics for defining relative positions.

### Parameters
- `t_vector3 v1`: The vector from which to subtract.
- `t_vector3 v2`: The vector to subtract.

### Function Details
This function computes the difference between two vectors `v1` and `v2` by subtracting their corresponding components:
- **X Component**: `v1.x - v2.x`
- **Y Component**: `v1.y - v2.y`
- **Z Component**: `v1.z - v2.z`

### Returns
- `t_vector3`: The resulting vector from the subtraction, having components `(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z)`.

### Example Usage
```c
t_vector3 positionA = {5.0, 10.0, 15.0};
t_vector3 positionB = {2.0, 3.0, 5.0};
t_vector3 displacement = ft_vector3_sub(positionA, positionB);
// displacement will be {3.0, 7.0, 10.0}, representing the vector from positionB to positionA
```

### Notes:
- **Vector Direction**: The resulting vector points from `v2` to `v1`, which can be visualized as the directional displacement from the second point to the first.
- **Applications**: Subtraction is crucial in scenarios such as physics simulations where the relative motion between objects needs to be calculated, or in pathfinding algorithms to determine the direction and distance to a target.

## Related Documentation
- [t_vector3](./t_vector3.md) - Provides details on the 2D vector structure and its operations.
- [vector-md](../vector-doc.md) - Provides details on the 2D vector structure and its operations.

### Return to the home page of the documentation
[Home](../../home.md)
