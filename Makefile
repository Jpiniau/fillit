# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpiniau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/09 15:51:57 by jpiniau           #+#    #+#              #
#    Updated: 2016/11/05 14:28:53 by jpiniau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = fillit

FLAGS = -Wall -Werror -Wextra

SRC_PATH = ./src/

SRC_NAME =	main.c\
			get_all_tetri.c\
			get_tetri.c\
			free_tetri.c\
			free_lst_tetri.c\
			test_tetri.c\
			go_topleft.c\
			replace.c\
			put_rep.c\
			print_tetri.c

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

OBJ_PATH = ./obj/

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

all: lib $(NAME)

lib:
	@make -C libft/

$(NAME) : $(OBJ)
	gcc $(FLAGS) -o $@ $^ -L libft/ -lft

$(OBJ_PATH)%.o : $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	gcc $(FLAGS) -o $@ -c $< -I libft/includes -I includes/.

clean :
	rm -rf $(OBJ_PATH)

fclean : clean
	rm -rf $(NAME)

re : fclean all
