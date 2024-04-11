<p align="left">
  <img src="https://cdn-icons-png.flaticon.com/512/6295/6295417.png" width="100" alt="project-logo">
</p>
<p align="left">
    <h1 align="left">Libgraphic</h1>
</p>
<p align="left">
    <em><code>► INSERT-TEXT-HERE</code></em>
</p>
<p align="left">
	<img src="https://img.shields.io/github/license/eli64s/readme-ai?style=flat-square&logo=opensourceinitiative&logoColor=white&color=0080ff" alt="license">
	<img src="https://img.shields.io/github/last-commit/lvoneduval/libgraphic?style=for-the-badges=github&color=blue" alt="last-commit">
	<img src="https://img.shields.io/github/languages/top/lvoneduval/libgraphic?style=for-the-badge&logo=C" alt="repo-top-language">
	<img src="https://img.shields.io/github/languages/count/eli64s/readme-ai?style=flat-square&color=0080ff" alt="repo-language-count">
<p>
<p align="left">
		<em>Developed with the software and tools below.</em>
</p>
<p align="left">
	<img src="https://img.shields.io/badge/Vim-grey?style=for-the-badge&logo=Vim" alt="Vim">
	<img src="https://img.shields.io/badge/mlx%2042-%23Edeef1?style=for-the-badge&logo=42&logoColor=black" alt="42 MLX">
   	<img src="https://img.shields.io/badge/VS%20Code-%232b9eed?style=for-the-badge&logo=visualstudiocode&logoColor=%230d67a7" alt="VSCode">
	<img src="https://img.shields.io/badge/OpenAI-412991.svg?style=flat-square&logo=OpenAI&logoColor=white" alt="OpenAI">
</p>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>

