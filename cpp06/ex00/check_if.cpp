#include "ScalarConverter.hpp"

bool is_it_float(std::string &ref)
{
    int i=0;
    int point = 0;
    while (ref[i])
    {
        if (ref[0] == '-' || ref[0] == '+')
            i++;
        if (isdigit(ref[i]))
            i++;
        else if (ref[i] == '.' && ref[i + 1])
        {    
            i++;
            point++;
        }
        else
         break;
    }
    if(ref[i] == 'f' && ref[i + 1] == 0 &&  point == 1)
        return (true);
    return (false);
}

bool is_it_double(std::string &ref)
{
    int i=0;
    int point = 0;
    while (ref[i])
    {
        if (ref[0] == '-' || ref[0] == '+')
            i++;
        if (isdigit(ref[i]))
            i++;
        else if (ref[i] == '.' && ref[i + 1])
        {    
            i++;
            point++;
        }
        else
            break;
    }
    if(point == 1 && ref[i] == 0)
        return (true);
    return (false);
    
}

bool is_it_int(std::string &ref)
{
    int i = 0;
    while (ref[i])
    {
        if (ref[0] == '-' || ref[0] == '+')
            i++;
        if (isdigit(ref[i]))
            i++;
        else
            return (false);
    }
    return (true);
}

bool check_string(std::string &ref)
{
    bool x = false;
    if (is_it_float(ref) || ref == "-inff" || ref == "+inff" || ref == "nanf")
       x = (true);
    else if (is_it_double(ref) || ref == "-inf" || ref == "+inf" || ref == "nan")
         x = (true);
    else if (is_it_int(ref))
         x = (true);
    else if (!isdigit(ref[0]) && ref.length() == 1)
         x = (true);
    else
    {
       std::cout << "Invalid string !!" <<std::endl;
        x = (false);
    }
    return (x);
}
