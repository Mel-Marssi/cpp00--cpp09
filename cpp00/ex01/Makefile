NAME= PhoneBook
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
FILE= Contact.cpp\
	  PhoneBook.cpp
OBJ= $(FILE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	 $(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
