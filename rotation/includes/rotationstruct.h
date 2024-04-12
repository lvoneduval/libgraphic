#ifndef ROTATIONSTRUCT_H
#define ROTATIONSTRUCT_H

typedef struct s_aarot {
    float x;   // X component of the axis
    float y;   // Y component of the axis
    float z;   // Z component of the axis
    float angle; // Rotation angle in radians
} t_aarot;

typedef struct  s_eulerrot {
    float x;   // Rotation around the X-axis
    float y;  // Rotation around the Y-axis
    float z;    // Rotation around the Z-axis
}               t_eulerrot;

typedef struct s_quat
{
  float x;
  float y;
  float z;
  float w;
}             t_quat; 

typedef struct  s_sphrot {
    float lat;   // Latitude angle in radians (often denoted as theta)
    float lon;  // Longitude angle in radians (often denoted as phi)
    float angle;      // Rotation angle in radians around the axis defined by latitude and longitude
}               t_sphrot;

#endif
