#pragma once
#include <iostream>
#include<algorithm>
#include <vector>
class Span
{
	private:
		std::vector<int> vec;
		unsigned int size;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		void addNumber(int n);
		int longestSpan();
		int shortestSpan();
		template <typename X>
		void fillSpan( X start,  X end)
		{
			if (std::distance(start, end) + vec.size()  <= size)
				vec.insert(vec.end() , start, end);
			else
				throw(std::out_of_range("Span cannot hold all this elements!"));
		}
		void getVector()const;
		Span &operator=(const Span &copy);
		~Span();
};

