# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: progerio <progerio@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 00:52:27 by progerio          #+#    #+#              #
#    Updated: 2022/07/13 22:41:01 by progerio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
			
SRCS	=	ft_printf.c\
			ft_printf_utils.c\
			ft_conv.c\
			ft_itoa_types.c\
			ft_unsigned_types.c

OBJS	=	ft_printf.o\
			ft_printf_utils.o\
			ft_conv.o\
			ft_itoa_types.o\
			ft_unsigned_types.o

HEADER	=	ft_printf.h

CFLAGS	= 	-Wall -Wextra -Werror

.c.o:	$(SRCS)
		cc $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS) $(HEADER)
		ar rcs $@ $^

all:	$(NAME)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:		clean all

.PHONY: all clean fclean re
