#include "PhoneBook.hpp"



void PhoneBook::add(int *id, int *index)
{
	if ((*id) > 7)
	 	(*id) = 0;
	else if ((*index) <= 7)
		(*index)++;
	PhoneBook::book[(*id)].get_data();
	(*id)++;
}


void PhoneBook::show_all(int id)
{
	std::string a;
	int num;

	if (id == 0)
	{
		std::cout << "No contact saved yet!" << std::endl;
		return ;
	}
	else
	{
		PhoneBook::book[0].table_contact();
		for (int i=0 ; i < id; i++)
		{
			PhoneBook::book[i].table_attribute(i);
		}
		std::cout <<"Choose index to search for: " <<std::endl;
		if (!std::getline(std::cin, a))
			exit(-1);
		num = std::atoi(a.c_str());
		if (num <= 0 || num > 8 || num > id)
			std::cout << "Index not found!"<<std::endl;
		else
			PhoneBook::book[num-1].personal_attr(num-1);
	}
}
int main()
{

	PhoneBook iPhone;
	std::string	op;
	int			id=0;
	int			index=0;

	while (1)
	{
		std::cout << std::setw(30) << "\033[31m\\Welcome to PhoneBook/\033[0m" << std::endl;
		std::cout << "*Put ADD to add a contact.\n*Put SEARCH to search for a contact.\n*Put EXIT to Quit." << std::endl;
		if (!std::getline(std::cin, op))
			break;
		if (op != "ADD" && op != "SEARCH" && op != "EXIT" && op != "")
			std::cout << "Please use one of THE following command:\nADD or SEARCH or EXIT"<< std::endl;
		else if (op == "ADD")
			iPhone.add(&id, &index);
		else if (op == "SEARCH")
			iPhone.show_all(index);
		else if (op == "EXIT")
			break ;
	}
}