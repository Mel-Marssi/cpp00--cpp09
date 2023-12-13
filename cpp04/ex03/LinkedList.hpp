#pragma once

#include "AMateria.hpp"
class AMateria;


typedef struct Ldata{
	AMateria *data;
	struct Ldata *next;
	Ldata();
	Ldata(const Ldata &copy);
	Ldata &operator=(const Ldata &copy);
}Tdata;

Tdata *materia_data(AMateria *m);

class LinkedList
{
	
	public:
		Tdata *head;
		LinkedList();
		LinkedList(const LinkedList &copy);
		LinkedList &operator=(const LinkedList &copy);
		void insert(Tdata *new_data);
		~LinkedList();
};

