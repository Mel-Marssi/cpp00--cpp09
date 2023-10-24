NAME= Zombie
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
FILE= newZombie.cpp\
	  randomChump.cpp\
	  main.cpp\
	  Zombie.cpp
OBJ= $(FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	 $(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
