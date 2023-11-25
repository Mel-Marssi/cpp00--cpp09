#pragma once

#include <iostream>
#include<deque>
#include<queue>
#include <stack>
#include<vector>
#include<list>

template <typename T, typename cont= std::deque<T> >
class MutantStack: public std::stack<T, cont>
{
	public:
		MutantStack(){};
		MutantStack(MutantStack const &copy):std::stack<T, cont>(copy)
		{
			(*this) = copy;
		}
		MutantStack &operator=(MutantStack const &copy)
		{
			(void)copy;
			return (*this);
		}
		// typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename cont::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		};
		iterator end(){
			return this->c.end();
			
		};
		~MutantStack(){};
};