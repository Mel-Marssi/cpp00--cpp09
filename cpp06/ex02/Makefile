NAME=Dynamic
CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
FILE=Base.cpp main.cpp
INCLUDE=Base.hpp A.hpp B.hpp C.hpp
OBJ=$(FILE:.cpp=.o)

all:$(NAME)
$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o  $(NAME)
$(OBJ):$(INCLUDE)

clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re:fclean all