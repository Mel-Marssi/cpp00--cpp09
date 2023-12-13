#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	private:
		const std::string name;
		bool is_it_signed;
		const int Grade_to_sign;
		const int Grade_to_execute;
	public:
		Form();
		Form(std::string nom, int a, int b);
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		void beSigned(Bureaucrat &emp);
		bool get_signed() const;
		const std::string getName() const;
		 int getGradeSign() const;
		 int getGradeExecute() const;
		~Form();

		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &op,const Form &bur);
