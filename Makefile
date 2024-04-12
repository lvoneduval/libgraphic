# Configuration de la compilation
NAME =				libgraphic
LIB =				$(NAME).a
CC =				gcc
CFLAGS =			-Wall -Werror -Wextra
CPPFLAGS =			$(INCLUDES)
DEPFLAGS =			-MMD

SHELL =				/bin/bash
AR =				ar -rcs
MKDIR =				mkdir -p
RMDIR =				rm -rf
RM =				rm -f
NORM =				norminette

# Paths

SRC_DIR =			sources
INC_DIR =			includes
OBJ_DIR =			.objects

# Directories
CAMERA_DIR			:=	camera
COLOR_RGB_DIR		:=	color/colorrgb
COLOR_RGBA_DIR		:=	color/colorrgba
COLOR_HSL_DIR		:=	color/colorhsl
DEBUG_DIR			:=	debug
G_MATH_DIR			:=	graphic_math
MATRIX4_DIR			:=	matrix/matrix4
MLX_TOOLS_DIR		:=	mlx_tools
ROTATION_AA_DIR	:=	rotation/axeAngleRot
ROTATION_EULER_DIR	:= rotation/eulerRot
ROTATION_QUAT_DIR	:=	rotation/quaternion
ROTATION_SPH_DIR	:= rotation/sphericRot
VECTOR2_DIR			:=	vector/vector2
VECTOR3_DIR			:=	vector/vector3
VERTEX2F_DIR		:=	vertex/vertex2f
VERTEX2I_DIR		:=	vertex/vertex2i
VERTEX3F_DIR		:=	vertex/vertex3f
VERTEX3I_DIR		:=	vertex/vertex3i

#Global Directories

COLOR_DIR			:= color
MATRIX_DIR			:= matrix
ROTATION_DIR		:= rotation
VECTOR_DIR			:= vector
VERTEX_DIR			:= vertex

# Files
CAMERA_FILES			:= \
	ft_cam_init.c		\
	ft_cam_lookat.c		\
	ft_cam_new.c		\
	ft_view_mat4.c

COLOR_RGB_FILES			:= \
	ft_rgb_default.c	\
	ft_rgb_from_i.c		\
	ft_rgb_lerp.c		\
	ft_rgb_new.c		\
	ft_rgb_to_i.c

COLOR_RGBA_FILES		:= \
	ft_icolor_lerp.c	\
	ft_rgba_add.c		\
	ft_rgba_default.c	\
	ft_rgba_from_hsl.c	\
	ft_rgba_from_i.c	\
	ft_rgba_lerp.c		\
	ft_rgba_new.c		\
	ft_rgba_sub.c		\
	ft_rgba_to_i.c

COLOR_HSL_FILES			:= \
	ft_hsl_add.c		\
	ft_hsl_default.c	\
	ft_hsl_from_rgba.c	\
	ft_hsl_lerp.c		\
	ft_hsl_new.c		\
	ft_hsl_sub.c

DEBUG_FILES				:= \
	print_camera.c		\
	print_matrix.c		\
	print_vector.c

G_MATH_FILES			:= \
	ft_orthoproj_mat4.c	\
	ft_persproj_mat4.c	\
	ft_to_frange.c		\
	ft_vertex3f_proj.c	\
	ft_vieport_llc.c	\
	ft_vieport_tlc.c

MATRIX4_FILES			:= \
	ft_mat4_from_aarot.c				\
	ft_mat4_from_eulerrot.c				\
	ft_mat4_from_quat.c					\
	ft_mat4_from_sphrot.c				\
	ft_mat4_identity.c					\
	ft_mat4_mul.c						\
	ft_mat4_null.c						\
	ft_mat4_postmul_norm_quat.c			\
	ft_mat4_postmul_quat.c				\
	ft_mat4_postmul_vector3.c			\
	ft_mat4_premul_norm_quat.c			\
	ft_mat4_premul_quat.c				\
	ft_mat4_premul_vector3.c			\
	ft_mat4_scale_from_vector3.c		\
	ft_mat4_translate_from_vector3.c	\
	ft_transpose_mat4.c

MLX_TOOLS_FILES			:= \
	fast_line.c			\
	mlx_bresenham.c		\
	mlx_end.c			\
	mlx_init.c			\
	pixel_to_img.c

ROTATION_AA_FILES		:= \
	ft_aarot_from_eulerrot.c	\
	ft_aarot_from_mat4.c		\
	ft_aarot_from_quat.c		\
	ft_aarot_from_sphrot.c		\
	ft_aarot_new.c				\
	ft_aarot_normalize.c

