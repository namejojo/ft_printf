SRC_FILES = ft_printf.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_put_unsnbr.c\
			ft_check.c\
			ft_putn_base.c
		
OBJ_FILES = ${SRC_FILES:.c=.o}

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ_FILES}
	ar rcs $@ $?

%.o: %.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
	rm -f *.o

fclean: clean 
	rm -f ${NAME}

re: fclean all

.PHONY: re fclean clean all