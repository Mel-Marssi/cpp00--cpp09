#include "iter.hpp"



int main()
{
    std::string *ptr = new std::string[10];
       ptr[0] = "str";
    int *ntr = new int[10];
       ntr[0] = 10;
    float *str = new float[10];
       str[0] = 2.25f; 
    std::string dst;
    if(!std::getline(std::cin, dst))
        return 0;
    if (dst == "int")
    {
            iter(ntr, 10, inter);
                    for (int i = 0; i < 10; i++)
            std::cout << ntr[i] << " | ";
    }
    else if (dst == "float")
    {   
        iter (str, 10, inter);
            for (int i = 0; i < 10; i++)
            std::cout << str[i] << " | ";
    }
    else
    {
            iter(ptr, 10 , inter);
            for (int i = 0; i < 10; i++)
            std::cout << ptr[i] << " | ";
    }
    delete[] ptr;
    delete[] ntr;
    delete[] str;
}