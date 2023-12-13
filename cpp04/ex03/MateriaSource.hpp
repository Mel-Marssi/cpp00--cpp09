#pragma once

#include "IMateriaSource.hpp"
#include "LinkedList.hpp"


class MateriaSource: public IMateriaSource
{
	private:
		AMateria *slots[4];
		static LinkedList node;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &copy);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
		void FreeLinked(LinkedList node);
		~MateriaSource();
};
