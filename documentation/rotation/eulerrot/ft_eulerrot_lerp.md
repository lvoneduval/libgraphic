# ft_eulerrot_lerp
Performs a linear interpolation (lerp) between two sets of Euler angles, providing a smooth transition from one rotation to another based on the interpolation factor `t`.

### Parameters
- `t_eulerrot a`: The starting set of Euler angles.
- `t_eulerrot b`: The ending set of Euler angles.
- `float t`: The interpolation factor, ranging from 0.0 (fully at `a`) to 1.0 (fully at `b`).

### Function Details
This function computes the interpolated Euler angles by blending the rotations:
- **Interpolation Formula**: For each component (x, y, z), the function calculates `a.component + t * (b.component - a.component)`. This formula ensures a direct path from start to end rotation in Euler space, which may not always represent the shortest rotation path due to the complexities of 3D rotations.

### Returns
- `t_eulerrot`: The interpolated Euler angles at the factor `t`. This set of angles represents a combination of the input angles weighted by `t`.

### Example Usage
***c
t_eulerrot start = {0, 0, 0}; // Starting with no rotation
t_eulerrot end = {M_PI, 0, M_PI}; // Ending at 180 degrees rotation on X and Z axes
float t = 0.5; // Midway interpolation
t_eulerrot midRotation = ft_eulerrot_lerp(start, end, t);
// midRotation will be {M_PI/2, 0, M_PI/2}
***

### Notes:
- Linear interpolation of Euler angles might introduce non-intuitive behaviors in certain cases, especially near the poles of the rotation sphere, due to Euler angles' susceptibility to gimbal lock.
- It is generally more robust to perform interpolation in quaternion space when dealing with rotations, especially over larger angles or for animations.

## Related Documentation
- [t_eulerrot](./t_eulerrot.md) - Detailed documentation on the Euler angles structure used in this function.
- [rotation-doc](../rotation-doc.md) - Overview of different types of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)
