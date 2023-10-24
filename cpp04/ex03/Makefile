NAME=Materia
CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3
INCLUDE= AMateria.hpp Cure.hpp Ice.hpp\
	ICharacter.hpp Character.hpp\
	IMateriaSource.hpp MateriaSource.hpp\
	LinkedList.hpp
FILE=  AMateria.cpp Cure.cpp Ice.cpp\
	ICharacter.cpp Character.cpp\
	IMateriaSource.cpp MateriaSource.cpp\
	LinkedList.cpp main.cpp
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