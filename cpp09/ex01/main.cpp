#include "RPN.hpp"

int main(int ac, char** av)
{

	if (ac != 2)
	{
		std::cerr << "Invalid Arguments! " <<std::endl;
		return (-1);
	}
	try
	{
		RPN s(av[1]);
		s.get_operation_Stack();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}