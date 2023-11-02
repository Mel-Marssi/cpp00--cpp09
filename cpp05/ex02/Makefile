NAME=Bureaucrat
CXX= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
INCLUDE= Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
FILE=Bureaucrat.cpp\
	AForm.cpp\
	ShrubberyCreationForm.cpp\
	RobotomyRequestForm.cpp\
	PresidentialPardonForm.cpp\
	main.cpp
OBJ=$(FILE:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
$(OBJ): $(INCLUDE)

clean:
	rm -rf $(OBJ) *_Shrubbery
shu:
	rm -rf *_Shrubbery
fclean:clean
	rm -rf $(NAME)
re:fclean all