#include "FileOpen.hpp"

void open_file_input(char **av)
{
	std::string str2, line;
	const std::string str = av[1], src = av[2], dst = av[3];
	std::ifstream 	fd;
	std::ofstream fd2;
	size_t	pos = 0;
	int i = 0;

	str2 = str + ".replace";
	fd.open(str.c_str());
	fd2.open(str2.c_str());	
	if (!fd.is_open() || !fd2.is_open())
	{
		std::cout << "Error during file opening." << std::endl;
		return ;
	}

	std::getline(fd, line, '\0');
		while (i < (int )line.length() && !src.empty())
		{
			pos = line.find(src.c_str(),i);
			if (pos != std::string::npos)
			{	
				line.erase(pos, src.length());
				line.insert(pos, dst);
			}
			else if (pos == std::string::npos)
				break ;
			i = pos + dst.length();
		}
	fd2 << line << std::endl;
	return ;
}
