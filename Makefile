# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Leo <Leo@student.42lyon.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 16:28:13 by Leo               #+#    #+#              #
#    Updated: 2021/12/02 16:46:52 by Leo              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c 					\
		ft_parse_printf.c 			\
		ft_args_sort.c 				\
		ft_putchar_args.c 			\
		ft_putstr_args.c 			\
		ft_putptr_args.c 			\
		ft_putnbr_args.c 			\
		ft_putnbr_unsigned_args.c 	\
		ft_puthex_args.c 			\
		ft_percent_args.c 			\
		ft_strdup.c 				\
		ft_itoa.c 					\
		ft_unsigned_itoa.c 			\

OBJS = ${SRCS:.c=.o}

INCLUDES = ft_printf.h

CC = gcc
RM = rm -f

FLAGS = -Wall -Wextra -Werror

%.o : %.c ${INCLUDES}
	${CC} ${FLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS} 
	ar rcs ${NAME} ${OBJS} 

all: ${NAME}

clean: ${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all
         
.PHONY: all clean fclean re bonus