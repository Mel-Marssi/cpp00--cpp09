#pragma once

#include <iostream>

class Brain
{
	private:
		std::string  ideas[100];
	public:
		
		Brain();
		Brain(Brain &copy);
		Brain &operator=(Brain &copy);
		~Brain();
};
