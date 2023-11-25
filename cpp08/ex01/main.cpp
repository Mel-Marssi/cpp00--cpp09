#include "Span.hpp"
#include <cstdlib>
#include <deque>
int main()
{
	try
	{

		Span sp = Span(6);

			sp.addNumber(81);
			/*sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);*/

		std::deque<int> tmp;
		for (int i=0; i < 5 ; i++)
		{
			tmp.push_back(rand()%10);
			std::cout << tmp[i]<<" | ";
		}
		std::cout <<std::endl;
		sp.fillSpan(tmp.begin(), tmp.end());
		std::cout << "Shortest Span: " << sp.shortestSpan()<< std::endl;
		std::cout << "Longest Span: " << sp.longestSpan()<< std::endl;
		sp.getVector();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

