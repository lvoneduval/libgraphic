<p align="center">
  <img src="./libgraphic.png" width="100" alt="project-logo">
</p>
<p align="center">
    <h1 align="center">Libgraphic</h1>
</p>
<p align="center">
    <em><code>Personal toolkit for C graphics programming using minilibx</code></em>
</p>
<p align="center">
	<img src="https://img.shields.io/github/last-commit/lvoneduval/libgraphic?style=for-the-badge&color=blue" alt="last-commit">
	<img src="https://img.shields.io/github/languages/top/lvoneduval/libgraphic?style=for-the-badge&logo=C" alt="repo-top-language">
	<img src="https://img.shields.io/github/languages/count/lvoneduval/libgraphic?style=for-the-badge&color=0080ff" alt="repo-language-count">
<p>
<p align="center">
		<em>Developed with the software and tools below.</em>
</p>
<p align="center">
	<img src="https://img.shields.io/badge/Vim-grey?style=for-the-badge&logo=Vim" alt="Vim">
	<img src="https://img.shields.io/badge/mlx%2042-%23Edeef1?style=for-the-badge&logo=42&logoColor=black" alt="42 MLX">
   	<img src="https://img.shields.io/badge/VS%20Code-%232b9eed?style=for-the-badge&logo=visualstudiocode&logoColor=%230d67a7" alt="VSCode">
	<img src="https://img.shields.io/badge/OpenAI-%2377a99c?style=for-the-badge&logo=OpenAI&logoColor=white" alt="OpenAI">
</p>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>

