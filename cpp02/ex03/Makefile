NAME= Triangle
INCLUDE=Fixed.hpp Points.hpp
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
FILE=main.cpp\
	Fixed.cpp\
	Points.cpp\
	bsp.cpp

OBJ= $(FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	 $(CXX) $(CXXFLAGS)  $(OBJ)  -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all