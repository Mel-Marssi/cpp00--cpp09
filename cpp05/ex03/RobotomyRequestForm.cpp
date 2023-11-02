#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Shrubbery", 72, 45)
{
    struct timeval currentTime;

		target ="Home";
	
		gettimeofday(&currentTime, NULL);

		srand(currentTime.tv_usec + currentTime.tv_sec);
		
}


RobotomyRequestForm::RobotomyRequestForm(std::string name): AForm("Shrubbery", 72, 45)
{
    struct timeval currentTime;
    
		gettimeofday(&currentTime, NULL);

		srand(currentTime.tv_usec + currentTime.tv_sec);
		
		target = name;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) :AForm(copy)
{
	*this =  copy;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (get_signed() && executor.getGrade() <= getGradeExecute())
	{
		std::cout << "Drilliiiiing Noises~!~!~!~!" <<std::endl;
		if (rand()%2 == 0)
			std::cout << target << " has been robotomized successfully " <<std::endl;
		else
			std::cout << target << "  the robotomy failed. " <<std::endl;
	}
	else
		throw(GradeTooLowException());
}


RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &copy)
{
	target = copy.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}