#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstring>


typedef std::map<std::string , std::string>::iterator Map_Iter;
typedef std::map<int , std::pair<std::string, std::string> >::iterator Map2_Iter;
typedef std::map<std::string , std::string>::reverse_iterator Map_rev;
typedef struct date
{
	int year;
	int month;
	int day;
}date;

class BitcoinExchange
{
	private:
		std::ifstream DataBase_fd, DataText_fd;
		std::map<std::string ,std::string> wallet;
		std::map<int , std::pair<std::string, std::string> > File_Wallet;
	public:
		BitcoinExchange();
		BitcoinExchange(char *infile);
		BitcoinExchange(BitcoinExchange const &copy);
		bool check_Data(Map2_Iter &it);
		bool string_to_date(std::string time);
		void search() ;
		BitcoinExchange &operator=(BitcoinExchange const &copy);
		~BitcoinExchange();
};
