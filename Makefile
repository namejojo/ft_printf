SRC_FILES = ft_printf.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_put_unsnbr.c\
			ft_putn_base.c\
			ft_putptr.c

OBJ_FILES = ${SRC_FILES:.c=.o}

NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

%.o: %.c
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean: 
	rm -f ${OBJ_FILES}

fclean: clean 
	rm -f ${NAME}

re: fclean all

.PHONY: re fclean clean all


${NAME}: ${OBJ_FILES}
	ar rcs $@ $?