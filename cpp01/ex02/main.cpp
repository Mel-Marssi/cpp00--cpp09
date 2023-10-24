#include <iostream>

int main()
{
	std::string	string="HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string &stringREF = string;
std::cout << "The adresse value of : " << std::endl;
	std::cout << "String : " << &string << std::endl;
	std::cout << "String Pointer : " << stringPTR << std::endl;
	//std::cout << "String Pointer : " << &stringPTR << std::endl;
	std::cout << "String reference : " << &stringREF << std::endl;
	//string = "!OOPS MY BRAIN.";
std::cout << "The value of : " << std::endl;
	std::cout << "String : " << string << std::endl;
	std::cout << "String Pointer : " << *stringPTR << std::endl;
	std::cout << "String reference : " << stringREF << std::endl;
}