#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Shrubbery", 25, 5)
{
	target = "Home";
}


PresidentialPardonForm::PresidentialPardonForm(std::string name): AForm("Shrubbery", 25, 5)
{
	target = name;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) :AForm(copy)
{
	*this =  copy;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (get_signed() && executor.getGrade() <= getGradeExecute())
	{
		std::cout << target << " has been pardoned by Zaphod Beeblebrox " <<std::endl;
	}
	else
		throw(GradeTooLowException());

}


PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &copy)
{
	target = copy.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}