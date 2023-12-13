#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		virtual void makeSound() const = 0;
		std::string getType() const;
		virtual ~Animal();
};
