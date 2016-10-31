# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdeken <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 10:02:25 by mdeken            #+#    #+#              #
#    Updated: 2016/10/17 18:00:33 by mdeken           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = ../includes

FLAG = -Wall -Wextra -Werror

SRC =	ft_atoi.c\
		ft_bitslen.c\
		ft_bzero.c\
		ft_fmin.c\
		ft_imin.c\
		ft_imemset.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_lstadd.c\
		ft_lstaddback.c\
		ft_lstaddorderby.c\
		ft_lstdel.c\
		ft_lstdelone.c\
		ft_lstdel_str.c\
		ft_lstiter.c\
		ft_lstnew.c\
		ft_lstorder_str.c\
		ft_memalloc.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memdel.c\
		ft_memmove.c\
		ft_memset.c\
		ft_nbrlen.c\
		ft_fmin.c\
		ft_pow.c\
		ft_putchar.c\
		ft_putchar_fd.c\
		ft_putendc.c\
		ft_putendc_fd.c\
		ft_putendl.c\
		ft_putendl_fd.c\
		ft_putnbr.c\
		ft_putnbrl.c\
		ft_putnbrr.c\
		ft_putnbr_fd.c\
		ft_putstr.c\
		ft_putstr_color.c\
		ft_putstrl.c\
		ft_putstrnr.c\
		ft_putstr_fd.c\
		ft_sqrt.c\
		ft_strcat.c\
		ft_strcchr.c\
		ft_strcchr_last.c\
		ft_strchr.c\
		ft_strcmp.c\
		ft_strcpy.c\
		ft_strdel.c\
		ft_strdup.c\
		ft_strequ.c\
		ft_strfirst.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strncat.c\
		ft_strncmp.c\
		ft_strncpy.c\
		ft_strndup.c\
		ft_strnequ.c\
		ft_strnew.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strsplit.c\
		ft_strstr.c\
		ft_strsub.c\
		ft_strtrim.c\
		ft_switch.c\
		ft_tolower.c\
		ft_toupper.c\
		get_next_line.c\

INC_REP = includes

INCLUDE = -I $(INC_REP)

OBJ_REP = obj

OBJ_FILE = $(SRC:.c=.o)

OBJ = $(addprefix $(OBJ_REP)/, $(OBJ_FILE))

GCC = gcc

vpath	%.h includes
vpath	%.c src

all : print $(NAME)

$(NAME) : $(OBJ) 
	@ar rc $(NAME) $(OBJ)
	@echo "\n\033[36m"$(NAME)":\033[34;1m Done !\033[0m"

$(OBJ_REP)/%.o : %.c ../includes/libft.h
	@mkdir $(OBJ_REP) 2> /dev/null || true
	@$(GCC) $(FLAG) $(INCLUDE) -o $@ -c $<
	@printf '\033[32m.\033[0m'

clean :
	@echo "\033[36m"$(NAME)":\033[31m Deleting object\033[0m"
	@rm -rf $(OBJ)
	@rmdir $(OBJ_REP) 2> /dev/null || true

fclean : clean
	@echo "\033[36m"$(NAME)":\033[31m Deleting library\033[0m"
	@rm -rf $(NAME)

print:
	@echo "\033[36m"$(NAME)":\033[34;1m Compiling...\033[0m"

re: fclean all


