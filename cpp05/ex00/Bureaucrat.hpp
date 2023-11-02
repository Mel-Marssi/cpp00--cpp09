#pragma once

#include <iostream>
#include<exception>

class  Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		 Bureaucrat();
		 Bureaucrat( Bureaucrat &copy);
		 Bureaucrat &operator=(Bureaucrat &copy);
		std::string const 	 getName() const;
		int 				 getGrade() const;
		void IncrementGrade();
		void DecrementGrade();
		~ Bureaucrat();
		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &op,const Bureaucrat &bur);
