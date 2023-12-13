#include "Character.hpp"


Character::Character()
{
	for(int i=0; i < 4;i++)
		slots[i] = NULL;
}

Character::Character(std::string name)
{
	this->name = name;
	for(int i=0; i < 4;i++)
		slots[i] = NULL;
}

Character::Character(const Character &copy)
{
	for(int i=0; i < 4;i++)
		slots[i] = NULL;
	(*this) = copy;
}

std::string const &Character::getName() const
{
	return(name);
}
void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (slots[i] == NULL)
		{
			slots[i] = m;
			break ;
		}
	}
	node.insert(materia_data(m));
}
void Character::unequip(int idx)
{
	if (idx > 4 || idx < 0)
		return ;
	node.insert(materia_data(slots[idx]));
	slots[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (idx == i && slots[i] != NULL)
		{
			slots[i]->use(target);
		}
	}
}

Character &Character::operator=(const Character &copy)
{
	for(int i = 0; i < 4 ; i++)
	{
		if(slots[i] != NULL)
		{		
			delete slots[i];
			slots[i] = NULL;
		}
		if (copy.slots[i] != NULL)
			slots[i] = copy.slots[i]->clone();
	}
	return (*this);
}

void Character::FreeLinked(LinkedList node)
{
	Tdata *tmp;

	while(node.head != NULL)
	{
		tmp = node.head->next;
		delete node.head->data;
		delete node.head;
		node.head = tmp;
	}
}

Character::~Character()
{
	FreeLinked(node);
}
