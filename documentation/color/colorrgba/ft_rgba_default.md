# ft_rgba_default
Returns a default RGBA color, using predefined constant values for the red, green, blue, and alpha components. This function is useful for initializing colors to a known state or for providing a fallback color.

### Parameters
- None

### Returns
- `t_colorrgba`: The default RGBA color with components set to:
  - Red: `DEFAULT_RED_VALUE`
  - Green: `DEFAULT_GREEN_VALUE`
  - Blue: `DEFAULT_BLUE_VALUE`
  - Alpha: `DEFAULT_ALPHA_VALUE`

### Example Usage
```c
t_colorrgba defaultColor = ft_rgba_default();
// defaultColor will have red, green, blue, and alpha values set to predefined defaults
```

### Function Details
This function initializes an RGBA color structure with:
- **Red Component**: Set to `DEFAULT_RED_VALUE`.
- **Green Component**: Set to `DEFAULT_GREEN_VALUE`.
- **Blue Component**: Set to `DEFAULT_BLUE_VALUE`.
- **Alpha Component**: Set to `DEFAULT_ALPHA_VALUE`.

### Constants
The constants used for defining the default RGBA color ([see_more](./t_colorrgba.md)) 

### Notes:
- **Purpose of Default Values**: These values can be adjusted in the code to change the default appearance where this function is used. 
- **Typical Use**: Often used in graphic applications for background colors, placeholders, or when resetting color settings to a standard.

## Related Documentation
- [t_colorrgba](./t_colorrgba.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../../home.md)

