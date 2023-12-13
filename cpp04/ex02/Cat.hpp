#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *ptr;
	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);
		void makeSound() const;
		~Cat();
};