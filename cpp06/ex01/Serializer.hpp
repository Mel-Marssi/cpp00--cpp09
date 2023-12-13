#pragma once

#include <iostream>
#include <fstream>
#include <stdint.h>
#include<cstdlib>
#include <climits>
typedef struct AData
{
    int a;
    std::string str;
}Data;


class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &copy);
        Serializer &operator=(const Serializer &copy);
        ~Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

