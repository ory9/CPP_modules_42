NAME = bsp
SRC = Fixed.cpp main.cpp Point.cpp bsp.cpp
CXXFLAGS = c++ -Wall -Werror -Wextra -std=c++98
$(NAME):
	$(CXXFLAGS) $(SRC) -o $(NAME)
all:$(NAME)
clean:
	rm -f $(NAME)
fclean:
	rm -f $(NAME)
re: fclean all
./Phony: all clean re fclean