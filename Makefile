NAME = push_swap

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

SRCS = $(addprefix srcs/,$(C_FILES))

CFLAGS = -Wall -Werror -Wextra -I includes/ -g

LIB = ft_printf/libftprintf.a libft/libft.a
DEPS = $(addprefix lib/,$(LIB))

all: ${NAME}

${NAME}: ${SRCS}
	make -C lib/libft
	make -C lib/ft_printf
	cc ${CFLAGS} ${SRCS} -o ${NAME} ${DEPS}

clean:
	make -C lib/libft clean
	make -C lib/ft_printf clean

fclean:	clean
		rm -rf ${NAME}

re:             fclean all

.PHONY:         all clean fclean re