ROTATION_EULER_FILES	:= \
	ft_eulerrot_add.c			\
	ft_eulerrot_equal.c			\
	ft_eulerrot_from_aarot.c	\
	ft_eulerrot_from_mat4.c		\
	ft_eulerrot_from_quat.c		\
	ft_eulerrot_from_sphrot.c	\
	ft_eulerrot_lerp.c			\
	ft_eulerrot_new.c			\
	ft_eulerrot_sub.c

ROTATION_QUAT_FILES		:= \
	ft_quat_add.c				\
	ft_quat_add_n.c				\
	ft_quat_crossprod.c			\
	ft_quat_dotnormalize.c		\
	ft_quat_dotprod.c			\
	ft_quat_equal.c				\
	ft_quat_from_aarot.c		\
	ft_quat_from_eulerrot.c		\
	ft_quat_from_mat4.c			\
	ft_quat_from_sphrot.c	\
	ft_quat_from_vector3.c		\
	ft_quat_inv.c				\
	ft_quat_lerp.c				\
	ft_quat_magn.c				\
	ft_quat_mul.c				\
	ft_quat_neg.c				\
	ft_quat_new.c				\
	ft_quat_normalize.c			\
	ft_quat_opp.c				\
	ft_quat_scale.c				\
	ft_quat_slerp.c				\
	ft_quat_sub.c				\
	ft_quat_sub_n.c

ROTATION_SPH_FILES		:= \
	ft_sphrot_from_aarot.c		\
	ft_sphrot_from_eulerrot.c	\
	ft_sphrot_from_mat4.c		\
	ft_sphrot_from_quat.c

VECTOR2_FILES			:= \
	ft_vector2_add.c			\
	ft_vector2_det.c			\
	ft_vector2_dotprod.c		\
	ft_vector2_equal.c			\
	ft_vector2_magn.c			\
	ft_vector2_new.c			\
	ft_vector2_normalize.c		\
	ft_vector2_null.c			\
	ft_vector2_opp.c			\
	ft_vector2_scale.c			\
	ft_vector2_sub.c

VECTOR3_FILES			:= \
	ft_vector3_add.c			\
	ft_vector3_crossprod.c		\
	ft_vector3_dotprod.c		\
	ft_vector3_equal.c			\
	ft_vector3_from_quat.c		\
	ft_vector3_magn.c			\
	ft_vector3_new.c			\
	ft_vector3_normalize.c		\
	ft_vector3_null.c			\
	ft_vector3_opp.c			\
	ft_vector3_scale.c			\
	ft_vector3_sub.c

VERTEX2F_FILES			:= \
	ft_vertex2f_add.c			\
	ft_vertex2f_div.c			\
	ft_vertex2f_mul.c			\
	ft_vertex2f_new.c			\
	ft_vertex2f_null.c			\
	ft_vertex2f_opp.c			\
	ft_vertex2f_sub.c

VERTEX2I_FILES			:= \
	ft_vertex2i_add.c			\
	ft_vertex2i_div.c			\
	ft_vertex2i_mul.c			\
	ft_vertex2i_new.c			\
	ft_vertex2i_null.c			\
	ft_vertex2i_opp.c			\
	ft_vertex2i_sub.c

VERTEX3F_FILES			:= \
	ft_vertex3f_add.c			\
	ft_vertex3f_div.c			\
	ft_vertex3f_mul.c			\
	ft_vertex3f_new.c			\
	ft_vertex3f_null.c			\
	ft_vertex3f_opp.c			\
	ft_vertex3f_sub.c			\
	ft_vertex3f_from_vertex3i.c

VERTEX3I_FILES			:= \
	ft_vertex3i_add.c			\
	ft_vertex3i_div.c			\
	ft_vertex3i_mul.c			\
	ft_vertex3i_new.c			\
	ft_vertex3i_null.c			\
	ft_vertex3i_opp.c			\
	ft_vertex3i_sub.c

