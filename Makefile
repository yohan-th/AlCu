# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/12/16 11:05:45 by aweiler      #+#   ##    ##    #+#        #
#    Updated: 2018/03/16 17:45:13 by ythollet    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY : all clean fclean re

CFLAGS = -Wall -Werror -Wextra
NAME = alum1

D_SRC = src/
D_OBJ = obj/
D_LIB = Libft/

SRC = main.c check.c display.c reader.c solver.c

OBJ = $(addprefix $(D_OBJ), $(SRC:.c=.o))

all : $(NAME)

$(NAME) : $(OBJ)
	make -C $(D_LIB)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -L $(D_LIB) -lft 

$(D_OBJ)%.o : $(D_SRC)%.c
	@mkdir -p $(D_OBJ)
	@gcc $(CFLAGS) -o $@ -c $<

clean :
	@rm -rf $(D_OBJ)
	@make clean -C $(D_LIB)

fclean : clean
	@rm -f $(NAME)
	@make fclean -C $(D_LIB)

re : fclean all
