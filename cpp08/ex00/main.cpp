#include "easyfind.hpp"


int main(){
    try
    {
        std::vector<int> myVector; 
        myVector.push_back(10);
        myVector.push_back(20);
        myVector.push_back(30);
        myVector.push_back(40);
        myVector.push_back(50);
        easyfind(myVector, 10); 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}