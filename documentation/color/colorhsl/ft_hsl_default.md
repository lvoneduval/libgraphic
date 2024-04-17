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
The constants used for defining the default HSL color ([see-more](./t_colorhsl.md))

### Function Details
This function creates and returns an HSL color structure initialized to default values, which are ideal for ensuring consistency in default color settings across various parts of an application.


## Related Documentation
- [t_colorhsl](./t_colorhsl.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../home.md)