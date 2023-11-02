#pragma once

#include "AForm.hpp"

class  PresidentialPardonForm: public AForm
{
	private:
		std::string target;
	public:
	 PresidentialPardonForm();
	 PresidentialPardonForm(std::string name);
	 PresidentialPardonForm( PresidentialPardonForm &copy);
	 PresidentialPardonForm &operator=( PresidentialPardonForm &copy);
	void execute(Bureaucrat const &executor)const ;
	~ PresidentialPardonForm();
};

