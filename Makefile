NAME = push_swap

C_FILES = main.c\

SRCS = $(addprefix srcs/,$(C_FILES))

CFLAGS = -Wall -Werror -Wextra -I includes/

LIB = ft_printf/libftprintf.a libft/libft.a
DEPS = $(addprefix lib/,$(LIB))

all: ${NAME}

${NAME}: ${SRCS}
	make -C lib/libft
	make -C lib/ft_printf
	cc ${CFLAGS} ${SRCS} -L -l -I -lm -lz -o ${NAME} ${DEPS}

clean:
	make -C lib/libft clean
	make -C lib/ft_printf clean

fclean:	clean
		rm -rf ${NAME}

re:             fclean all

.PHONY:         all clean fclean re
