NAME=Fragtrap
CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
INCLUDE=ClapTrap.hpp Fragtrap.hpp
FILE=ClapTrap.cpp\
	FragTrap.cpp\
	main.cpp

OBJ=$(FILE:.cpp=.o)

all: $(NAME) $(INCLUDE)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all