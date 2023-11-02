#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm
{
	private:
		const std::string name;
		bool is_it_signed;
		const int Grade_to_sign;
		const int Grade_to_execute;
	public:
		AForm();
		AForm(std::string nom, int a, int b);
		AForm(AForm &copy);
		AForm &operator=(AForm &copy);
		void beSigned(Bureaucrat &emp);
		bool get_signed() const;
		const std::string getName() const;
		 int getGradeSign() const;
		 int getGradeExecute() const;
		~AForm();
virtual void    execute(Bureaucrat const & executor) const  = 0;
		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &op,const AForm &bur);
