NAME=RPN
CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
INCLUDE=RPN.hpp
FILE=RPN.cpp\
	main.cpp
OBJ=$(FILE:.cpp=.o)

all: $(NAME) $(OBJ)
$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
$(OBJ):$(INCLUDE)

clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re:fclean all