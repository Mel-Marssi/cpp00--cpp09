#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal &copy);
		Animal &operator=(Animal &copy);
		virtual void makeSound() const;
		std::string getType() const;
		virtual ~Animal();
};
