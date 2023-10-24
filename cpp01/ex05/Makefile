NAME= Harl
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
FILE=Harl.cpp\
	main.cpp

OBJ= $(FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	 $(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
