#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"



int main()
{
	AForm* rrf = NULL;

	try
	{
	 	Bureaucrat a("Bureaucra_1", 1);// ,d("Bureaucrat_2", 150);

		Intern someRandomIntern;
		
		rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
		rrf->beSigned(a);
		a.executeForm(*rrf);
		delete  rrf;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		if (rrf != NULL) 
            delete rrf;
	}
	return (0);
}