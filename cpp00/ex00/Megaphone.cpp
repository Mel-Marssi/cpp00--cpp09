#include<string>
#include <iostream>
#include <iomanip>

int main(int ac, char **av)
{
	std::string str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{
	for(int a=1; a < ac; a++)
		str += av[a];
	for (int i = 0 ; i < (int)str.length(); i++)
    	std::cout << (char)toupper(str[i]);		
	}
	return (0);
}