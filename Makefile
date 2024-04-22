NAME = push_swap

BONUS_NAME = checker

C_FILES = main.c\
			algo.c\
			push.c\
			swap.c\
			utils.c\
			rotate.c\
			reverse.c\
			error_msg.c\
			error_args.c\
			set_up_node.c\
			set_up_algo.c\
			initialization_list.c\
			fusion_and_split_args.c\

C_BONUS = main_bonus.c\
			push_bonus.c\
			swap_bonus.c\
			utils_bonus.c\
			set_up_bonus.c\
			rotate_bonus.c\
			reverse_bonus.c\
			error_msg_bonus.c\
			error_args_bonus.c\
			set_up_node_bonus.c\
			set_up_algo_bonus.c\
			gnl_push_swap_bonus.c\
			initialization_list_bonus.c\
			fusion_and_split_args_bonus.c\

SRCS = $(addprefix srcs/,$(C_FILES))

SRCS_BONUS = $(addprefix bonus/,$(C_BONUS))

CFLAGS = -Wall -Werror -Wextra -I includes/ -g

LIB = ft_printf/libftprintf.a libft/libft.a
DEPS = $(addprefix lib/,$(LIB))

all: ${NAME}

${NAME}: ${SRCS}
	make -C lib/libft
	make -C lib/ft_printf
	cc ${CFLAGS} ${SRCS} -o ${NAME} ${DEPS}

bonus: ${BONUS_NAME}

${BONUS_NAME}: ${SRCS_BONUS}
	make -C lib/libft
	make -C lib/ft_printf
	cc ${CFLAGS} ${SRCS_BONUS} -o ${BONUS_NAME} ${DEPS}

clean:
	make -C lib/libft clean
	make -C lib/ft_printf clean

fclean:	clean
		rm -rf ${NAME} ${BONUS_NAME}

re:             fclean all

.PHONY:         all clean fclean re
