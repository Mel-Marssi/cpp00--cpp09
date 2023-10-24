#pragma once
#include <iostream>
#include <string>

class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		void filter(std::string level);
		Harl();
		~Harl();
};