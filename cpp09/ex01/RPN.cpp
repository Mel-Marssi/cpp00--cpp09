#include "RPN.hpp"


RPN::RPN()
{
}

void RPN::get_operation_Stack()
{
	int  op = 0;
	for(unsigned long i = 0; i  < operation.size(); i++)
	{
		op = (operation[i] == '*' ) * 1 + (operation[i] == '/' ) * 2 + (operation[i] == '+' ) * 3 + (operation[i] == '-' ) * 4;

		if (operation[i] >= '0' && operation[i] <='9' && (operation[i + 1] == '\0' || operation[i + 1] == ' '))
			stack.push_front(operation[i] - 48);
		else if (operation[i] != '*'&& operation[i] != '/' && operation[i] != '+' && operation[i] != '-'&& operation[i] != ' ')
			throw std::runtime_error("Error");
		if ((operation[i] == '*'|| operation[i] == '/' || operation[i] == '+' || operation[i] == '-') && stack.size() <= 1)
			throw std::runtime_error("Error");
		if (op != 0 && stack.size() > 1)
		{
			iterator it = stack.begin();
			iterator next = it;
       		next++;
			switch (op)
			{
				case 1:
       				*next *= *it;
					stack.pop_front();
					break;
				case 2:
					if (*it != 0)
						*(next) /= *it;
					else
						throw std::logic_error("devide by 0");
					stack.pop_front();
					break;
				case 3:
					*(next) += (*it);
					stack.pop_front();
					break;
				case 4:
					*(next) -= (*it);
					stack.pop_front();
					break;
				default:
					break;
			}
		}
	}
	if (stack.size() != 1)
		throw std::runtime_error("Error");
	iterator a = stack.begin();
	std::cout << *a << std::endl;
	
}

RPN::RPN(std::string const &ref):operation(ref)
{
}
RPN::RPN(const RPN &copy)
{
	(*this) = copy;
}
RPN &RPN::operator=(const RPN& copy)
{
	operation = copy.operation;
	stack = copy.stack;
	return (*this);
}

RPN::~RPN()
{
}
