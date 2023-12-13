#include "MateriaSource.hpp"

LinkedList MateriaSource::node;

MateriaSource::MateriaSource()
{
	for(int i=0 ; i<4 ; i++)
		slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	(*this) = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
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

void MateriaSource::learnMateria(AMateria *m)
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

void MateriaSource::FreeLinked(LinkedList node)
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

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for(int i= 0; i<4 ; i++)
	{
		if (slots[i] && slots[i]->getType() == type)
		{
			return (slots[i]->clone());
		}
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	//FreeLinked(node); //static member doesn't need to bee freed."data segment..."
}
