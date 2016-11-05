# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdeken <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 10:02:25 by mdeken            #+#    #+#              #
#    Updated: 2016/11/05 16:03:19 by mdeken           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = uTest

LIBFT_PATH = ~/libft

INCLUDES = ../includes

FLAGS = -Wall -Wextra -Werror

SRC = $(shell ls -1 src)\
	  main.c

SRC_REP = tests

INC_REP = includes

INCLUDE = -I $(INC_REP) -I $(addprefix $(LIBFT_PATH)/, includes) -I tests/includes

OBJ_REP = obj

OBJ_FILE = $(SRC:.c=.o)

OBJ = $(addprefix $(OBJ_REP)/, $(OBJ_FILE))\

LIBFT = -L $(LIBFT_PATH) -lft

OS = $(shell uname)
ifeq ($(OS), Linux)
	CC = gcc
else
	CC = clang
endif

vpath	%.h includes
vpath	%.c src
vpath	%.o obj

.PHONY: all libft clean fclean re compiling libclean

all : libft test compiling $(NAME) run

libft:
	@make -C $(LIBFT_PATH)

test:
	@make -C tests

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) obj/* $(LIBFT)	
	@echo "\n\033[36m"$(NAME)":\033[34;1m Done !\033[0m"

$(OBJ_REP)/%.o : %.c tests/src src/
	@mkdir $(OBJ_REP) 2> /dev/null || true
	@$(CC) $(FLAGS) $(INCLUDE) -o $@ -c $<
	@printf '\033[32m.\033[0m'

clean :
	@echo "\033[36m"$(NAME)":\033[31m Deleting object\033[0m"
	@rm -rf $(OBJ_REP)

fclean : clean
	@echo "\033[36m"$(NAME)":\033[31m Deleting library\033[0m"
	@rm -rf $(NAME)

libclean:
	@make -C $(LIBFT_PATH)/ fclean

re: libclean fclean all

compiling:
	@echo "\033[36m"$(NAME)":\033[34;1m Compiling...\033[0m"


run :
	@echo ""
	@./uTest
