# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 17:50:33 by julmuntz          #+#    #+#              #
#    Updated: 2022/06/02 17:26:40 by julmuntz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_atoi.c			\
    			ft_bzero.c			\
    			ft_calloc.c			\
    			ft_convert_base.c	\
    			ft_hexlen_u.c		\
    			ft_hexlen_ul.c		\
    			ft_isalnum.c		\
    			ft_isalpha.c		\
    			ft_isascii.c		\
    			ft_isdigit.c		\
    			ft_isprint.c		\
    			ft_itoa.c   		\
				ft_lstadd_back.c	\
				ft_lstadd_front.c	\
				ft_lstclear.c		\
				ft_lstdelone.c		\
				ft_lstiter.c		\
				ft_lstlast.c		\
				ft_lstmap.c			\
				ft_lstnew.c			\
				ft_lstsize.c		\
    			ft_memchr.c 		\
    			ft_memcmp.c 		\
    			ft_memcpy.c 		\
    			ft_memmove.c		\
    			ft_memset.c 		\
    			ft_nbrlen_u.c 		\
    			ft_nbrlen.c 		\
    			ft_putchar_fd.c		\
    			ft_putchar.c		\
    			ft_putendl_fd.c		\
    			ft_puthex_u_lower.c	\
    			ft_puthex_u_upper.c	\
    			ft_puthex_ul.c		\
    			ft_putnbr_fd.c		\
    			ft_putnbr_u.c		\
    			ft_putnbr_ul.c		\
    			ft_putnbr.c			\
    			ft_putstr_fd.c		\
    			ft_putstr.c			\
    			ft_split.c			\
    			ft_strchr.c			\
    			ft_strdup.c			\
    			ft_striteri.c		\
    			ft_strjoin.c		\
    			ft_strlcat.c		\
    			ft_strlcpy.c		\
    			ft_strlen.c			\
    			ft_strmapi.c		\
    			ft_strncmp.c		\
    			ft_strnstr.c		\
    			ft_strrchr.c		\
    			ft_strtrim.c		\
    			ft_substr.c			\
    			ft_tolower.c		\
    			ft_toupper.c		\

OBJS		= 	$(SRCS:.c=.o)

NAME		= 	libft.a

CC			= 	cc
RM			= 	rm -f
CFLAGS		= 	-Wall -Wextra -Werror

$(NAME):		$(OBJS)
					ar rc $(NAME) $(OBJS)

all:			$(NAME)

clean:
					$(RM) $(OBJS) $(B_OBJS)

fclean:			clean
					$(RM) $(NAME)

.PHONY:			all clean fclean re