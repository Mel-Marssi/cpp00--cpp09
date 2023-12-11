#pragma once

#include <list>
#include <iostream>
#include <cmath>
#include <iterator>
#include <cstring>

typedef std::list<int>::iterator iterator;
class RPN
{
	private:
		std::list<int> stack;
		std::string 	operation;
	public:
		RPN();
		RPN(std::string const &ref);
		RPN(const RPN &copy);
		RPN &operator=(const RPN &copy);
		void get_operation_Stack();
		~RPN();
};

