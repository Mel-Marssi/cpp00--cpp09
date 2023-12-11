#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(char *infile): DataBase_fd("data.csv"), DataText_fd(infile)
{
	std::string file, key, value;

	int i = 0, flag = 0;
	if (!DataBase_fd.is_open() || !DataText_fd.is_open())
		throw (std::runtime_error("Failed to load files"));
	while (std::getline(DataBase_fd, file))
	{
		if (file != "date,exchange_rate" && !file.empty())
		{
			key.insert(0, file, 0, 10);
			value.insert(0, file, 11, file.find('\n',11));
			wallet[key] = value;
			key.clear();
			value.clear();
		}
		file.clear();
	}
	while (std::getline(DataText_fd, file))
	{
		if (flag == 0 && file != "date | value")
		{
			std::cerr << "Missing the header \"date | value\"" <<std::endl;
			flag++;
		}
		else if (file == "date | value")
		{
			flag++;
			continue;
		}
		if (flag != 0)
		{
			if (file.size() <= 10)
			{
				key.insert(0, file, 0, file.size());
			}
			else if (file.size() >= 13)
			{
				key.insert(0, file, 0, file.find(' ',0));
				value.insert(0, file, 12, file.find('\n',12));
			}
			File_Wallet[i++] = std::make_pair(key, value);
			key.clear();
			value.clear();
		}
	}
}

bool check_atof(std::string value)
{
	int point = 0;
	for(unsigned long i=0; i < value.size(); i++)
	{
		if (value[i] == '-' && i ==0)
			i++;
		if ((value[i] < '0' || value[i] > '9') && value[i] != ' ' && value[i] != '.')
		{	
			std::cerr << "Error: bad value. " <<std::endl;
			return false;
		}
		else if (value[i] == '.' && i > 1)
		{
			point++;
			if (value[i -1] < '0' || value[i - 1] > '9' || point > 1 
				|| ((i < value.size() && ( value[i + 1] < '0' || value[i + 1] > '9'))))
			{
				std::cerr << "Error: bad value. " <<std::endl;
				return false;
			}
		}
	}
	return (true);
}

bool BitcoinExchange::string_to_date(std::string time)
{
	date x;
	x.year = atoi(strtok((char *)time.c_str(), "-"));
	x.month = atoi(strtok((char *)&time.c_str()[5], "-"));
	x.day = atoi(strtok((char *)&time.c_str()[8], "-"));
	
	 if ((x.year % 4 == 0 && x.year % 100 != 0) || (x.year % 400 == 0))
	 {
		if (x.month == 2 && x.day > 29)
			return false;
		if (x.month%2 == 0 && x.day > 30)
			return false;
	 }
	 else if ((x.month == 2 && x.day > 28) || (x.month%2 == 0 && x.day > 30))
	 	return false;
	return true;
}

bool BitcoinExchange::check_Data(Map2_Iter &it)
{
	std::string date = it->second.first;
	std::string value = it->second.second;
	struct tm time;
	float x;

    if (strptime(date.c_str(), "%Y-%m-%d", &time) == NULL)
	{
        std::cerr << "Error: bad input => " << it->second.first << std::endl;
        return false;
    }
	else if (string_to_date(date) == false)
		{
        std::cerr << "Error: bad input => " << it->second.first << std::endl;
        return false;
    }
//2020-02-31
	if(!check_atof(value))
		return false;
	x = atof(value.c_str());
	if (x < 0)
	{
		std::cerr << "Error: not a positive number."<<std::endl;
		return (false);
	}
	if (x > 1000)
	{
		std::cerr << "Error: too large a number."<<std::endl;
		return (false);
	}


	return true;
}

void BitcoinExchange::search() 
{
	Map_Iter it_f;
	Map2_Iter it_2 = File_Wallet.begin();
	Map_rev i = wallet.rbegin();

	float x,y;

	while (it_2 != File_Wallet.end())
	{
		if (!check_Data(it_2))
		{
			it_2++;
			continue ;
		}
		it_f = wallet.lower_bound(it_2->second.first);
		if ((it_f != wallet.end()) && it_f->first > it_2->second.first)
			it_f--;
		x = atof(it_f->second.c_str());
		y = atof(it_2->second.second.c_str());
		if (it_2->second.first > i->first)
		{
			x = atof(i->second.c_str());
			std::cout  << std::fixed << std::setprecision(2) << it_2->second.first << " => " << it_2->second.second << " = " << x * y <<std::endl;
		}
		else
			std::cout  << std::fixed << std::setprecision(2) << it_2->second.first << " => " << it_2->second.second << " = " << x * y <<std::endl;
		it_2++;
	}
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	(*this) = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy)
{
	wallet = copy.wallet;
	return(*this);
}

BitcoinExchange::~BitcoinExchange(){}


