#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalid Input !" <<std::endl;
		return(1);
	}
	try
	{
		BitcoinExchange P_Wallet(av[1]);
		P_Wallet.search();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
