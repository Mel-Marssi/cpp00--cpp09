#pragma once

#include <deque>
#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>
#include <cmath>
#include <climits>
#include <ctime>
#include <cstring>

typedef std::vector<std::pair<int, int> > vector;
typedef std::vector<std::pair<int, int> >::iterator vec_iterator;

typedef std::vector<int> vector_int;
typedef std::vector<int>::iterator int_iterator;

typedef std::deque<std::pair<int, int> > deque;
typedef std::deque<std::pair<int, int> >::iterator it_deque;

typedef std::deque<int> sort_deque;
typedef std::deque<int>::iterator int_deque;

class PmergeMe
{
	private:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &copy);
		~PmergeMe();
		static vector vec;
		static vector_int sorted_vec;
		static deque deq;
		static sort_deque s_deq;
		static int odd, d_odd;
	public:
		static void insert_vec(int a , int b);
		static void insert_deq(int a , int b);
		static void ag_to_vec(int ac, char **av);
		static void ag_to_deq(int ac, char **av);
		static void MergeRecursion(vector &vec, size_t limite);
		static void MergeRecursion(deque &deq,size_t limite);
		static void large_element();
		static void deq_large_element();
		static void UpperInsertion();
		static void deq_UpperInsertion();
		static void check_if_sorted();
		static void check_if_sorted_2();
};
void print_vector(vector vec);
void print_vector_int(vector_int sorted_vec);
void print_deque(deque vec);
void print_deque_int(sort_deque sorted_vec);

