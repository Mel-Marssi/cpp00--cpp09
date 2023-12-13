#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &copy){
	(void) copy;
}

Intern &Intern::operator=(const Intern &copy)
{
	(void) copy;
	return(*this);
}

const char *Intern::RequestNotValid::what() const throw()
{
	return ("undefined request!!!");
}

AForm *Intern::makeForm(std::string className, std::string targetName)
{
	AForm *ptr = NULL;
	std::string arr[3]={"robotomy request", "shrubbery request", "presidential request"};
	int i = 0;

	while (arr[i] != className)
		i++;

	switch (i)
	{
		case 0:
			ptr = new RobotomyRequestForm(targetName);
			std::cout << "Intern create Robotomy! "<<std::endl;
			break;
		case 1:
			ptr = new ShrubberyCreationForm(targetName);
			std::cout << "Intern create Shrubbery! "<<std::endl;
			break;
		case 2:
			ptr = new PresidentialPardonForm(targetName);
			std::cout << "Intern create Presidential! "<<std::endl;
			break;
		default:
			throw(RequestNotValid());
			break;
	}
	return (ptr);
}
Intern::~Intern(){}