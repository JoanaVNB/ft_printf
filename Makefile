# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 19:04:16 by jvidon-n          #+#    #+#              #
#    Updated: 2022/05/19 21:52:17 by jvidon-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a
FILE = ft_printf.c ft_print_hex.c ft_print_ptr.c ft_printf_utils.c \
			ft_uitoa.c sub_libft.c ft_itoa_base.c 
CC	=	cc
CFLAGS	=	-Wall -Werror -Wextra
OBJ = $(FILE:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: $(SRCS)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
