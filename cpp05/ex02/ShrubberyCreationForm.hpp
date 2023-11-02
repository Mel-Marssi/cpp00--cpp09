#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &copy);
		void execute(Bureaucrat const &executor)const ;
		~ShrubberyCreationForm();
};

