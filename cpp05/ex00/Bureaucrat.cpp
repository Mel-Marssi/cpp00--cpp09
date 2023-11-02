#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :name("Employee")
{
	grade = 10;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy): name(copy.name)
{
	(*this) = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &copy)
{
	this->grade = copy.grade;
	return(*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{ 
	return ("Grade Too High!!!!\n");
}

const std::string Bureaucrat::getName()const
{
	return (name);
}

int  Bureaucrat::getGrade() const
{
	return(grade);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!!!!\n");
}

void Bureaucrat::IncrementGrade()
{
	grade--;
		
	if(grade < 1)
		throw(GradeTooHighException());
	
}
void Bureaucrat::DecrementGrade()
{
	grade++;
	if (grade > 150)
		throw(GradeTooLowException());
}
std::ostream &operator<<(std::ostream &op,const Bureaucrat &bur)
{
	op << bur.getName() <<" Bureaucrat Grade " << bur.getGrade() << std::endl;
	return(op);
}


Bureaucrat::~Bureaucrat()
{

}