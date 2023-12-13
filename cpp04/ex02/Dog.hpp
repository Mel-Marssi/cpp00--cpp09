#pragma once

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
	private:
		Brain *ptr;
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		void makeSound() const;
		~Dog();
};
