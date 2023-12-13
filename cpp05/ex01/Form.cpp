#include "Form.hpp"


Form::Form() :name("Egalisation"), Grade_to_sign(1),Grade_to_execute(5)
{
	is_it_signed = false;
}

Form::Form(std::string nom, int a, int b):name(nom), Grade_to_sign(a), Grade_to_execute(b)
{
	is_it_signed = false;
	if (Grade_to_sign< 1  || Grade_to_execute < 1)
		throw (GradeTooHighException());
	else if (Grade_to_sign > 150 || Grade_to_execute > 150)
		throw (GradeTooLowException());
}

Form::Form(const Form &copy): name(copy.name), Grade_to_sign(copy.Grade_to_sign), Grade_to_execute(copy.Grade_to_execute)
{
	(*this) = copy;
}


Form &Form::operator=(const Form &copy)
{
	this->is_it_signed = copy.is_it_signed;
	return (*this);
}

void Form::beSigned(Bureaucrat &emp)
{
	if (emp.getGrade()  <= Grade_to_sign)
		is_it_signed = true;
	else
		throw(GradeTooLowException());

}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!!!!\n");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High!!!!\n");
}


bool Form::get_signed() const
{return (is_it_signed);}

const std::string Form::getName() const
{return (name);}

 int Form::getGradeSign() const
{return (Grade_to_sign);}

 int Form::getGradeExecute() const
{return (Grade_to_execute);}

std::ostream &operator<<(std::ostream &op,const Form &bur){
	op << bur.getName() << bur.get_signed() << bur.getGradeSign() << bur.getGradeExecute() << std::endl;
	return (op);
}

Form::~Form()
{}