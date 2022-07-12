# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 21:45:48 by julmuntz          #+#    #+#              #
#    Updated: 2022/07/12 20:09:58 by julmuntz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_printf.c				\
				convert_char.c			\
				convert_decimal.c		\
				convert_hex_lower.c		\
				convert_hex_pointer.c	\
				convert_hex_upper.c		\
				convert_integer.c		\
				convert_string.c		\
				convert_unsigned.c		\

OBJS		= 	$(SRCS:.c=.o)

NAME		= 	libftprintf.a

LIBFT		=	./libft

CC			= 	cc
RM			= 	rm -f
CFLAGS		= 	-Wall -Wextra -Werror

.c.o :
	$(CC) $(CFLAGS) -c -I $(LIBFT) $< -o $@

$(NAME):		$(OBJS)
					cd $(LIBFT) && $(MAKE)
					cp libft/libft.a $(NAME)
					ar rcs $(NAME) $(OBJS)

all:			$(NAME)

clean:
					$(RM) -r $(OBJS)
					cd $(LIBFT) && $(MAKE) clean

fclean:			clean
					$(RM) $(NAME)
					cd $(LIBFT) && $(MAKE) fclean

re:				fclean all

.PHONY:			all clean fclean re