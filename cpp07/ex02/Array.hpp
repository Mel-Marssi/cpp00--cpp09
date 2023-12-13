#pragma once

#include<iostream>
#include <ctime>
#include<exception>
#include <cstdlib>
#include <sys/time.h>

template <typename T>
class Array
{
    private:
        T *arr;
        long long size_arr;
    public:
        Array()
        {
            arr = new T[0]();
            size_arr = 0;
        }
        Array(unsigned int n)
        {
            arr = new T[n]();
            size_arr = n;
        }
        Array(const Array &copy)
        {
            arr = NULL;
            (*this) = copy;
        }
        Array &operator=(const Array &copy)
        {
            if(arr != NULL)
               delete[] arr;
            size_arr = copy.size_arr;
            arr = new T[size_arr]();

            for (long long i = 0 ; i < size_arr ; i++)
                arr[i] = copy.arr[i];

            return (*this);
        }
        T operator[](long long index) const
        {
            if (index >= size_arr || index < 0)
                throw std::runtime_error(" index out of bounds! ");
            return (arr[index]);
        }
        T &operator[](long long index)
        {
            if (index >= size_arr || index < 0)
                throw std::runtime_error(" index out of bounds! ");
            return (arr[index]);
        }
        long long size() const
        {
            return (size_arr);
        }
        void setArr(int)
        {
            for(long long i = 0; i < size_arr ; i++)
                arr[i] = 10 + (i * (i%2));
        }
        void setArr(std::string)
        {
            for(long long i = 0; i < size_arr ; i++)
                arr[i] = "Mourad";
        }
        ~Array()
        {
            delete[] arr;
        }
};



