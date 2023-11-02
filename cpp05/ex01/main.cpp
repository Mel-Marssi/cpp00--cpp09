#include "Bureaucrat.hpp"


int main()
{
	try
	{
		Bureaucrat a("Robert", 1), c("Alex", 4);
		Form e("BOSS", 110, 1);
		Form b(e);

		e.beSigned(a);
		a.signForm(e);
		b.beSigned(c);
		c.signForm(b);
		std::cout << a << c << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}