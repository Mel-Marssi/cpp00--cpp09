#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure &copy);
		Cure &operator=(Cure &copy);
		AMateria *clone() const;
		void use(ICharacter& target);
		~Cure();
};
