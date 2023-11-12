#pragma once
#include <iostream>

template <typename T>
void iter(T *array, size_t size, T (*fun)(T&, T&))
{
    for (size_t i = 0; i < size - 1 ; i++)
        fun(array[i + 1], array[i]);
}

template <typename X>
X  inter( X &ref, X &cst)
{
    ref += cst;
    return (ref);
}