SRC_FILES = ft_printf.c\
			ft_putnbr_baseUP.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_put_unsnbr.c\
			ft_putnbr_baseDOWN.c\
			ft_putptr.c\
			ft_check_error.c\
			ft_check.c
		
OBJ_FILES = ${SRC_FILES:.c=.o}

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_FILES}
	ar rcs $@ $^

all: ${NAME} 

clean: 
	rm -f *.o bonus

fclean: clean 
	rm -f ${NAME}

re: fclean all

.PHONY: re fclean clean all