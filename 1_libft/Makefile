# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 13:32:17 by fwebe-ir          #+#    #+#              #
#    Updated: 2024/11/26 12:14:41 by fwebe-ir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c\
ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\

OBJECT = ${SOURCES:.c=.o}

CC			= gcc
RM			= rm -f
FLAGS		= -Wall -Werror -Wextra		

OBJS		= ${SRCS:.c=.o}
OBJ_BONUS	= ${SRC_BONUS:.c=.o}

all:		${NAME}

${NAME} :	${OBJS}
			ar rcs ${NAME} ${OBJS}

bonus:		${OBJS} ${OBJ_BONUS}
			ar rcs ${NAME} ${OBJS} ${OBJ_BONUS}
			
%.o: %.c	
			${CC} ${FLAGS} -c $< -o $@
clean:	
			${RM} ${OBJS} ${OBJ_BONUS}
fclean:		clean
			${RM} ${NAME}
re:			fclean all
.PHONY:		all clean fclean re bonus