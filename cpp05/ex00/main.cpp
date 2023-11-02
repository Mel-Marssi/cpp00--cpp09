#include "Bureaucrat.hpp"



int main()
{
	try
	{
		Bureaucrat a, c;
		a.IncrementGrade();
		std::cout << a;
		for (int i = 10; i< 160;i++)
			c.DecrementGrade();
		std::cout <<"~Bureauuuuuuuucraaaaat~!!!!!!!!" <<std::endl;
		a.DecrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}