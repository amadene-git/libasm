# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admadene <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 09:51:57 by admadene          #+#    #+#              #
#    Updated: 2021/03/23 12:07:06 by admadene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libasm.a

SRCS		=	ft_strlen.s\
				ft_strcpy.s\
				ft_strcmp.s\
				ft_write.s\

OBJS		=	${SRCS:.s=.o}

ASM			=	nasm

ASM_FLAG	=	-f macho64



%.o:		%.s
				${ASM} ${ASM_FLAG} $<

${NAME}:	${OBJS}
				ar rcs ${NAME} ${OBJS} ; ranlib ${NAME}
	
test:		all
				clang -o test main.c -g ${NAME} ; rm -rf test.dSYM

all:		${NAME}

clean:		
				rm -rf ${OBJS}

fclean:		clean
				rm -rf ${NAME}

re:			fclean ${NAME}
