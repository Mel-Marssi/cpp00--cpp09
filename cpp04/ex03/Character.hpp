#pragma once

#include "ICharacter.hpp"


class Character : public ICharacter
{
	private:
		AMateria *slots[4];
		std::string name;
		LinkedList node;
	public:
		Character();
		Character(std::string name);
		Character(const Character &copy);
		Character &operator=(const Character &copy);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void FreeLinked(LinkedList node);
		~Character();
};
