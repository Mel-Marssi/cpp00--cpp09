#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat a("Bureaucra_1", 1) ,d("Bureaucrat_2", 150);
		ShrubberyCreationForm b("Home");
		RobotomyRequestForm c("Robert");
		RobotomyRequestForm c_01("Alex");
		PresidentialPardonForm x("President");

		b.beSigned(a);
		c.beSigned(a);
		c_01.beSigned(a);
		x.beSigned(a);

a.executeForm(b);
a.executeForm(c);
a.executeForm(c_01);
a.executeForm(c);
a.executeForm(c_01);
a.executeForm(c);
a.executeForm(x);
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}