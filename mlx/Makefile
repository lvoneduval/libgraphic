NAME =			libmlx
MLX_LIB =		$(NAME).a
SRC = 			mlx_shaders.c \
				mlx_new_window.m \
				mlx_init_loop.m \
				mlx_new_image.m \
				mlx_xpm.c \
				mlx_int_str_to_wordtab.c \

CFLAGS+=		-O2
OBJ1 =			$(SRC:.c=.o)
OBJ =			$(OBJ1:.m=.o)

all: $(MLX_LIB)

$(MLX_LIB):	$(OBJ)
	@ar -rcs $(MLX_LIB) $(OBJ)
	@printf "$(GREEN_B)✓$(EOC) $(YELLOW)$(NAME)$(EOC) : Library created\n"

clean:
	@rm -f $(NOM) $(OBJ) *~
	@rm -f mlx_app
	@printf "$(RED_B)✗$(EOC) $(YELLOW)$(NAME)$(EOC) : Library deleted\n"

re: clean all

.SILENT: $(OBJ1) $(OBJ)

# ------------------------------------------------------------------------------
# --------------------------- DISPLAY ------------------------------------------
# ------------------------------------------------------------------------------

YELLOW =	\e[31;33m

GREEN =		\e[32m
GREEN_B =	\e[32;1m
RED =		\e[31m
RED_B =		\e[31;1m
WHITE =		\e[37m
WHITE_B =	\e[37;1m
EOC =		\e[0m
