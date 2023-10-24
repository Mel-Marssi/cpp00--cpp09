#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *ptr;
	public:
		Cat();
		Cat(Cat &copy);
		Cat &operator=(Cat &copy);
		void makeSound() const;
		~Cat();
};

