#include"ScalarConverter.hpp"



int main(int ac, char**av)
{

  if (ac != 2)
    return (0);
std::string str = av[1];
    if (check_string(str) == true)
        ScalarConverter::convert(str);
}