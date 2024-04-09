#ifndef AAROT_H
#define AAROT_H

typedef struct s_aarot {
    float x;   // X component of the axis
    float y;   // Y component of the axis
    float z;   // Z component of the axis
    float angle; // Rotation angle in radians
} t_aarot;

t_aarot ft_aarot_new(float x, float y, float z, float angle)

#endif
