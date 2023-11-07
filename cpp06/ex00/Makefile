NAME=Convert
CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
FILE=ScalarConverter.cpp main.cpp check_if.cpp
INCLUDE=ScalarConverter.hpp
OBJ=$(FILE:.cpp=.o)

all:$(NAME)
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
$(OBJ): $(INCLUDE)
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re:fclean all
