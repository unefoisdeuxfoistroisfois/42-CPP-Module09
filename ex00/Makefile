.PHONY : all clean fclean re
.SILENT :

NAME			=	btc
CXX				= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC     	= main.cpp Bitcoin.cpp
OBJ     	= $(SRC:.cpp=.o)
RM      	= rm -f

NC  	= \033[0m
GREEN	= \033[1;32m
RED		= \033[1;31m

all:    $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)COMPILATION SUCCESSFUL$(NC)\n"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@printf "$(RED)REMOVING BINARY$(NC)\n"

re: fclean all