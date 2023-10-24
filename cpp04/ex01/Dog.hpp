#pragma once

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
	private:
		Brain *ptr;
	public:
		Dog();
		Dog(Dog &copy);
		Dog &operator=(Dog &copy);
		void makeSound() const;
		~Dog();
};
