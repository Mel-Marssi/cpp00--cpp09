#pragma once

#include <iostream>
#include<exception>
#include <sys/time.h>
#include <cstdlib>
#include <ctime>

class Base
{
    public:
        Base();
       
        virtual ~Base();
};

 Base *generate();
 void identify(Base* p);
 void identify(Base& p);