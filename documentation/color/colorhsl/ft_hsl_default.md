# ft_hsl_default
Returns a default HSL color. This default color is defined by predefined constants and can be used as a standard or fallback color setting in various graphic applications.

#### Returns
- `t_colorhsl`: The default HSL color defined by:
  - Hue: `DEFAULT_HUE_VALUE` degrees
  - Saturation: `DEFAULT_SATURATION_VALUE`%
  - Lightness: `DEFAULT_LIGHTNESS_VALUE`%

#### Example Usage
```c
t_colorhsl defaultColor = ft_hsl_default();
// Use defaultColor where an initial color setting is needed
```

### Constants
The constants used for defining the default HSL color are:
- **DEFAULT_HUE_VALUE**: Typically set to a specific hue value, such as 0 for red.
- **DEFAULT_SATURATION_VALUE**: Typically set to a moderate saturation level, like 50% for balanced color.
- **DEFAULT_LIGHTNESS_VALUE**: Often set at 50%, representing a lightness level that is neither too dark nor too bright.

### Function Details
This function creates and returns an HSL color structure initialized to default values, which are ideal for ensuring consistency in default color settings across various parts of an application.

### Notes:
- **Purpose of Default Values**: These are particularly useful in scenarios where a non-specific, neutral, or baseline color setting is required.
- **Modifications**: Adjust the default constants in the code if a different default color setting is preferred for new graphic elements.

## Related Documentation
- [t_colorhsl](./t_colorhsl.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../home.md)