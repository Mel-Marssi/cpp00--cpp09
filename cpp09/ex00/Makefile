NAME=btc
CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
INCLUDE=BitcoinExchange.hpp
FILE=BitcoinExchange.cpp\
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