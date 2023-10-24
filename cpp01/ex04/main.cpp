#include "FileOpen.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	open_file_input(av);
}