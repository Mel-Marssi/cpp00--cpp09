NAME=Serialize
CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
INCLUDE= Serializer.hpp

FILE=Serializer.cpp main.cpp

OBJ=$(FILE:.cpp=.o)

all:$(NAME)
$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
$(OBJ): $(INCLUDE)
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re:fclean all
