# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 09:51:09 by fleduc            #+#    #+#              #
#    Updated: 2023/02/09 13:17:52 by fleduc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = templates

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = g++
RM = rm -rf

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all = $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re