#pragma once


template <typename X>
void  swap(X &a, X &b)
{
    X c = a;
    a = b;
    b = c;
}

template <typename Y>
Y min(Y a, Y b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename Z>
Z max(Z a, Z b)
{
    if (a > b)
        return (a);
    return (b);  
}