# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csanroma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 16:16:41 by csanroma          #+#    #+#              #
#    Updated: 2022/08/25 16:16:45 by csanroma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_itoa.c ft_putchar_fd.c ft_puthex_fd.c ft_putloc_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_printf.c
OBJS	= ${SRCS:.c=.o}
NAME	= libftprintf.a
CFLAGS	= -Wall -Wextra -Werror
AR	= ar rc
.c.o:
	gcc ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}
all:	${NAME}
clean:
		rm -f ${OBJS}
fclean: clean
		rm -f ${NAME}
re:	fclean all
.PHONY: all clean fclean re
