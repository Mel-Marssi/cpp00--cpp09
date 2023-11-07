#pragma once

#include <iostream>
#include <iomanip>
#include <climits>
#include <cmath>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter &copy);
    ScalarConverter &operator=(ScalarConverter &copy);
    ~ScalarConverter();
public:
    static void  convert(std::string &ref);
};

bool check_string(std::string &ref);
bool is_it_float(std::string &ref);
bool is_it_double(std::string &ref);
bool is_it_int(std::string &ref);