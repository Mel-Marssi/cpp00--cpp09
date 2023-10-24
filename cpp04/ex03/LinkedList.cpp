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
	Tdata::Ldata(Ldata &copy){
		*this = copy;
	}
	
	 Tdata &Tdata::operator=(Ldata &copy){
		data = copy.data;
		next = NULL;
		return *this;
	}
/*****************/
LinkedList::LinkedList()
{
	head = NULL;
}

LinkedList::LinkedList(LinkedList &copy)
{
	*this = copy;
}

LinkedList &LinkedList::operator=(LinkedList &copy)
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