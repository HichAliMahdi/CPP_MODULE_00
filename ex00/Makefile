# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 21:54:23 by hali-mah          #+#    #+#              #
#    Updated: 2025/03/31 22:07:55 by hali-mah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CLAFGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME) 
re: fclean all

.PHONY: all clean fclean re