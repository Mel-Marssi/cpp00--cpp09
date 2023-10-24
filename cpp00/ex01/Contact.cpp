#include "Contact.hpp"

int string_is_digit(std::string num)
{
	for (int i=0; i < (int)num.length();i++)
	{
		if (std::isdigit(num[i]) == 0)
		{	
			std::cout << "A phone number cannot contain characters or anything other than digits "<<std::endl;
			return (1);
		}
	}
	return (0);
}

std::string set_data(std::string message)
{
	 std::string data;

	while (1)
	{
		std::cout << message;
		if (!std::getline(std::cin , data))
			exit(-1);

		if (data.empty())
		{	
			std::cout << "/Please make sur to fill it right\\" << std::endl;
			continue;
		}
		if (message == "Number: " && string_is_digit(data) == 1)
			continue;			
		break ;
	}
	return (data);
}

void Contact::get_data()
{
	Contact::first_name = set_data("First name: ");
	Contact::last_name= set_data("Last name: ");
	Contact::nick_name=set_data("Nickname: ");
	Contact::number=set_data("Number: ");
	Contact::secret=set_data("Darkest secret: ");
}

void put_in_order(std::string att)
{
	if (att.length() < 10)
		std::cout << std::setw(10) << att <<"|";
	else if (att.length() >= 10)
		std::cout << std::setw(9) << att.substr(0,9) <<"."<<"|";	
}
void Contact::table_attribute(int id)
{
	std::cout << "|" << std::setw(10) << id+1 << "|" ;
	put_in_order(Contact::first_name);
	put_in_order(Contact::last_name);
	put_in_order(Contact::nick_name);
	std::cout << std::endl;
}
void Contact::table_contact()
{
	std::cout<< std::right << "|" << std::setw(10) << "     Index|" << std::setw(10) << "First name|" << std::setw(10) << " Last name|" << std::setw(10) << "  Nickname|"<< std::endl;
}

void Contact::personal_attr(int id)
{
	std::cout << ">> Index          :" << id + 1 <<std::endl;
	std::cout << ">> First name     :"<< Contact::first_name << std::endl;
	std::cout << ">> Last name      :" << Contact::last_name << std::endl;
	std::cout << ">> Nickname       :" << Contact::nick_name << std::endl;
	std::cout << ">> Phone number   :" << Contact::number << std::endl;
	std::cout << ">> Darkest secret :" << Contact::secret << std::endl;
}