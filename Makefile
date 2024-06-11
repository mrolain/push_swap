# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 09:22:28 by mrolain           #+#    #+#              #
#    Updated: 2024/06/11 09:52:11 by mrolain          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	./src/utils/count_words.c \
		./src/utils/ft_isdigit.c \
		./src/utils/ft_memcpy.c \
		./src/utils/ft_split.c \
		./src/utils/ft_strcmp.c \
		./src/utils/ft_isoverflow.c \
		./src/parsing.c \
		./src/push_swap.c \

OBJS = ${SRCS:.c=.o}


CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all:		${NAME}

		
${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			
clean:
		@${RM} ${OBJS}
		
fclean:	clean
		@${RM} ${NAME}

re:		fclean all