# Full path sources
CAMERA_SRCS			:= $(addprefix $(CAMERA_DIR)/sources/, $(CAMERA_FILES))
COLOR_RGB_SRCS		:= $(addprefix $(COLOR_RGB_DIR)/sources/, $(COLOR_RGB_FILES))
COLOR_RGBA_SRCS		:= $(addprefix $(COLOR_RGBA_DIR)/sources/, $(COLOR_RGBA_FILES))
COLOR_HSL_SRCS		:= $(addprefix $(COLOR_HSL_DIR)/sources/, $(COLOR_HSL_FILES))
DEBUG_SRCS			:= $(addprefix $(DEBUG_DIR)/sources/, $(DEBUG_FILES))
G_MATH_SRCS			:= $(addprefix $(G_MATH_DIR)/sources/, $(G_MATH_FILES))
MATRIX4_SRCS		:= $(addprefix $(MATRIX4_DIR)/sources/, $(MATRIX4_FILES))
MLX_TOOLS_SRCS		:= $(addprefix $(MLX_TOOLS_DIR)/sources/, $(MLX_TOOLS_FILES))
ROTATION_AA_SRCS	:= $(addprefix $(ROTATION_AA_DIR)/sources/, $(ROTATION_AA_FILES))
ROTATION_EULER_SRCS	:= $(addprefix $(ROTATION_EULER_DIR)/sources/, $(ROTATION_EULER_FILES))
ROTATION_QUAT_SRCS	:= $(addprefix $(ROTATION_QUAT_DIR)/sources/, $(ROTATION_QUAT_FILES))
ROTATION_SPH_SRCS	:= $(addprefix $(ROTATION_SPH_DIR)/sources/, $(ROTATION_SPH_FILES))
VECTOR2_SRCS		:= $(addprefix $(VECTOR2_DIR)/sources/, $(VECTOR2_FILES))
VECTOR3_SRCS		:= $(addprefix $(VECTOR3_DIR)/sources/, $(VECTOR3_FILES))
VERTEX2F_SRCS		:= $(addprefix $(VERTEX2F_DIR)/sources/, $(VERTEX2F_FILES))
VERTEX2I_SRCS		:= $(addprefix $(VERTEX2I_DIR)/sources/, $(VERTEX2I_FILES))
VERTEX3F_SRCS		:= $(addprefix $(VERTEX3F_DIR)/sources/, $(VERTEX3F_FILES))
VERTEX3I_SRCS		:= $(addprefix $(VERTEX3I_DIR)/sources/, $(VERTEX3I_FILES))

SOURCES := $(CAMERA_SRCS) $(COLOR_RGB_SRCS) $(COLOR_RGBA_SRCS) $(COLOR_HSL_SRCS) $(DEBUG_SRCS) $(G_MATH_SRCS) $(MATRIX4_SRCS) $(MLX_TOOLS_SRCS) $(ROTATION_AA_SRCS) $(ROTATION_EULER_SRCS) $(ROTATION_QUAT_SRCS) $(ROTATION_SPH_SRCS) $(VECTOR2_SRCS) $(VECTOR3_SRCS) $(VERTEX2F_SRCS) $(VERTEX2I_SRCS) $(VERTEX3F_SRCS) $(VERTEX3I_SRCS)

VPATH	:= \
	$(CAMERA_DIR)/$(SRC_DIR) \
	$(COLOR_RGB_DIR)/$(SRC_DIR) \
	$(COLOR_RGBA_DIR)/$(SRC_DIR) \
	$(COLOR_HSL_DIR)/$(SRC_DIR) \
	$(DEBUG_DIR)/$(SRC_DIR) \
	$(G_MATH_DIR)/$(SRC_DIR) \
	$(MATRIX4_DIR)/$(SRC_DIR) \
	$(MLX_TOOLS_DIR)/$(SRC_DIR) \
	$(ROTATION_AA_DIR)/$(SRC_DIR) \
	$(ROTATION_EULER_DIR)/$(SRC_DIR) \
	$(ROTATION_QUAT_DIR)/$(SRC_DIR) \
	$(ROTATION_SPH_DIR)/$(SRC_DIR) \
	$(VECTOR2_DIR)/$(SRC_DIR) \
	$(VECTOR3_DIR)/$(SRC_DIR) \
	$(VERTEX2F_DIR)/$(SRC_DIR) \
	$(VERTEX2I_DIR)/$(SRC_DIR) \
	$(VERTEX3F_DIR)/$(SRC_DIR) \
	$(VERTEX3I_DIR)/$(SRC_DIR)

# Includes paths
INCLUDES =	\
	-I $(CAMERA_DIR)/$(INC_DIR) \
	-I $(COLOR_RGB_DIR)/$(INC_DIR) \
	-I $(COLOR_RGBA_DIR)/$(INC_DIR) \
	-I $(COLOR_HSL_DIR)/$(INC_DIR) \
	-I $(DEBUG_DIR)/$(INC_DIR) \
	-I $(G_MATH_DIR)/$(INC_DIR) \
	-I $(MATRIX4_DIR)/$(INC_DIR) \
	-I $(MLX_TOOLS_DIR)/$(INC_DIR) \
	-I $(ROTATION_AA_DIR)/$(INC_DIR) \
	-I $(ROTATION_EULER_DIR)/$(INC_DIR) \
	-I $(ROTATION_QUAT_DIR)/$(INC_DIR) \
	-I $(ROTATION_SPH_DIR)/$(INC_DIR) \
	-I $(VECTOR2_DIR)/$(INC_DIR) \
	-I $(VECTOR3_DIR)/$(INC_DIR) \
	-I $(VERTEX2F_DIR)/$(INC_DIR) \
	-I $(VERTEX2I_DIR)/$(INC_DIR) \
	-I $(VERTEX3F_DIR)/$(INC_DIR) \
	-I $(VERTEX3I_DIR)/$(INC_DIR) \
	-I $(COLOR_DIR)/$(INC_DIR) \
	-I $(MATRIX_DIR)/$(INC_DIR) \
	-I $(ROTATION_DIR)/$(INC_DIR) \
	-I $(VECTOR_DIR)/$(INC_DIR) \
	-I $(VERTEX_DIR)/$(INC_DIR) 

