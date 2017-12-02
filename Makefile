# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfavero <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/28 18:30:17 by cfavero           #+#    #+#              #
#    Updated: 2017/12/02 17:24:00 by cfavero          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main check check2 source movepezzi cut ft_lstnew ft_strsub ft_memalloc \
	  ft_memcpy ft_strnew test findsqr

SRC_C = $(patsubst %,%.c,$(SRC))

SRC_O = $(patsubst %,%.o,$(SRC))

FLAGS = -Wall -Wextra -Werror

.PHONY : all clean fclean re

all: $(NAME)

$(SRC_O):
	@gcc $(FLAGS) -c $(SRC_C)

$(NAME): $(SRC_O)
	@gcc -o $(NAME) $(SRC_O)
	@./$(NAME) tetris_pezzi

clean:
	@/bin/rm -f $(SRC_O)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
