#include "PmergeMe.hpp"

vector PmergeMe::vec;
vector_int PmergeMe::sorted_vec;
int PmergeMe::odd = -1;

deque PmergeMe::deq;
sort_deque PmergeMe::s_deq;
int PmergeMe::d_odd = -1;

// PmergeMe::PmergeMe(){}
// PmergeMe::~PmergeMe(){}
// PmergeMe::PmergeMe(const PmergeMe &copy){(void)copy;}
// PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
// {
// 	(void)copy;
// 	return *this;
// }

void PmergeMe::insert_vec(int a , int b)
{
	if (a > b)
		vec.push_back(std::make_pair(b, a));
	else
		vec.push_back(std::make_pair(a, b));
}

int check_atoi(char *av)
{
	long long tmp;
	for(int i = 0; i < (int)strlen(av);i++)
	{
		if (av[i] < '0' || av[i] > '9')
			throw(std::runtime_error("Invalid Character." )); 
	}
	tmp =  atol(av);
	if(tmp > INT_MAX)
		throw(std::runtime_error("Invalid Number." ));
	return (static_cast<int>(tmp));
}
void PmergeMe::ag_to_vec(int ac, char** av)
{
	std::clock_t start;
	std::clock_t end;
	start = std::clock();
	try
	{
		for(int i=1; i < ac ; i+=2)
		{
			if ((ac - 1)%2 != 0 && i == 1)
			{
				odd = check_atoi(av[i]);
				i++;
			}
			insert_vec(check_atoi(av[i]), check_atoi(av[i + 1]));
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	MergeRecursion(vec, vec.size());
	large_element();
	UpperInsertion();
	end = std::clock();
	std::cout << "> Before: ";
	for(int i=1; av[i];i++)
		std::cout << av[i] << " ";
	std::cout <<std::endl;
	std::cout << "> After: ";
	print_vector_int(sorted_vec);
	std::cout << std::fixed << "Time to process a range of " << sorted_vec.size() << " elements with std::vector : " << static_cast<double>(end - start)<< "us" << std::endl;
}

void PmergeMe::large_element()
{
	for(size_t i = 0; i < vec.size(); i++)
	{
		sorted_vec.push_back(vec[i].second);
	}
}

void PmergeMe::UpperInsertion()
{
	sorted_vec.insert(sorted_vec.begin(), vec[0].first);
	for(size_t i = 1; i < vec.size();i++)
		sorted_vec.insert(std::lower_bound(sorted_vec.begin(), sorted_vec.end(), vec[i].first), vec[i].first);
	if (odd != -1)
		sorted_vec.insert(std::lower_bound(sorted_vec.begin(), sorted_vec.end(), odd), odd);

}

void PmergeMe::MergeRecursion(vector &vec, size_t limite)
{
	if (limite == 0)
		return;
	for (int i =0; i + 1 < (int)vec.size();i++)
	{	
		if (vec[i].second > vec[i + 1].second)
		{
			std::swap(vec[i].second, vec[i + 1].second);
			if(vec[i].first > vec[i].second)
			{
				std::swap(vec[i].first, vec[i].second);
			}
			if (vec[i + 1].first > vec[i + 1].second)
			{	
				std::swap(vec[i + 1].first, vec[i + 1].second);
			}
		}
	}
	MergeRecursion(vec, --limite);
}

/************************************DEQUE****************************************************/
void PmergeMe::insert_deq(int a , int b)
{
	if (a > b)
		deq.push_back(std::make_pair(b, a));
	else
		deq.push_back(std::make_pair(a, b));
}

void PmergeMe::ag_to_deq(int ac, char** av)
{
	std::clock_t start;
	std::clock_t end;
	start = std::clock();
	try
	{
		for(int i=1; i < ac ; i+=2)
		{
			if ((ac - 1)%2 != 0 && i == 1)
			{
				d_odd = check_atoi(av[i]);
				i++;
			}
			insert_deq(check_atoi(av[i]), check_atoi(av[i + 1]));
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	MergeRecursion(deq , deq.size());
	deq_large_element();
	deq_UpperInsertion();
	end = std::clock();
	std::cout <<std::endl;
	std::cout << std::fixed;
	std::cout << "Time to process a range of " << s_deq.size() << " elements with std::deque : " << static_cast<double>(end - start) << "us" << std::endl;
}

void PmergeMe::MergeRecursion(deque &deq,size_t limite)
{
	if (limite == 0)
		return;
	it_deque it = deq.begin();
	it_deque it_1 = deq.begin() + 1;
	while (it_1!= deq.end()) 
	{	
		if (it->second > it_1->second)
		{
			std::swap(it->second, it_1->second);
			if(it->first > it->second)
			{
				std::swap(it->first, it->second);
			}
			if (it_1->first > it_1->second)
			{	
				std::swap(it_1->first, it_1->second);
			}
		}
		it++;
		it_1++;
	}
	MergeRecursion(deq, --limite);
}


void PmergeMe::deq_large_element()
{
	for(size_t i = 0; i < deq.size(); i++)
	{
		s_deq.push_back(deq[i].second);
	}
}

void PmergeMe::deq_UpperInsertion()
{
	s_deq.push_front(deq[0].first);
	for(size_t i = 1; i < deq.size();i++)
		s_deq.insert( std::upper_bound(s_deq.begin(), s_deq.end(), deq[i].first), deq[i].first);
	if (d_odd != -1)
		s_deq.insert(std::upper_bound(s_deq.begin(), s_deq.end(), d_odd), d_odd);

}
