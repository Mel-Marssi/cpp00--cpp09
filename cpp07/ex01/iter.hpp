#pragma once
#include <iostream>

template <typename T, typename X>
void iter(T *array, size_t size, void (*fun)(X&))
{
    for (size_t i = 0; i < size ; i++)
        fun(array[i]);
}

template <typename X>
void  inter( X &ref, X &cst)
{
    ref += cst;
}