- [📍 Overview](#-overview)
- [🧩 Features](#-features)
- [🗂️ Repository Structure](#️-repository-structure)
- [🚀 Getting Started](#-getting-started)
  - [⚙️ Installation](#️-installation)
  - [Quickstar](#quick-start)
- [🛠 Project Roadmap](#-project-roadmap)
- [📄 License](#-license)
- [👏 Acknowledgments](#-acknowledgments)
</details>
<hr>

## 📍 Overview

Libgraphic is a C library crafted to streamline the development of visually-rich applications using 42's MLX graphics library. It provides a robust abstraction layer for direct pixel drawing, color manipulation, and complex geometric transformations, making interactive graphics development both straightforward and powerful.

---

## 🧩 Features

### Mlx tools 
Libgraphic integrates dedicated utilities for the MLX library, enhancing its native graphical capabilities while simplifying the programming interface. Specific functions are designed to optimize and extend the library's features as detailed.  
See [mlx_tools.h](mlx_tools/includes/mlx_tools.h) for details  

### Advanced Color Management
   Handling colors precisely is crucial for design, simulation, or gaming applications. Libgraphic offers utilities for managing RGB, RGBA, and HSL color spaces, including quick conversions between these formats and tools for adjusting brightness, saturation, and other color properties.  
   See [color.h](color/includes/color.h) for details  

### Vertex and Vector Manipulation
   Efficient vertex and vector management is key for 3D rendering or physical simulations. LibGraphic provides robust functions for handling 2D and 3D vertices in integer and float types, and 2D and 3D float vectors, simplifying everything from shape transformations to dynamics management.   
   See [vertex.h](vertex/includes/vertex.h) or [vector.h](vector/includes/vector.h) for details  

### Rotation Systems and Matrices
   With advanced functions for handling rotations via quaternions, Euler angles, spheric rotations, and axe angles, Libgraphic allows for precise and flexible orientation and transformation management. Support for 4D matrices for 3D space transformations is also included, promising future enhancements.  
   See [rotation.h](rotation/includes/rotation.h) or [matrix.h](matrix/includes/matrix.h) for details 

### Camera Modeling and Graphics Mathematics
   Libgraphic also simplifies the setup of cameras based on the pinhole model, enabling quick and easy adjustments for realistic renderings. The provided graphics math functions further extend the library’s capabilities in image and shape manipulation.  
   See [camera.h](camera/includes/camera.h) for details   

### Debugging and Optimization
   Poor debug functions, still needs a big improvement  
   See [debug.h](debug/includes/debug.h) for details  
Libgraphic is designed to be extensible, high-performing, and user-friendly, suitable for any graphic project you plan to undertake.

---

## 🗂️ Repository Structure
<details>
  <summary>Show repository structure </summary>

```plaintext
└── README.md
└── camera/
    ├── includes/
    │   └── camera.h
    └── sources/
        ├── ft_cam_new.c
        ├── ft_cam_init.c
        ├── ft_cam_lookat.c
        └── ft_view_mat4.c
└── color/
    ├── colorhsl/
    │   ├── includes/
    │   │   └── colorhsl.h
    │   └── sources/
    │       ├── ft_hsl_new.c
    │       ├── ft_hsl_default.c
    │       ├── ft_hsl_from_rgba.c
    │       ├── ft_hsl_add.c
    │       ├── ft_hsl_sub.c
    │       └── ft_hsl_lerp.c
    ├── colorrgb/
    │   ├── includes/
    │   │   └── colorrgb.h
    │   └── sources/
    │       ├── ft_rgb_new.c
    │       ├── ft_rgb_default.c
    │       ├── ft_rgb_from_i.c
    │       ├── ft_rgb_to_i.c
    │       └── ft_rgb_lerp.c
    ├── colorrgba/
    │   ├── includes/
    │   │   └── colorrgba.h
    │   └── sources/
    │       ├── ft_rgba_new.c
    │       ├── ft_rgba_default.c
    │       ├── ft_rgba_from_i.c
    │       ├── ft_rgba_from_hsl.c
    │       ├── ft_rgba_add.c
    │       ├── ft_rgba_sub.c
    │       └── ft_icolor_lerp.c
    └── includes/
	├── colorstruct.h
        └── color.h
└── debug/
    ├── includes/
    │   └── debug.h
    └── sources/
        ├── print_camera.c
        ├── print_matrix.c
        └── print_vector.c
└── graphic_math/
    ├── includes/
    │   └── g_math.h
    └── sources/
        ├── ft_orthoproj_mat4.c
        ├── ft_to_frange.c
        ├── ft_vieport_llc.c
        ├── ft_persproj_mat4.c
        ├── ft_vertex3f_proj.c
        └── ft_vieport_tlc.c
└── matrix/
    ├── includes/
    │	├── matrixstruct.h
    │   └── matrix.h
    ├── matrix2/
    │   ├── includes/
    │   └── sources/
    ├── matrix3/
    │   ├── includes/
    │   └── sources/
    ├── matrix4/
    │   ├── includes/
    │   │   └── matrix4.h
    │   └── sources/
    │       ├── ft_mat4_null.c
    │       ├── ft_mat4_identity.c
    │       ├── ft_mat4_from_aarot.c
    │       ├── ft_mat4_from_eulerrot.c
    │       ├── ft_mat4_from_quat.c
    │       ├── ft_mat4_from_sphrot.c
    │       ├── ft_mat4_mul.c
    │       ├── ft_mat4_premul_quat.c
    │       ├── ft_mat4_premul_norm_quat.c
    │       ├── ft_mat4_premul_vector3.c
    │       ├── ft_mat4_postmul_quat.c
    │       ├── ft_mat4_postmul_vector3.c
    │       ├── ft_mat4_scale_from_vector3.c
    │       └── ft_mat4_translate_from_vector3.c
    └── matrixX/
        ├── includes/
        └── sources/
└── mlx_tools/
    ├── includes/
    │   └── mlx_tools.h
    └── sources/
        ├── fast_line.c
        ├── mlx_bresenham.c
        ├── mlx_end.c
        ├── mlx_init.c
        └── pixel_to_img.c
└── rotation/
    ├── axeAngleRot/
    │   ├── includes/
    │   │   └── aarot.h
    │   └── sources/
    │       ├── ft_aarot_new.c
    │       ├── ft_aarot_from_eulerrot.c
    │       ├── ft_aarot_from_quat.c
    │       ├── ft_aarot_from_mat4.c
    │       ├── ft_aarot_from_sphrot.c
    │       └── ft_aarot_normalize.c
    ├── eulerRot/
    │   ├── includes/
    │   │   └── eulerrot.h
    │   └── sources/
    │       ├── ft_eulerrot_new.c
    │       ├── ft_eulerrot_from_aarot.c
    │       ├── ft_eulerrot_from_quat.c
    │       ├── ft_eulerrot_from_mat4.c
    │       ├── ft_eulerrot_from_sphrot.c
    │       ├── ft_eulerrot_add.c
    │       ├── ft_eulerrot_sub.c
    │       ├── ft_eulerrot_equal.c
    │       └── ft_eulerrot_lerp.c
    ├── quaternion/
    │   ├── includes/
    │   │   └── quaternion.h
    │   └── sources/
    │       ├── ft_quat_new.c
    │       ├── ft_quat_from_aarot.c
    │       ├── ft_quat_from_mat4.c
    │       ├── ft_quat_from_vector3.c
    │       ├── ft_quat_from_sphrot.c
    │       ├── ft_quat_add.c
    │       ├── ft_quat_sub.c
    │       ├── ft_quat_add_n.c
    │       ├── ft_quat_sub_n.c
    │       ├── ft_quat_mul.c
    │       ├── ft_quat_equal.c
    │       ├── ft_quat_opp.c
    │       ├── ft_quat_inv.c
    │       ├── ft_quat_scale.c
    │       ├── ft_quat_normalize.c
    │       ├── ft_quat_magn.c
    │       ├── ft_quat_crossprod.c
    │       ├── ft_quat_dotnormalize.c
    │       ├── ft_quat_dotprod.c
    │       ├── ft_quat_lerp.c
    │       ├── ft_quat_from_eulerrot.c
    │       └── ft_quat_slerp.c
    ├── sphericRot/
    │   ├── includes/
    │   │   └── sphrot.h
    │   └── sources/
    │       ├── ft_sphrot_from_aarot.c
    │       ├── ft_sphrot_from_eulerrot.c
    │       ├── ft_sphrot_from_quat.c
    │       └── ft_sphrot_from_mat4.c
    └─ includes/
       |── rotationstruct.h
       └── rotation.h
└── vector/
    ├── includes/
    │	├── vectorstruct.h
    │   └── vector.h
    ├── vector2/
    │   ├── includes/
    │   │   └── vector2.h
    │   └── sources/
    │       ├── ft_vector2_new.c
    │       ├── ft_vector2_add.c
    │       ├── ft_vector2_sub.c
    │       ├── ft_vector2_equal.c
    │       ├── ft_vector2_opp.c
    │       ├── ft_vector2_scale.c
    │       ├── ft_vector2_magn.c
    │       ├── ft_vector2_normalize.c
    │       ├── ft_vector2_det.c
    │       └── ft_vector2_dotprod.c
    └── vector3/
        ├── includes/
        │   └── vector3.h
        └── sourceGs/
            ├── ft_vector3_new.c
            ├── ft_vector3_null.c
            ├── ft_vector3_from_quat.c
            ├── ft_vector3_add.c
            ├── ft_vector3_sub.c
            ├── ft_vector3_opp.c
            ├── ft_vector3_scale.c
            ├── ft_vector3_equal.c
            ├── ft_vector3_magn.c
            ├── ft_vector3_crossprod.c
            ├── ft_vector3_dotprod.c
            └── ft_vector3_normalize.c
└── vertex/
    ├── includes/
    │	├── vertexstruct.h
    │   └── vertex.h
    ├── vertex2f/
    │   ├── includes/
    │   │   └── vertex2f.h
    │   └── sources/
    │       ├── ft_vertex2f_new.c
    │       ├── ft_vertex2f_null.c
    │       ├── ft_vertex2f_add.c
    │       ├── ft_vertex2f_sub.c
    │       ├── ft_vertex2f_mul.c
    │       ├── ft_vertex2f_div.c
    │       └── ft_vertex2f_opp.c
    ├── vertex2i/
    │   ├── includes/
    │   │   └── vertex2i.h
    │   └── sources/
    │       ├── ft_vertex2i_new.c
    │       ├── ft_vertex2i_null.c
    │       ├── ft_vertex2i_add.c
    │       ├── ft_vertex2i_sub.c
    │       ├── ft_vertex2i_mul.c
    │       ├── ft_vertex2i_div.c
    │       └── ft_vertex2i_opp.c
    ├── vertex3f/
    │   ├── includes/
    │   │   └── vertex3f.h
    │   └── sources/
    │       ├── ft_vertex3f_new.c
    │       ├── ft_vertex3f_null.c
    │       ├── ft_vertex3f_add.c
    │       ├── ft_vertex3f_sub.c
    │       ├── ft_vertex3f_mul.c
    │       ├── ft_vertex3f_div.c
    │       ├── ft_vertex3f_opp.c
    │       └── ft_vertex3f_from_vertex3i.c
    └── vertex3i/
        ├── includes/
        │   └── vertex3i.h
        └── sources/
            ├── ft_vertex3i_new.c
            ├── ft_vertex3i_null.c
            ├── ft_vertex3i_add.c
            ├── ft_vertex3i_sub.c
            ├── ft_vertex3i_mul.c
            ├── ft_vertex3i_div.c
            └── ft_vertex3i_opp.c
```
</details>

---

## 🚀 Getting Started

**System Requirements:**


### ⚙️ Installation

<h4>From <code>source</code></h4>

> 1. Clone the libgraphic repository:
>
> ```console
> $ git clone https://github.com/lvoneduval/libgraphic
> ```
>
> 2. Pull the submodules:
>
> ```console
> $ git clone https://github.com/lvoneduval/libgraphic
> ```
>
> 3. Add the header into your files:
>
> ```c
> #include "<path to libgraphic>/libraphic.h"
> ````
> 

### Quick Start
 Kickstart your journey with our platform by following our straightforward Quick Start Guide. This guide is designed to help you set up and start using our system with practical examples and essential setup instructions.
- **Begin Your Experience:** Follow the steps outlined to quickly integrate and utilize our tools. [View the Quick Start Guide](./documentation/quick_start/quick_start.md).


---

## Complete Documentation Overview

Explore the comprehensive documentation to familiarize yourself with all aspects of our platform. This documentation serves as a central hub to guide you through the features and functionalities of our system.

- **Explore the Full Documentation:** Dive deeper into each component of our platform. [Visit the Documentation Home](./documentation/home.md).

---

## 🛠 Project Roadmap

- [X] `► MAKEFILE`
- [X] `► DEPENDENCIES:`
- [ ] `► DOCUMENTATION:`
- [ ] `► ADD MATRIX` 
- [ ] `► UPDATE DEBUG`

---

## 📄 License

This project is currently not protected under any License.
---

## 👏 Acknowledgments

- Ugo Popée
- Olivier Crouzet for the minilibX
- [OpenGL-Tutoriel Developpez.com](https://jeux.developpez.com/tutoriels/OpenGL-ogldev/)
- [OpenGL-Tutoriel opengl-tutorial.org](https://www.opengl-tutorial.org)

[**Return**](#-overview)
