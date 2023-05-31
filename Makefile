# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neves <neves@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 11:42:26 by roda-min          #+#    #+#              #
#    Updated: 2023/05/30 15:01:08 by neves            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#  |  |  _ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# _ _|  _/   |   |  (   |    <    __/ 
#    |  __| |  _| \,| |\\ \___|
#                              by jcluzet
################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := push_swap
CC        := gcc
FLAGS    := -Wall -Wextra -Werror 
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      push_swap_utils.c \
                          quick_sort.c \
                          arg_parser.c \
                          push_swap_utils_2.c \
                          5_sort.c \
                          100_sort.c \
                          swap_op.c \
                          push_op.c \
                          3_sort.c \
                          rotate_op.c \
                          rev_rotate_op.c \
                          500_sort.c \
                          push_swap.c \
                          
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} .o */.o //*.o $(OBJS)
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re