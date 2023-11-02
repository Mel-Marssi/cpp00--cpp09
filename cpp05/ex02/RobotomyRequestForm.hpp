#pragma once

#include "AForm.hpp"
#include <cstdlib>

class  RobotomyRequestForm: public AForm
{
	private:
		std::string target;
	public:
	 RobotomyRequestForm();
	 RobotomyRequestForm(std::string name);
	 RobotomyRequestForm( RobotomyRequestForm &copy);
	 RobotomyRequestForm &operator=( RobotomyRequestForm &copy);
	void execute(Bureaucrat const &executor)const ;
	~ RobotomyRequestForm();
};