# Objects
LIBGR_OBJS = $(patsubst %,$(OBJ_DIR)/%,$(notdir $(SOURCES:.c=.o)))

# Dependencies
LDLIBS =		-lmlx
LDFLAGS =		-L$(MLX_DIR)

MLX_DIR =		mlx
MLX_DEP =		$(LIBFT_DIR)/libmlx.a
MLX_OBJ =		$(patsubst %,$(MLX_DIR)/%,$(MLX_FILES:=.o))
MLX_FILES =		mlx_init_loop \
				mlx_int_str_to_wordtab \
				mlx_new_image \
				mlx_new_window \
				mlx_shaders \
				mlx_xpm \


# Implicit rules
$(OBJ_DIR)/%.o: %.c Makefile
	@$(eval DONE=$(shell echo $$(($(INDEX)*20/$(NB)))))
	@$(eval PERCENT=$(shell echo $$(($(INDEX)*100/$(NB)))))
	@$(eval TO_DO=$(shell echo $$((20-$(INDEX)*20/$(NB) - 1))))
	@$(eval COLOR=$(shell list=(160 196 202 208 215 221 226 227 190 154 118 82 46); index=$$(($(PERCENT) * $${#list[@]} / 100)); echo "$${list[$$index]}"))
	@printf "\r> $(YELLOW)$(NAME)$(EOC) : Building objects...    %2d%% $(CNO)[`printf '#%.0s' {0..$(DONE)}`%*s]$(YELLOW)%*.*s%s$(EOC)$(ERASELN)" $(PERCENT) $(COLOR) $(TO_DO) "" $(DELTA) $(DELTA) "$(shell echo "$@" | sed 's/^.*\///')"
	@$(CC) -c $< -o $@ $(CFLAGS) $(CPPFLAGS) $(DEPFLAGS)
	@$(eval INDEX=$(shell echo $$(($(INDEX)+1))))

# -- RULES --
all: $(MLX_DEP)
	@$(MAKE) -j $(NAME)

$(NAME): $(LIB)

$(LIB): $(OBJ_DIR) $(LIBGR_OBJS)
	@$(AR) $(LIB) $(LIBGR_OBJS) $(MLX_OBJ)
	@printf "\r$(ERASELN)$(GREEN_B)✓$(EOC) $(YELLOW)$(NAME)$(EOC) : Library created\n"

$(OBJ_DIR):
	@$(MKDIR) $(OBJ_DIR)

$(MLX_DEP):
	@$(MAKE) -C $(MLX_DIR)

clean:
	@if [ -e $(OBJ_DIR) ]; \
	then \
		$(RMDIR) $(OBJ_DIR); \
		printf "$(RED_B)✗$(EOC) $(YELLOW)$(NAME)$(EOC) : Objects deleted\n"; \
	fi;

fclean: clean
	@if [ -e $(LIB) ]; \
	then \
		$(RM) $(LIB); \
		printf "$(RED_B)✗$(EOC) $(YELLOW)$(NAME)$(EOC) : Library deleted\n"; \
	fi;
	@$(MAKE) -C $(MLX_DIR) clean

re: fclean
	@$(MAKE)

norm:
	@$(NORM)

.PHONY: all clean fclean re norm

-include $(ALL_OBJS:.o=.d)

# ------------------------------------------------------------------------------
# --------------------------- DISPLAY ------------------------------------------
# ------------------------------------------------------------------------------

LEN_NAME =	`printf "%s" $(NAME) |wc -c`
DELTA =		$$(echo "$$(tput cols)-54-$(LEN_NAME)"|bc)
NB =		$(words $(SOURCES))
INDEX=		0

ERASELN =	\033[K
CNO =		\033[38;5;%dm

YELLOW =	\e[31;33m
YELLOW_B =	\e[31;33;1m
GREEN =		\e[32m
GREEN_B =	\e[32;1m
RED =		\e[31m
RED_B =		\e[31;1m
WHITE =		\e[37m
WHITE_B =	\e[37;1m
EOC =		\e[0m
