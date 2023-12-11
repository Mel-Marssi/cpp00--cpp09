#include "PmergeMe.hpp"

void print_vector(vector vec)
{
	vec_iterator i = vec.begin();

	for (; i != vec.end(); i++)
		std::cout << i->first << " " << i->second << "  ";
	std::cout <<std::endl;
}
void print_vector_int(vector_int sorted_vec)
{
	int_iterator i = sorted_vec.begin();

	for (; i != sorted_vec.end(); i++)
		std::cout << *i << " ";
	std::cout <<std::endl;
}

void print_deque(deque vec)
{
	it_deque i = vec.begin();

	for (; i != vec.end(); i++)
		std::cout << i->first << " " << i->second << "  ";
	std::cout <<std::endl;
}
void print_deque_int(sort_deque sorted_vec)
{
	int_deque i = sorted_vec.begin();

	for (; i != sorted_vec.end(); i++)
		std::cout << *i << " ";
	std::cout <<std::endl;
}
void PmergeMe::check_if_sorted()
{
	for (int i=0; i + 1 < (int)sorted_vec.size();i++)
	{
		if (sorted_vec[i] > sorted_vec[i + 1])
			throw(std::runtime_error("Not Sorted!"));	
	}
}

void PmergeMe::check_if_sorted_2()
{
	for (int i=0; i + 1 < (int)s_deq.size();i++)
	{
		if (s_deq[i] > s_deq[i + 1])
			throw(std::runtime_error("Not Sorted!2"));	
	}
}

int main(int ac,char** av)
{
	if (ac < 2)
		return(1);
	PmergeMe::ag_to_vec(ac, av);
	PmergeMe::ag_to_deq(ac, av);

	try
	{
		PmergeMe::check_if_sorted();
		PmergeMe::check_if_sorted_2();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
