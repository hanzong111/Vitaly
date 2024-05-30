# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 20:26:19 by ojing-ha          #+#    #+#              #
#    Updated: 2024/05/29 16:53:41 by ojing-ha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEF_COLOR     = \033[0;39m
GRAY         = \033[0;90m
RED         = \033[0;91m
GREEN         = \033[0;92m
YELLOW         = \033[0;93m
BLUE         = \033[0;94m
MAGENTA     = \033[0;95m
CYAN         = \033[0;96m
WHITE         = \033[0;97m
NAME		= robotic

CC			= gcc

SRCS_DIR	= srcs/
OBJS_DIR	= objs/
INCLUDES	= includes/

CFLAGS	= -Wall -Werror -Wextra 

SRC_FILES	= main\
				Movement\
				Routine\
				Sensor\
				Servo\
				


SRCS	= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS	= $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

all		:
		@mkdir -p $(OBJS_DIR)
		@echo "$(MAGENTA) --------------------------INSIDE PHILO-------------------------- $(CYAN)"
		@echo "\n"
		@make $(NAME)
		@echo "$(YELLOW)Done Creating ./robotic$(DEF_COLOR)"
		@echo "\n"
		@echo "$(GREEN) -------------$(RED)I $(CYAN)AM $(GREEN)DONE $(YELLOW)MADAFAKA$(GREEN)-------------------------- $(DEF_COLOR)"

$(NAME)	: ${OBJS}
		@${CC} ${CFLAGS} -I includes/Routine.h ${OBJS}  -o ${NAME}
		@echo "$(GREEN)Creating ./robotic ...$(DEF_COLOR)"

${OBJS_DIR}%.o:	$(SRCS_DIR)%.c
		@$(CC) $(CFLAGS) -c $^ -o $@
		@echo "$(GREEN)Compiling $<...$(DEF_COLOR)"


clean	:
		@echo "$(MAGENTA) --------------------------REMOVING objs/-------------------------- $(CYAN)"
		@echo "\n"
		@rm -rf $(OBJS_DIR)
		@echo "$(RED)Object Files Deleted$(DEF_COLOR)"
		@echo "\n"
		@echo "$(GREEN) --------------------------DONE--------------------------$(DEF_COLOR)"

fclean	:	clean
		@echo "$(MAGENTA) --------------------------REMOVING ./philo-------------------------- $(CYAN)"
		@echo "\n"
		@rm -f $(NAME)
		@echo "$(RED)./robotic Deleted$(DEF_COLOR)"
		@echo "\n"
		@echo "$(GREEN) --------------------------DONE--------------------------$(DEF_COLOR)"

re		:fclean all

.PHONY	:all clean fclean re