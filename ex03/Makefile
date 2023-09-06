NAME = AMateria

GCC := c++ -Werror -Wextra -Wall  -std=c++98 

SRC := 

all : $(NAME)

$(NAME) : $(SRC)
		@$(GCC) -fsanitize=address -g3 $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all