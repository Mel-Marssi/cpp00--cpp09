NAME= HistoryLog
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
FILE= Account.cpp\
	  tests.cpp
OBJ= $(FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	 $(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
