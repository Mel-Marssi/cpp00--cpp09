#pragma once

#include <iostream>
#include <algorithm>
#include<vector>
#include<deque>


template <typename T>
void easyfind(T x, int a)
{
   typename T::iterator it = std::find(x.begin(), x.end(), a);

    if (it == x.end())
        throw(std::out_of_range("Element not found!"));
    else
        std::cout << *it <<" Element has been found." <<std::endl;
}
