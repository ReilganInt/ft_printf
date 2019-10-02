# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmormont <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/31 16:31:10 by vmormont          #+#    #+#              #
#    Updated: 2019/06/04 16:36:01 by vmormont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libftprintf.a

SRC_DIR	:= ./src
INC_DIR	:= ./includes
OBJ_DIR	:= ./obj
CC 		:= gcc
CFLAGS 	:= -Wall -Wextra -Werror
SRC		:= ft_printf.c \
		ft_param_add.c ft_param_nul.c \
		ft_c.c ft_o.c ft_p.c ft_s.c ft_u.c ft_c_up.c ft_f.c \
		ft_d.c ft_x.c ft_o_up.c ft_s_up.c ft_u_up.c ft_d_up.c \
		ft_o_null.c ft_x_null.c ft_d.c ft_x.c ft_x_up.c ft_f_up.c \
		ft_buf_add.c ft_buf_new.c \
		ft_prcnt.c ft_percent.c \
		ft_do_buf_empty.c \
		ft_dota.c ft_help_dota.c \
		ft_lnum.c ft_color.c \
		ft_atoi.c ft_itoa.c ft_itoa_base_ll.c ft_itoa_base.c \
		ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memdel.c ft_memmove.c ft_memnew.c ft_mempcpy.c ft_memset.c \
		ft_pow.c ft_putchar.c ft_putnbr.c ft_strchr.c ft_strdup.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strndup.c ft_strnew.c ft_strrchr.c \
		ft_strsub.c ft_bzero.c \
		ft_strcat.c ft_strcpy.c ft_num_dig.c

.PHONY: all clean fclean re dir

OBJ		:= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

$(NAME) : dir $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all : $(NAME)

dir:
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all