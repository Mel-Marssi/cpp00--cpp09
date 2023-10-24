#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact book[8];
	public:
		void add(int *id, int *index);
		void show_all(int id);
};

#endif