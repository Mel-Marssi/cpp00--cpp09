#pragma once

#include "AMateria.hpp"
class AMateria;


typedef struct Ldata{
	AMateria *data;
	struct Ldata *next;
	Ldata();
	Ldata(Ldata &copy);
	Ldata &operator=(Ldata &copy);
}Tdata;

Tdata *materia_data(AMateria *m);

class LinkedList
{
	
	public:
		Tdata *head;
		LinkedList();
		LinkedList(LinkedList &copy);
		LinkedList &operator=(LinkedList &copy);
		void insert(Tdata *new_data);
		~LinkedList();
};

