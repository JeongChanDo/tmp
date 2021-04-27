# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdo <jdo@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/26 19:50:48 by jdo               #+#    #+#              #
#    Updated: 2021/04/27 21:49:39 by jdo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFT		= libft
LIBFT_LIB	= libft.a
SRCS		= ./ft_printf.c ./utils.c ./print_ch.c\
				./print_str.c ./print_nbr.c
OBJS		= $(SRCS:.c=.o)
INCS		= .
RM			= rm -f
LIBC		= ar rc
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(INCS)

$(NAME) : $(OBJS)
		make all -C $(LIBFT)/
		cp $(LIBFT)/$(LIBFT_LIB) $(NAME)
		$(LIBC) $(NAME) $(OBJS)

all : $(NAME)
fclean : clean
		$(RM) $(NAME)
		make fclean -C $(LIBFT)

clean :
		$(RM) $(OBJS)
		make clean -C $(LIBFT)

re : fclean all
