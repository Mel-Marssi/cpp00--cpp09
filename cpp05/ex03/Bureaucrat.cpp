#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :name("Employee")
{
	grade = 10;
	if (grade<1 )
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(std::string nam, int gr) :name(nam)
{
	grade = gr;
	if (grade<1 )
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	(*this) = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
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


void Bureaucrat::signAForm(AForm &sig)
{
	if (sig.get_signed())
		std::cout << name << " signed " << sig.getName() <<std::endl;
	else
		std::cout << name << " couldn't sign " << sig.getName() << " because  of Invalid Grade" << std::endl;
}

void Bureaucrat::executeForm(AForm const &form)
{
	try{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() <<std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << name << " couldn't execute  " << form.getName() <<std::endl;
	}
	
}

Bureaucrat::~Bureaucrat()
{

}