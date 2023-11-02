#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
	public:
		Intern();
		Intern(Intern &copy);
		Intern &operator=(Intern &copy);
		~Intern();
		AForm *makeForm(std::string className, std::string targetName);
		class RequestNotValid:public std::exception
		{
			const char* what() const throw();
		};
};

