# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 09:22:28 by mrolain           #+#    #+#              #
#    Updated: 2024/06/17 14:34:41 by mrolain          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	./src/main.c \
		./src/parsing.c \
		./src/init_list.c \
		./src/utils/count_words.c \
		./src/utils/ft_isdigit.c \
		./src/utils/ft_memcpy.c \
		./src/utils/ft_split.c \
		./src/utils/ft_strcmp.c \
		./src/utils/ft_isoverflow.c \
		./src/utils/ft_lstlast.c \
		./src/utils/ft_atoi.c \
		./src/utils/ft_lstsize.c \
		./src/moves/sa.c \
		./src/moves/sb.c \
		./src/moves/ss.c \
		./src/moves/ra.c \
		./src/moves/rb.c \
		./src/moves/rr.c \
		./src/moves/rra.c \
		./src/moves/rrb.c \
		./src/moves/rrr.c \
		./src/moves/pa.c \
		./src/moves/pb.c \
		
OBJS = ${SRCS:.c=.o}


CC = cc
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
RM = rm -f

all:		${NAME}

		
${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}
		@${RM} ${OBJS}
			
clean:
		@${RM} ${OBJS}
		
fclean:	clean
		@${RM} ${NAME}

re:		fclean all