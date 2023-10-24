#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>


class Contact{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string	number;
		std::string secret;
	public:
		void	get_data();
		void	table_contact();
		void	table_attribute(int id);
		void	personal_attr(int id);
};

#endif