# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jereligi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 12:01:33 by jereligi          #+#    #+#              #
#    Updated: 2020/02/20 12:57:41 by jereligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm

SRCS = 	ft_write.s \
		ft_read.s \
		ft_strcmp.s \
		ft_strcpy.s \
		ft_strdup.s \
		ft_strlen.s \

CC = gcc

CFLAGS = -Wall -Wetra -Werror

NASM = nasm

NASMFLAGS = -f macho64

OBJ = $(SRCS:.s=.o)

%.o : %.s
	$(NASM) $(NASMFLAGS) $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs libasm.a $(OBJ)
	
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f libasm.a

re : fclean all
