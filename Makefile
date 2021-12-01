# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 22:56:35 by vlothlinux        #+#    #+#              #
#    Updated: 2021/11/27 13:58:50 by vlothlinux       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

NAME	= pipex

HEADER	= includes/pipex.h

SRCS	= pipex.c sources/find_path.c sources/ft_exec.c sources/ft_forker.c sources/ft_open.c sources/ft_parsing.c sources/ft_split.c sources/ft_strjoin.c sources/ft_strlen.c sources/ft_strncmp.c sources/ft_substr.c sources/ft_putstr_fd.c

OBJS	= $(SRCS:.c=.o)

all :	 $(NAME)

$(NAME): $(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)

re : 	fclean all