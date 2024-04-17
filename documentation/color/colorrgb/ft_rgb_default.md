# ft_rgb_default
Returns a default RGB color. This default color is defined by predefined constants for the red, green, and blue components and can be used as a standard or fallback color setting in various graphic applications.

#### Returns
- `t_colorrgb`: The default RGB color defined by:
  - Red: `DEFAULT_RED_VALUE`
  - Green: `DEFAULT_GREEN_VALUE`
  - Blue: `DEFAULT_BLUE_VALUE`

#### Example Usage
```c
t_colorrgb defaultColor = ft_rgb_default();
// Use defaultColor where an initial color setting is needed
```

### Constants
The constants used for defining the default RGB color ([see_more](./t_colorrgb.md))

### Function Details
This function creates and returns an RGB color structure initialized to default values, which are ideal for ensuring consistency in default color settings across various parts of an application.

## Related Documentation
- [t_colorhsl](./t_colorrgb.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../home.md)