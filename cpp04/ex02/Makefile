NAME=Zoo
CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 
INCLUDE= Animal.hpp\
 	Cat.hpp Dog.hpp\
 	WrongCat.hpp\
  	WrongAnimal.hpp\
    Brain.hpp
FILE= Animal.cpp\
	Cat.cpp\
	Dog.cpp\
	WrongAnimal.cpp\
	WrongCat.cpp\
	Brain.cpp\
	main.cpp
OBJ=$(FILE:.cpp=.o)

all: $(NAME) $(INCLUDE)

$(NAME): $(OBJ) $(INCLUDE)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(INCLUDE)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:fclean all