- [📍 Overview](#-overview)
- [🧩 Features](#-features)
- [🗂️ Repository Structure](#️-repository-structure)
- [🚀 Getting Started](#-getting-started)
  - [⚙️ Installation](#️-installation)
  - [🤖 Usage](#-usage)
  - [🧪 Tests](#-tests)
- [🛠 Project Roadmap](#-project-roadmap)
- [🤝 Contributing](#-contributing)
- [📄 License](#-license)
- [👏 Acknowledgments](#-acknowledgments)
</details>
<hr>

## 📍 Overview

<code>► INSERT-TEXT-HERE</code>

---

## 🧩 Features

<code>► INSERT-TEXT-HERE</code>

---

## 🗂️ Repository Structure

```sh
└── README.txt
└── camera/
    ├── includes/
    │   └── camera.h
    └── sources/
        ├── ft_cam_init.c
        ├── ft_cam_lookat.c
        ├── ft_cam_new.c
        └── ft_view_mat4.c
└── color/
    ├── colorhsl/
    │   ├── includes/
    │   │   └── colorhsl.h
    │   └── sources/
    │       ├── ft_hsl_add.c
    │       ├── ft_hsl_from_rgba.c
    │       ├── ft_hsl_new.c
    │       ├── ft_hsl_default.c
    │       ├── ft_hsl_lerp.c
    │       └── ft_hsl_sub.c
    ├── colorrgb/
    │   ├── includes/
    │   │   └── colorrgb.h
    │   └── sources/
    │       ├── ft_rgb_default.c
    │       ├── ft_rgb_from_i.c
    │       ├── ft_rgb_lerp.c
    │       ├── ft_rgb_new.c
    │       └── ft_rgb_to_i.c
    ├── colorrgba/
    │   ├── includes/
    │   │   └── colorrgba.h
    │   └── sources/
    │       ├── ft_icolor_lerp.c
    │       ├── ft_rgba_from_hsl.c
    │       ├── ft_rgba_new.c
    │       ├── ft_rgba_add.c
    │       ├── ft_rgba_from_i.c
    │       ├── ft_rgba_sub.c
    │       └── ft_rgba_default.c
    └── includes/
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
    │       ├── ft_mat4_from_aarot.c
    │       ├── ft_mat4_postmul_quat.c
    │       ├── ft_mat4_from_eulerrot.c
    │       ├── ft_mat4_postmul_vector3.c
    │       ├── ft_mat4_from_quat.c
    │       ├── ft_mat4_premul_norm_quat.c
    │       ├── ft_mat4_from_sphrot.c
    │       ├── ft_mat4_premul_quat.c
    │       ├── ft_mat4_identity.c
    │       ├── ft_mat4_premul_vector3.c
    │       ├── ft_mat4_mul.c
    │       ├── ft_mat4_scale_from_vector3.c
    │       ├── ft_mat4_null.c
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
    │       ├── ft_aarot_from_eulerrot.c
    │       ├── ft_aarot_from_quat.c
    │       ├── ft_aarot_new.c
    │       ├── ft_aarot_from_mat4.c
    │       ├── ft_aarot_from_sphrot.c
    │       └── ft_aarot_normalize.c
    ├── eulerRot/
    │   ├── includes/
    │   │   └── eulerrot.h
    │   └── sources/
    │       ├── ft_eulerrot_add.c
    │       ├── ft_eulerrot_from_mat4.c
    │       ├── ft_eulerrot_lerp.c
    │       ├── ft_eulerrot_equal.c
    │       ├── ft_eulerrot_from_quat.c
    │       ├── ft_eulerrot_new.c
    │       ├── ft_eulerrot_from_aarot.c
    │       ├── ft_eulerrot_from_sphrot.c
    │       └── ft_eulerrot_sub.c
    ├── includes/
    │   └── rotation.h
    ├── quaternion/
    │   ├── includes/
    │   │   └── quaternion.h
    │   └── sources/
    │       ├── ft_quat_add.c
    │       ├── ft_quat_from_mat4.c
    │       ├── ft_quat_new.c
    │       ├── ft_quat_add_n.c
    │       ├── ft_quat_from_spheric_rot.c
    │       ├── ft_quat_normalize.c
    │       ├── ft_quat_crossprod.c
    │       ├── ft_quat_from_vector3.c
    │       ├── ft_quat_opp.c
    │       ├── ft_quat_dotnormalize.c
    │       ├── ft_quat_inv.c
    │       ├── ft_quat_scale.c
    │       ├── ft_quat_dotprod.c
    │       ├── ft_quat_lerp.c
    │       ├── ft_quat_slerp.c
    │       ├── ft_quat_equal.c
    │       ├── ft_quat_magn.c
    │       ├── ft_quat_sub.c
    │       ├── ft_quat_from_aarot.c
    │       ├── ft_quat_mul.c
    │       ├── ft_quat_sub_n.c
    │       └── ft_quat_from_eulerrot.c
    ├── sphericRot/
    │   ├── includes/
    │   │   └── sphrot.h
    │   └── sources/
    │       ├── ft_sphrot_from_aarot.c
    │       ├── ft_sphrot_from_mat4.c
    │       ├── ft_sphrot_from_eulerrot.c
    │       └── ft_sphrot_from_quat.c
    └── vector/
        ├── includes/
        │   └── vector.h
        ├── vector2/
        │   ├── includes/
        │   │   └── vector2.h
        │   └── sources/
        │       ├── ft_vector2_add.c
        │       ├── ft_vector2_magn.c
        │       ├── ft_vector2_opp.c
        │       ├── ft_vector2_det.c
        │       ├── ft_vector2_new.c
        │       ├── ft_vector2_scale.c
        │       ├── ft_vector2_dotprod.c
        │       ├── ft_vector2_normalize.c
        │       ├── ft_vector2_sub.c
        │       └── ft_vector2_equal.c
        └── vector3/
            ├── includes/
            │   └── vector3.h
            └── sources/
                ├── ft_vector3_add.c
                ├── ft_vector3_from_quat.c
                ├── ft_vector3_null.c
                ├── ft_vector3_crossprod.c
                ├── ft_vector3_magn.c
                ├── ft_vector3_opp.c
                ├── ft_vector3_dotprod.c
                ├── ft_vector3_new.c
                ├── ft_vector3_scale.c
                ├── ft_vector3_equal.c
                └── ft_vector3_normalize.c
└── vertex/
    ├── includes/
    │   └── vertex.h
    ├── vertex2f/
    │   ├── includes/
    │   │   └── vertex2f.h
    │   └── sources/
    │       ├── ft_vertex2f_add.c
    │       ├── ft_vertex2f_mul.c
    │       ├── ft_vertex2f_null.c
    │       └── ft_vertex2f_sub.c
    ├── vertex2i/
    │   ├── includes/
    │   │   └── vertex2i.h
    │   └── sources/
    │       ├── ft_vertex2i_add.c
    │       ├── ft_vertex2i_mul.c
    │       ├── ft_vertex2i_null.c
    │       └── ft_vertex2i_sub.c
    ├── vertex3f/
    │   ├── includes/
    │   │   └── vertex3f.h
    │   └── sources/
    │       ├── ft_vertex3f_add.c
    │       ├── ft_vertex3f_mul.c
    │       ├── ft_vertex3f_opp.c
    │       ├── ft_vertex3f_div.c
    │       ├── ft_vertex3f_new.c
    │       ├── ft_vertex3f_sub.c
    │       └── ft_vertex3f_from_vertex3i.c
    └── vertex3i/
        ├── includes/
        │   └── vertex3i.h
        └── sources/
            ├── ft_vertex3i_add.c
            ├── ft_vertex3i_mul.c
            ├── ft_vertex3i_null.c
            ├── ft_vertex3i_sub.c
            ├── ft_vertex3i_div.c
            └── ft_vertex3i_new.c
```

---

## 📦 Modules

<details closed><summary>.</summary>

| File                                                                             | Summary                         |
| ---                                                                              | ---                             |
| [Dockerfile](https://github.com/eli64s/readme-ai/blob/master/Dockerfile)         | <code>► INSERT-TEXT-HERE</code> |
| [Makefile](https://github.com/eli64s/readme-ai/blob/master/Makefile)             | <code>► INSERT-TEXT-HERE</code> |
| [pyproject.toml](https://github.com/eli64s/readme-ai/blob/master/pyproject.toml) | <code>► INSERT-TEXT-HERE</code> |
| [poetry.lock](https://github.com/eli64s/readme-ai/blob/master/poetry.lock)       | <code>► INSERT-TEXT-HERE</code> |
| [noxfile.py](https://github.com/eli64s/readme-ai/blob/master/noxfile.py)         | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>setup</summary>

| File                                                                                       | Summary                         |
| ---                                                                                        | ---                             |
| [setup.sh](https://github.com/eli64s/readme-ai/blob/master/setup/setup.sh)                 | <code>► INSERT-TEXT-HERE</code> |
| [requirements.txt](https://github.com/eli64s/readme-ai/blob/master/setup/requirements.txt) | <code>► INSERT-TEXT-HERE</code> |
| [environment.yaml](https://github.com/eli64s/readme-ai/blob/master/setup/environment.yaml) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>scripts</summary>

| File                                                                                 | Summary                         |
| ---                                                                                  | ---                             |
| [run_batch.sh](https://github.com/eli64s/readme-ai/blob/master/scripts/run_batch.sh) | <code>► INSERT-TEXT-HERE</code> |
| [pypi.sh](https://github.com/eli64s/readme-ai/blob/master/scripts/pypi.sh)           | <code>► INSERT-TEXT-HERE</code> |
| [clean.sh](https://github.com/eli64s/readme-ai/blob/master/scripts/clean.sh)         | <code>► INSERT-TEXT-HERE</code> |
| [docker.sh](https://github.com/eli64s/readme-ai/blob/master/scripts/docker.sh)       | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>.github</summary>

| File                                                                                               | Summary                         |
| ---                                                                                                | ---                             |
| [release-drafter.yml](https://github.com/eli64s/readme-ai/blob/master/.github/release-drafter.yml) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>.github.workflows</summary>

| File                                                                                                           | Summary                         |
| ---                                                                                                            | ---                             |
| [coverage.yml](https://github.com/eli64s/readme-ai/blob/master/.github/workflows/coverage.yml)                 | <code>► INSERT-TEXT-HERE</code> |
| [release-pipeline.yml](https://github.com/eli64s/readme-ai/blob/master/.github/workflows/release-pipeline.yml) | <code>► INSERT-TEXT-HERE</code> |
| [release-drafter.yml](https://github.com/eli64s/readme-ai/blob/master/.github/workflows/release-drafter.yml)   | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai</summary>

| File                                                                                      | Summary                         |
| ---                                                                                       | ---                             |
| [_agent.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/_agent.py)           | <code>► INSERT-TEXT-HERE</code> |
| [_exceptions.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/_exceptions.py) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.parsers</summary>

| File                                                                                      | Summary                         |
| ---                                                                                       | ---                             |
| [factory.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/factory.py) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.parsers.configuration</summary>

| File                                                                                                          | Summary                         |
| ---                                                                                                           | ---                             |
| [ansible.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/configuration/ansible.py)       | <code>► INSERT-TEXT-HERE</code> |
| [properties.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/configuration/properties.py) | <code>► INSERT-TEXT-HERE</code> |
| [apache.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/configuration/apache.py)         | <code>► INSERT-TEXT-HERE</code> |
| [docker.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/configuration/docker.py)         | <code>► INSERT-TEXT-HERE</code> |
| [nginx.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/configuration/nginx.py)           | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.parsers.language</summary>

| File                                                                                             | Summary                         |
| ---                                                                                              | ---                             |
| [cpp.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/language/cpp.py)       | <code>► INSERT-TEXT-HERE</code> |
| [swift.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/language/swift.py)   | <code>► INSERT-TEXT-HERE</code> |
| [python.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/language/python.py) | <code>► INSERT-TEXT-HERE</code> |
| [go.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/language/go.py)         | <code>► INSERT-TEXT-HERE</code> |
| [rust.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/language/rust.py)     | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.parsers.cicd</summary>

| File                                                                                               | Summary                         |
| ---                                                                                                | ---                             |
| [bitbucket.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/cicd/bitbucket.py) | <code>► INSERT-TEXT-HERE</code> |
| [travis.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/cicd/travis.py)       | <code>► INSERT-TEXT-HERE</code> |
| [gitlab.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/cicd/gitlab.py)       | <code>► INSERT-TEXT-HERE</code> |
| [jenkins.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/cicd/jenkins.py)     | <code>► INSERT-TEXT-HERE</code> |
| [github.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/cicd/github.py)       | <code>► INSERT-TEXT-HERE</code> |
| [circleci.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/cicd/circleci.py)   | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.parsers.orchestration</summary>

| File                                                                                                          | Summary                         |
| ---                                                                                                           | ---                             |
| [kubernetes.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/orchestration/kubernetes.py) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.parsers.infrastructure</summary>

| File                                                                                                                   | Summary                         |
| ---                                                                                                                    | ---                             |
| [terraform.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/infrastructure/terraform.py)           | <code>► INSERT-TEXT-HERE</code> |
| [cloudformation.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/infrastructure/cloudformation.py) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.parsers.package</summary>

| File                                                                                                | Summary                         |
| ---                                                                                                 | ---                             |
| [composer.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/package/composer.py) | <code>► INSERT-TEXT-HERE</code> |
| [npm.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/package/npm.py)           | <code>► INSERT-TEXT-HERE</code> |
| [gradle.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/package/gradle.py)     | <code>► INSERT-TEXT-HERE</code> |
| [nuget.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/package/nuget.py)       | <code>► INSERT-TEXT-HERE</code> |
| [yarn.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/package/yarn.py)         | <code>► INSERT-TEXT-HERE</code> |
| [pip.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/package/pip.py)           | <code>► INSERT-TEXT-HERE</code> |
| [maven.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/package/maven.py)       | <code>► INSERT-TEXT-HERE</code> |
| [gem.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/parsers/package/gem.py)           | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.core</summary>

| File                                                                                         | Summary                         |
| ---                                                                                          | ---                             |
| [models.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/core/models.py)         | <code>► INSERT-TEXT-HERE</code> |
| [preprocess.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/core/preprocess.py) | <code>► INSERT-TEXT-HERE</code> |
| [parsers.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/core/parsers.py)       | <code>► INSERT-TEXT-HERE</code> |
| [logger.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/core/logger.py)         | <code>► INSERT-TEXT-HERE</code> |
| [utils.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/core/utils.py)           | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.config</summary>

| File                                                                                           | Summary                         |
| ---                                                                                            | ---                             |
| [validators.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/config/validators.py) | <code>► INSERT-TEXT-HERE</code> |
| [settings.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/config/settings.py)     | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.config.settings</summary>

| File                                                                                                      | Summary                         |
| ---                                                                                                       | ---                             |
| [prompts.toml](https://github.com/eli64s/readme-ai/blob/master/readmeai/config/settings/prompts.toml)     | <code>► INSERT-TEXT-HERE</code> |
| [parsers.toml](https://github.com/eli64s/readme-ai/blob/master/readmeai/config/settings/parsers.toml)     | <code>► INSERT-TEXT-HERE</code> |
| [blacklist.toml](https://github.com/eli64s/readme-ai/blob/master/readmeai/config/settings/blacklist.toml) | <code>► INSERT-TEXT-HERE</code> |
| [languages.toml](https://github.com/eli64s/readme-ai/blob/master/readmeai/config/settings/languages.toml) | <code>► INSERT-TEXT-HERE</code> |
| [utils.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/config/settings/utils.py)             | <code>► INSERT-TEXT-HERE</code> |
| [config.toml](https://github.com/eli64s/readme-ai/blob/master/readmeai/config/settings/config.toml)       | <code>► INSERT-TEXT-HERE</code> |
| [markdown.toml](https://github.com/eli64s/readme-ai/blob/master/readmeai/config/settings/markdown.toml)   | <code>► INSERT-TEXT-HERE</code> |
| [commands.toml](https://github.com/eli64s/readme-ai/blob/master/readmeai/config/settings/commands.toml)   | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.utils</summary>

| File                                                                                                    | Summary                         |
| ---                                                                                                     | ---                             |
| [file_handler.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/utils/file_handler.py)       | <code>► INSERT-TEXT-HERE</code> |
| [text_cleaner.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/utils/text_cleaner.py)       | <code>► INSERT-TEXT-HERE</code> |
| [resource_loader.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/utils/resource_loader.py) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.models</summary>

| File                                                                                     | Summary                         |
| ---                                                                                      | ---                             |
| [offline.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/models/offline.py) | <code>► INSERT-TEXT-HERE</code> |
| [vertex.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/models/vertex.py)   | <code>► INSERT-TEXT-HERE</code> |
| [tokens.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/models/tokens.py)   | <code>► INSERT-TEXT-HERE</code> |
| [factory.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/models/factory.py) | <code>► INSERT-TEXT-HERE</code> |
| [prompts.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/models/prompts.py) | <code>► INSERT-TEXT-HERE</code> |
| [openai.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/models/openai.py)   | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.cli</summary>

| File                                                                                  | Summary                         |
| ---                                                                                   | ---                             |
| [options.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/cli/options.py) | <code>► INSERT-TEXT-HERE</code> |
| [main.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/cli/main.py)       | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.generators</summary>

| File                                                                                               | Summary                         |
| ---                                                                                                | ---                             |
| [tree.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/generators/tree.py)             | <code>► INSERT-TEXT-HERE</code> |
| [builder.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/generators/builder.py)       | <code>► INSERT-TEXT-HERE</code> |
| [utils.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/generators/utils.py)           | <code>► INSERT-TEXT-HERE</code> |
| [badges.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/generators/badges.py)         | <code>► INSERT-TEXT-HERE</code> |
| [tables.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/generators/tables.py)         | <code>► INSERT-TEXT-HERE</code> |
| [quickstart.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/generators/quickstart.py) | <code>► INSERT-TEXT-HERE</code> |

</details>

<details closed><summary>readmeai.services</summary>

| File                                                                                         | Summary                         |
| ---                                                                                          | ---                             |
| [git.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/services/git.py)           | <code>► INSERT-TEXT-HERE</code> |
| [metadata.py](https://github.com/eli64s/readme-ai/blob/master/readmeai/services/metadata.py) | <code>► INSERT-TEXT-HERE</code> |

</details>

---

## 🚀 Getting Started

**System Requirements:**

* **Python**: `version x.y.z`

### ⚙️ Installation

<h4>From <code>source</code></h4>

> 1. Clone the readme-ai repository:
>
> ```console
> $ git clone https://github.com/eli64s/readme-ai
> ```
>
> 2. Change to the project directory:
> ```console
> $ cd readme-ai
> ```
>
> 3. Install the dependencies:
> ```console
> $ pip install -r requirements.txt
> ```

### 🤖 Usage

<h4>From <code>source</code></h4>

> Run readme-ai using the command below:
> ```console
> $ python main.py
> ```

### 🧪 Tests

> Run the test suite using the command below:
> ```console
> $ pytest
> ```

---

## 🛠 Project Roadmap

- [X] `► INSERT-TASK-1`
- [ ] `► INSERT-TASK-2`
- [ ] `► ...`

---

## 🤝 Contributing

Contributions are welcome! Here are several ways you can contribute:

- **[Report Issues](https://github.com/eli64s/readme-ai/issues)**: Submit bugs found or log feature requests for the `readme-ai` project.
- **[Submit Pull Requests](https://github.com/eli64s/readme-ai/blob/main/CONTRIBUTING.md)**: Review open PRs, and submit your own PRs.
- **[Join the Discussions](https://github.com/eli64s/readme-ai/discussions)**: Share your insights, provide feedback, or ask questions.

<details closed>
<summary>Contributing Guidelines</summary>

1. **Fork the Repository**: Start by forking the project repository to your github account.
2. **Clone Locally**: Clone the forked repository to your local machine using a git client.
   ```sh
   git clone https://github.com/eli64s/readme-ai
   ```
3. **Create a New Branch**: Always work on a new branch, giving it a descriptive name.
   ```sh
   git checkout -b new-feature-x
   ```
4. **Make Your Changes**: Develop and test your changes locally.
5. **Commit Your Changes**: Commit with a clear message describing your updates.
   ```sh
   git commit -m 'Implemented new feature x.'
   ```
6. **Push to github**: Push the changes to your forked repository.
   ```sh
   git push origin new-feature-x
   ```
7. **Submit a Pull Request**: Create a PR against the original project repository. Clearly describe the changes and their motivations.
8. **Review**: Once your PR is reviewed and approved, it will be merged into the main branch. Congratulations on your contribution!
</details>

<details closed>
<summary>Contributor Graph</summary>
<br>
<p align="center">
   <a href="https://github.com{/eli64s/readme-ai/}graphs/contributors">
      <img src="https://contrib.rocks/image?repo=eli64s/readme-ai">
   </a>
</p>
</details>

---

## 📄 License

This project is protected under the [SELECT-A-LICENSE](https://choosealicense.com/licenses) License. For more details, refer to the [LICENSE](https://choosealicense.com/licenses/) file.

---

## 👏 Acknowledgments

- List any resources, contributors, inspiration, etc. here.

[**Return**](#-overview)

---
