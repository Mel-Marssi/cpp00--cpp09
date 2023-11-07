#include "Serializer.hpp"

int main()
{

    Data *ptr, *str;
    ptr = new Data();
    ptr->a = 55;
    ptr->str = "Mourad";

    uintptr_t sd;

    sd = Serializer::serialize(ptr);
    std::cout << sd << " " << ptr <<std::endl;

    str  = Serializer::deserialize(sd);
    std::cout << str->a << "  " << str->str <<std::endl; 
    delete ptr;
}