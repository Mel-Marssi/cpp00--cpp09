#include "LinkedList.hpp"

Tdata *materia_data(AMateria *m)
{
	Tdata *data = new Tdata;
	data->data = m;
	data->next = NULL;
	return(data);
}
/*Struct Function*/
	Tdata::Ldata(){
		data = NULL;
		next = NULL;
	}
	Tdata::Ldata(const Ldata &copy){
		*this = copy;
	}
	
	 Tdata &Tdata::operator=(const Ldata &copy){
		data = copy.data;
		next = NULL;
		return *this;
	}
/*****************/
LinkedList::LinkedList()
{
	head = NULL;
}

LinkedList::LinkedList(const LinkedList &copy)
{
	*this = copy;
}

LinkedList &LinkedList::operator=(const LinkedList &copy)
{
	this->head = copy.head;
	return (*this);
}

void LinkedList::insert(Tdata *new_data)
{
	Tdata *tmp;
	tmp = head;
	while (tmp)
	{
		if (tmp->data == new_data->data)
		{
			delete new_data;
			return ;
		}
		tmp = tmp->next;
	}
	new_data->next =  this->head;
	this->head = new_data;
}

LinkedList::~LinkedList()
{
}