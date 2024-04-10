#ifndef LIBGRAPHIC_MACROS_H
# define LIBGRAPHIC_MACROS_H

# ifndef M_PI
#  define M_PI 3.14159265358979323846f
# endif
# ifndef M_PI_2
#  define M_PI_2 1.57079632679489661923f
# endif
# ifndef M_PI_4
#  define M_PI_4 0.785398163397448309616f
# endif
# ifndef M_1_PI
#  define M_1_PI 0.318309886183790671538f
# endif
# ifndef M_2_PI
#  define M_2_PI 0.636619772367581343076f
# endif
# ifndef M_2_SQRTPI
#  define M_2_SQRTPI 1.12837916709551257390f
# endif

# define TO_RADIAN(deg) (((deg) * M_PI) / 180.0f)
# define TO_DEGREE(rad) (((rad) * 180.0f) / M_PI)

#endif
