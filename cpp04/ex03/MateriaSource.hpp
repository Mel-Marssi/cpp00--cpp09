#pragma once

#include "IMateriaSource.hpp"
#include "LinkedList.hpp"


class MateriaSource: public IMateriaSource
{
	private:
		AMateria *slots[4];
		LinkedList node;
	public:
		MateriaSource();
		MateriaSource(MateriaSource &copy);
		MateriaSource &operator=(MateriaSource &copy);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
		void FreeLinked(LinkedList node);
		~MateriaSource();
};
