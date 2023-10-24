NAME=DiamondTrap
CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -Wshadow -std=c++98
INCLUDE=ClapTrap.hpp Fragtrap.hpp ScavTrap.hpp
FILE=ClapTrap.cpp\
	FragTrap.cpp\
	ScavTrap.cpp\
	DiamondTrap.cpp\
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