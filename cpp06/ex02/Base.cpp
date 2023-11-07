#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(){}
Base::~Base(){}



Base *generate()
{
    struct timeval currentTime;
	
	gettimeofday(&currentTime, NULL);
    srand(currentTime.tv_usec + currentTime.tv_sec);
    
    int x = rand()%3;

    if (x == 0)
        return (new A());
    else if (x == 1)
        return (new B());
    else
        return (new C());
}

void identify(Base* p)
{
    Base *tmp;

    tmp=dynamic_cast<A *>(p);
    if (tmp != NULL)
    {     
        std::cout << " the object pointed to by p: \"A\"" <<std::endl;
        return ;
    }
    tmp = dynamic_cast<B *>(p);
    if (tmp != NULL)
    {    
         std::cout << " the object pointed to by p: \"B\"" <<std::endl;
         return ;
    }
    tmp = dynamic_cast<C *>(p);
    if (tmp != NULL)
    {    
         std::cout << " the object pointed to by p: \"C\"" <<std::endl;
         return ;
    }
    std::cout << "Unknown "<<std::endl;
}

void identify(Base& p)
{
    Base tmp;
    try
    {
        tmp = dynamic_cast<A &>(p);
        std::cout << "&ref the object pointed to by p: \"A\"" <<std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            tmp = dynamic_cast<B &>(p);
            std::cout << "&ref the object pointed to by p: \"B\"" <<std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                tmp = dynamic_cast<C &>(p);
                std::cout << "&ref the object pointed to by p: \"C\"" <<std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << "Unknown "<<std::endl;
            }
            
        }
        
    }
    
}
