#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter &copy){(void)copy;}
ScalarConverter &ScalarConverter::operator=(ScalarConverter &copy)
{
    (void )copy;
    return (*this);
}

void is_char(std::string &ref)
{ 
     int x = static_cast<int>(ref[0]);
     double z = static_cast<double>(ref[0]);
     float y = static_cast<float>(ref[0]);

        std::cout << "Char : " << ref[0] << std::endl;
        std::cout << "Int : " << x << std::endl;
        std::cout << std::fixed << std::setprecision(1) << "float: " << y << "f" << std::endl;
        std::cout << "Double : " << z <<std::endl;
    
}

void is_float(std::string &ref)
{
    int x = atoi(ref.c_str());
    float y = atof(ref.c_str());
    double z = static_cast<double>(y);
    char c=static_cast<char>(x);

        if (!isascii(x))
            std::cout <<  "Char out of ASCII Table" << std::endl;

        else if (isprint(c))
                std::cout << "Char : '" << c <<"'" << std::endl;
        else if (ref == "-inf" || ref == "+inf" || ref == "nan")
            std::cout << "Char: impossible" <<std::endl;
        else
            std::cout << "Char: Non diplayable" <<std::endl;
        if (ref == "-inf" || ref == "+inf" || ref == "nan")
            std::cout << "Int : " << "impossible" << std::endl;
        else
            std::cout << "Int : " << x << std::endl;
        std::cout << std::fixed << std::setprecision(2) << "float: " << y << "f" << std::endl;
        std::cout << "Double : " << z <<std::endl;
}

void is_double(std::string &ref)
{
    int x = atoi(ref.c_str());
    double z = atof(ref.c_str());
    float y = static_cast<float>(z);
    char c = static_cast<char>(x);

        if (!isascii(x))
            std::cout <<  "Char out of ASCII Table" << std::endl;

        else if (isprint(c))
                std::cout << "Char : '" << c << "'"<<std::endl;
        else if (ref == "-inf" || ref == "+inf" || ref == "nan")
            std::cout << "Char: impossible" <<std::endl;
        else
            std::cout << "Char: Non diplayable" <<std::endl;
        if (ref == "-inf" || ref == "+inf" || ref == "nan")
            std::cout << "Int : " << "impossible" << std::endl;
        else
            std::cout << "Int : " << x << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "float: " << y << "f" << std::endl;
    std::cout << "Double : " << z <<std::endl;
}

void is_int(std::string &ref)
{
    int x1;
    long long x = atoi(ref.c_str());
    double z = atof(ref.c_str());
    float y = static_cast<float>(x);
    char c = static_cast<char>(x);

    if (!isascii(x))
        std::cout <<  "Char out of ASCII Table" << std::endl;
    else if (isprint(c))
        std::cout << "Char : '" << c << "'" << std::endl;
    else
         std::cout << "Char: Non diplayable" <<std::endl;

    if (x > INT_MAX || x < INT_MIN)
        std::cout << "Int : " << "Out of the intiger range !" << std::endl;
    else
    {
        x1 = static_cast<int>(x);
        std::cout << "Int : " << x1 << std::endl;
    }
    std::cout << std::fixed << std::setprecision(2) << "float: " << y << "f" << std::endl;
    std::cout << "Double : " << z <<std::endl;   
}

void ScalarConverter::convert(std::string &ref)
{
    if (is_it_float(ref) || ref == "-inff" || ref == "+inff" || ref == "nanf")
       is_float(ref);
    else if (is_it_double(ref) || ref == "-inf" || ref == "+inf" || ref == "nan")
        is_double(ref);
    else if (is_it_int(ref))
        is_int(ref);
    else if (!isdigit(ref[0]) && ref.length() == 1)
        is_char(ref);
}